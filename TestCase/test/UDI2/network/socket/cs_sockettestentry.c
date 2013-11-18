#include "cs_testkit.h"
#include "cs_sockettestentry.h"
//#include "sub/cs_subtestentry.h" ///下级测试用例的目录

#include "cs_sockettestcase.h"

/*begin change*/
//static CSTestInit_S s_sTestInit = {NULL, NULL};
static CSTestInit_S s_sTestInit = {CSTC_SOCKET_Init, CSTC_SOCKET_UnInit};
static CSTestCase_S s_asTestCase[] = 
{
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0001)},//CS_TK_AUTOCASE,测试过程无需干预
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0006)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0007)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0008)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0009)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0010)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0011)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0012)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0013)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0014)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0015)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0016)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Socket_0017)},
	
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0018)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0019)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0020)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0021)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0022)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0023)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0024)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0025)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0026)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0027)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Socket_0028)},
	
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0006)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0007)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0008)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0009)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0010)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Bind_0011)},
	
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0012)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0013)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0014)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0015)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0016)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0017)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0018)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0019)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0020)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Bind_0021)},	
	
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0006)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Listen_0007)},

	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Listen_0008)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Listen_0009)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Listen_0010)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Listen_0011)},	
	
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Connect_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0006)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0007)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0008)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0009)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Connect_0010)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Connect_0011)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Connect_0012)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Connect_0013)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Accept_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Accept_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Accept_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Accept_0004)},

	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Accept_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_BlueTooth_Accept_0006)},
	
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Send_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Send_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Send_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Send_0004)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Send_0005)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Recv_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Recv_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Recv_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Recv_0004)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Recv_0005)},

	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_BlueTooth_Recv_0006)},	
	
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_SendTo_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0006)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0007)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0008)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0009)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0010)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0011)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SendTo_0012)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_RecvFrom_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_RecvFrom_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_RecvFrom_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_RecvFrom_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_RecvFrom_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_RecvFrom_0006)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Select_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Select_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Select_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Select_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Select_0005)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_Select_0006)},
	
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Fcntl_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Fcntl_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Fcntl_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetGetSockOpt_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetGetSockOpt_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetGetSockOpt_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetGetSockOpt_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetGetSockOpt_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetSockOpt_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetSockOpt_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_SetSockOpt_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockOpt_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockOpt_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockOpt_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockOpt_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetProtoByName_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetProtoByName_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetServByName_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetServByName_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetServByName_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetServByName_0004)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_GetPeerName_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_GetPeerName_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_GetPeerName_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_GetPeerName_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockName_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockName_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockName_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetSockName_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetHostName_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetHostName_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetHostByAddr_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GetHostByAddr_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_addr_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_addr_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_addr_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_aton_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_aton_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_aton_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_ntoa_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_ntoa_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_pton_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_pton_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_ntop_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Inet_ntop_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Ntohs_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Ntohs_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Ntohl_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Ntohl_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Htons_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Htons_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Htonl_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Htonl_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_ShutDown_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_ShutDown_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_ShutDown_0003)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_ShutDown_0004)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_ShutDown_0005)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Close_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Close_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_GT_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GT_0002)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_GT_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_GT_0004)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_MIDP_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_MIDP_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_MIDP_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_MIDP_0004)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_MIDP_0005)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_JVM_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0001)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0002)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0003)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0005)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0006)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0007)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0008)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0009)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0012)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0015)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0016)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0017)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0018)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0019)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0020)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0021)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0022)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0023)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0024)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_0025)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_0026)},
	{CS_TK_AUTOCASE(CSTC_SOCKET_IT_Ioctl_0001)},
	{CS_TK_MANUALCASE(CSTC_SOCKET_IT_00027)},
	CS_TK_ENDCASE //测试用例结束标记，必须要有，且在最后一个
};


static CSTestGetObj_F s_afnTestGetObj[]= 
{
	CSSOCKETTESTGetObj,	//对应自己，必须是第一个，必须要有
	//CSSUBTESTGetObj,	//下级测试用例目录入口，可以没有
};
/*end change*/

CS_TEST_BUILD_FRAME_CODE(SOCKET)
/*end don't change*/

