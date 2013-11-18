/**@defgroup  
@brief 
1、本模块定义的ip地址采用形如"192.168.1.1"的ASII码字符串方式表示，定义最大长度为16个字节(最后一个字节为\0)
2、本模块定义的ip地址范围采用形如"192.168.1.1~255"的字符串方式表示，定义最大长度为20(最后一个字节为\0)
2、本模块使用的MAC地址采用形如{0x00,0x0e,0x09,0x11,0x12,0xe1}的无符号BYTE数组方式表示，定义的长度是6个字节

@version 2.0.1 2011/11/14 
@{
*/
#ifndef _CS_APCTRL_SERVER_AP_H_
#define _CS_APCTRL_SERVER_AP_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "csapctrlserver.h"

#define CSAPCTRLSAP_SSID_NAME_LEN (32)			///<SSID最大长度
#define CSAPCTRLSAP_PASSWORD_LEN (32)			///<无线连接密码最大长度

/**@brief  AP错误类型枚举定义*/
enum
{    
	CSAPCTRLSAP_ERROR_BAD_PARAMETER = 128 << 16, 		///<参数错误
	CSAPCTRLSAP_ERROR_SET_PARAMETER,					///<设置参数	失败
	CSAPCTRLSAP_ERROR_GET_PARAMETER,					///<获取参数失败
	CSAPCTRLSAP_ERROR_SSID_NOT_EXIST,					///<SSID不存在
	CSAPCTRLSAP_ERROR_EXCEED_MAX_NUMBER				///超过最大支持个数
};

/**@brief  无线信号频道枚举定义*/
typedef enum{
	EM_APCTRLSAP_CHANNEL_1_2412M,
	EM_APCTRLSAP_CHANNEL_2_2417M,
	EM_APCTRLSAP_CHANNEL_3_2422M,
	EM_APCTRLSAP_CHANNEL_4_2427M,
	EM_APCTRLSAP_CHANNEL_5_2432M,
	EM_APCTRLSAP_CHANNEL_6_2437M,
	EM_APCTRLSAP_CHANNEL_7_2442M,
	EM_APCTRLSAP_CHANNEL_8_2447M,
	EM_APCTRLSAP_CHANNEL_9_2452M,
	EM_APCTRLSAP_CHANNEL_10_2457M,
	EM_APCTRLSAP_CHANNEL_11_2462M,
	EM_APCTRLSAP_CHANNEL_12_2467M,
	EM_APCTRLSAP_CHANNEL_13_2472M,
	EM_APCTRLSAP_CHANNEL_14_2484M,
	EM_APCTRLSAP_CHANNEL_AUTO
}CSAPCTRLSAPFreqChannel_E; 

/**@brief  WIFI连接模式枚举定义*/
typedef enum{
	EM_APCTRLSAP_WIFI_MODE_11B = 1,			///< 该模式仅仅支持 802.11b标准
	EM_APCTRLSAP_WIFI_MODE_11G,				///< 该模式仅仅支持 802.11g标准
	EM_APCTRLSAP_WIFI_MODE_11N,				///< 该模式仅仅支持 802.11n标准
	EM_APCTRLSAP_WIFI_MODE_11BG,			///< 该模式支持 802.11b  &  802.11g标准
	EM_APCTRLSAP_WIFI_MODE_11BGN 			///< 该模式支持 802.11b  &  802.11g & 802.11n标准
}CSAPCTRLSAPWIFIMode_E; 

/**@brief BG保护模式枚举定义*/
typedef enum{
	EM_APCTRLSAP_BGPROTECT_MODE_AUTO,   			///<自动
	EM_APCTRLSAP_BGPROTECT_MODE_OPEN,				///<开
	EM_APCTRLSAP_BGPROTECT_MODE_CLOSE				///<关
}CSAPCTRLSAPBGProtectMode_E;

/**@brief 无线认证方式枚举定义*/
typedef enum{
	EM_APCTRLSAP_AUTH_OPEN, 				///<开放式，只能用于CSUDISS_ENCRYP_WEP加密方式
	EM_APCTRLSAP_AUTH_SHARE,  			///<共享式,只能用于CSUDISS_ENCRYP_WEP加密方式
	EM_APCTRLSAP_AUTH_AUTO,  			///<自适应,只能用于CSUDISS_ENCRYP_WEP加密方式
	EM_APCTRLSAP_AUTH_WPAPSK, 			///<WPAPSK认证方式
	EM_APCTRLSAP_AUTH_WPA2PSK,			///<WPA2PSK认证方式
	EM_APCTRLSAP_AUTH_WPAPSK_WPA2PSK,  ///<WPAPSK & WPA2PSK认证方式
}CSAPCTRLSAPAuthMode_E; 

/**@brief 无线加密方式枚举定义*/
typedef enum{
	EM_APCTRLSAP_ENCRYP_WEP,			///WEP加密方式
	EM_APCTRLSAP_ENCRYP_TKIP,			///TKIP加密方式
	EM_APCTRLSAP_ENCRYP_AES,				///AES加密方式
	EM_APCTRLSAP_ENCRYP_TKIP_AES,		///TKIP&AES混合加密方式
	EM_APCTRLSAP_ENCRYP_NONE 			///不加密
}CSAPCTRLSAPEncrypType_E; 

/**@brief SSID 结构体 定义*/
typedef struct{
	int nIndex;     						///<SSID的索引号，nIndex=0的SSID为主SSID必须是使能状态
	char szSSID[CSAPCTRLSAP_SSID_NAME_LEN];  	///<SSID名称
	CSUDI_BOOL bIsEnable;				 ///使能标志，表示该SSID是否可以被接入
}CSAPCTRLSAPSSID_S; 

/**@brief SSID 配置信息定义*/
typedef struct{
	CSAPCTRLSAPWIFIMode_E   eMode;					///<WIFI连接模式
	CSAPCTRLSAPAuthMode_E   eAuthMode; 				///<认证方式，如果eEncrypType == EM_APCTRLSAP_NONE,该成员被忽略
	CSAPCTRLSAPEncrypType_E eEncrypType;				///<AP 加密方式
	char szPassWord[CSAPCTRLSAP_PASSWORD_LEN]; 		//如果eEncrypType == EM_APCTRLSAP_NONE,该成员被忽略
	unsigned int uUpdateTime; 						///<如果eEncrypType == EM_APCTRLSAP_NONE,该成员被忽略
}CSAPCTRLSAPSSIDConfig_S;

/**@brief AP接入的主机记录信息*/
typedef struct{
	char aucIp[CSAPCTRLS_IP_LEN]; 	 		///< IP地址,
	unsigned char aucMac[CSAPCTRLS_MAC_LEN];  		///< MAC地址,
	unsigned int 	uSpeed;  					///< 连接速率,单位Mbps
	CSAPCTRLSAPWIFIMode_E eMode;				///< 工作模式
	unsigned	int 	uSignalStrength; 				///< 信号强度
}CSAPCTRLSAPStationInfo_S;

/**@brief AP高级参数信息*/
typedef struct{
	CSAPCTRLSAPBGProtectMode_E eBGMode;		///<BG保护模式
	int nBeaconInterval;   				///<信标间隔20 ~ 999
	int nDivideLimit;  					///<分割界限256 ~ 2346
	int nTranferLimit;  				///<传输请求分割界限1 ~ 2347
	int nFreqPower;  					///<发射功率0 ~ 100
	CSUDI_BOOL bShortStartCode;  	///<是否启用短前导码
	CSUDI_BOOL bShortClashSlot;  		///<是否启动短碰撞槽
	CSUDI_BOOL bTransportBurst;  		///<是否启用传输突发
	CSUDI_BOOL bDataPacketGrab;  	///<是否启动数据包聚合
}CSAPCTRLSAPAdvancedInfo_S;

/**@brief AP配置信息*/
typedef struct{
	CSUDI_BOOL bSignalEnable;  		///<	是否打开无线信号，TRUE，打开无线信号，FALSE关闭无线信号
	CSAPCTRLSAPFreqChannel_E eChannel;	///<频道，详见CSAPCTRLSAPFreqChannel_E定义
	CSUDI_BOOL bSSIDSeparateEnable;	///<打开或关闭AP隔离
}CSAPCTRLSAPConfig_S;

/**
@brief 打开或者关闭AP的无线信号

@param[in] pszApName 需要关闭信号的AP接口名
@param[in] bEnable 取值TRUE时打开无线信号;否则关闭无线信号
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPSetSignal(const char* szApName,CSUDI_BOOL bEnable);

/**
@brief 设置AP信道

@param[in] pszApName AP接口名
@param[in] enChannel 设置的信道
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPSetFreqChannel(const char* szApName,CSAPCTRLSAPFreqChannel_E eChannel);

/**
@brief 打开或者关闭AP隔离，当打开SSID隔离时，通过不同SSID接入的station不能互通

@param[in] pszApName AP接口名
@param[in] bEnable 取值TRUE 时使能SSID隔离;否则关闭SSID隔离
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPSetSSIDSeparate(const char* szApName,CSUDI_BOOL bEnable);

/**
@brief 获取AP配置信息

@param[in] szApName:AP名称
@param[out] pstOutConfig:存放AP配置信息
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPGetConfig(const char* szApName,CSAPCTRLSAPConfig_S* pstOutConfig);

/**
@brief 获取AP支持的最大SSID个数

@param[in] pszApName AP接口名
@param[out] pnCount 保存获取到的最大SSID个数的指针
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPGetSSIDCapbility(const char* szApName,int *pnMaxCount);

/**
@brief 获取用户设置的所有的SSID

@param[in] pszApName AP接口名
@param[out] psOutSSIDs保存所有SSID信息
@param[in/out] pnCount SSID个数,输入传入数组大小，输出实际获取到的个数
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPGetSSIDs(const char* szApName,CSAPCTRLSAPSSID_S* psOutSsids,int* pnCount);

/**
@brief 设置SSID

@param[in] pszApName AP接口名
@param[int] pahOutSsids 所需要设置的所有SSID的信息
@param[int] nCount 需要设置的SSID个数
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPSetSSIDs(const char* szApName,const CSAPCTRLSAPSSID_S* psOutSsids,int nCount);

/**
@brief 设置SSID配置信息

@param[in] szSsid :ssid
@param[in] psConfig:ssid配置信息  
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPSetSSIDConfig(const char* szSsid,const CSAPCTRLSAPSSIDConfig_S* psConfig);

/**
@brief 获取SSID配置信息

@param[in] szSsid:ssid
@param[out] psOutConfig 保存ssid配置信息
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPGetSSIDConfig(const char* szSsid,CSAPCTRLSAPSSIDConfig_S* psOutConfig);

/**
@brief 获取接入AP的主机信息

@param[in] szSsid:ssid
@param[out] psOutArray:保存接入的主机信息
@param[in/out] pnCount:实际接入的主机个数,输入传入数组大小，输出实际获取到的个数
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPGetStationsInfo(const char* szSsid,CSAPCTRLSAPStationInfo_S* psOutArray,int* pnCount);

/**
@brief 设置指定AP的高级参数

@param[in] pszApName AP接口名
@param[in] psInfo 设置参数指针
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
*/
CSUDI_Error_Code CSAPCTRLSAPSetAdvancedInfo(const char* szApName,const CSAPCTRLSAPAdvancedInfo_S *psInfo);

/**
@brief 获取指定AP高级参数的用户设置

@param[in] pszApName AP接口名
@param[out] psOutInfo 用于保存获取信息的指针
@return 
- 如果成功返回CSUDI_SUCCESS。
- 如果失败返回错误码
@note 如果用户从来没有设置过则返回默认配置
*/
CSUDI_Error_Code CSAPCTRLSAPGetAdvancedInfo(const char* szApName,CSAPCTRLSAPAdvancedInfo_S *psOutInfo);

#ifdef __cplusplus
}
#endif

/** @} */

#endif


