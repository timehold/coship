/**@defgroup CSUART[CSUART]ͬ����Ŀר��UART�����ӿ�
@brief ��ģ����Ҫ������ͬ����Ŀר��ƽ̨�޹�UART�����ӿ�
@brief UART (Universal Asynchronous Receiver/Transmitter) ͨ���첽�շ���������udi��MMCP�м�㲻���õ����ģ�飬�����ھ���Ļ���MMCP����Ŀ�������ļ���Ӧ�û��õ���
 
@version 0.2 2008/10/17 �����ĵ�һ���汾
@version 0.1 2008/10/16 ��ʾ�汾
@{
*/

#ifndef _CS_UART_PLUS_H_
#define _CS_UART_PLUS_H_

#include  "udiplus_typedef.h"
#include  "cs_hdicommon_plus.h"

#ifdef __cplusplus
extern "C" {
#endif

/**@brief ���ڲ�������*/
typedef enum
{
	UART_STOP_BIT_NUM, 	/**< Type:T_UartStopBitNum */
	UART_DATA_LENGTH, 	/**< Type:T_UartDataLength*/
	UART_PARITY, 		/**<  Type:T_UartParityType */
	UART_BAUD_RATE 		/**<  Type:DWORD */
}T_UartParamType;

/**@brief ���ڲ����е�ֹͣλ����*/
typedef enum
{ 
	UART_ONE_STOP_BIT, 	/**<1λֹͣλ*/
	UART_TWO_STOP_BIT	/**< 2λֹͣλ*/
}T_UartStopBitNum;


/**@brief ���ڲ����е����ݳ��ȶ���*/
typedef enum
{
	UART_7_BIT_DATA,	/**< ����λΪ7bit*/
	UART_8_BIT_DATA	/**< ����λΪ8bit*/
}T_UartDataLength;


/**@brief ���ڲ����е���żУ�鶨��*/
typedef enum
{
	UART_NO_PARITY,		/**< ��У��*/
	UART_ODD_PARITY,		/**< ��У��*/
	UART_EVEN_PARITY		/**< żУ��*/
}T_UartParityType;


/**@brief ���ڲ����еĹ���ģʽ����,����CSSetUartModeʹ��,CSSetUartMode�Ѵ�ͷ�ļ���ɾ��*/
typedef enum
{
	UART_PRINT_MODE,		/**< ������˵��*/
	UART_DATA_MODE,		/**< ������˵��*/
	UART_OTHER_MODE		/**< ������˵��*/
}T_UartModeType;


/**
@brief �Ե�nUartIndex·���ڽ��г�ʼ������ʹ�ô���ǰ����Ը�·���ڽ��г�ʼ��������û�Ҫ����common clock��ֵ������ڳ�ʼ������ǰ���ú���CSHDIUartSetCustomParam��

@param[in] nUartIndex  Ҫ��ʼ�����ڵ����������ڲ�ͬ��ƽ̨�����ڵ�������һ�����������ڹ��ܵ�ASCҲ��ͬ�����Ӿ���Ӳ����ƶ��������µ�Ӳ��ƽ̨�Ͻ��п���ʱ������Ӳ������ʱʦ��������������ʦѯ�ʾ����ȡֵ��
@param[in] dwBaud ���ڵĴ������ʡ�һ��Ϊ115200bps
@return
- CSHDI_ERROR_BAD_PARAMETER������������Ϸ���
- CSHDI_ERROR_ALREADY_INITIALIZED����·������֮ǰ�Ѿ�����ʼ�����ˡ�
- CSHDI_FAILURE�����ڳ�ʼ��ʧ�ܡ�
- CSHDI_SUCCESS�����ڳ�ʼ���ɹ���
@note ���ڳ�ʼ������gpio��ʼ��֮��
*/
CSHDI_Error_t CSHDIUartInitial  ( int  nUartIndex, UINT dwBaud);


/**
@brief ����Ĭ�ϵĴ��ڡ�

@param[in] nUartIndex Ҫ���ó�Ĭ�ϴ��ڵĴ���������
@return ����ɹ��򷵻��û��趨�Ĵ���������������ɹ����򷵻��û���ǰ�趨��Ĭ�ϴ��ڵ�����������û���ǰû�����ù�Ĭ�ϵĴ��ڣ��򷵻�������ʼ��ʱĬ�ϵĴ�������(2)��
@note ����Ĭ�ϴ������ڶ�д����ǰ��
*/
int CSHDIUartSetDefault ( int  nUartIndex);

/**
@brief �Ӵ���nUartIndex��ȡu32Length�����ݣ���ȡ�����ݴ�ŵ� pucBuffer����ʱʱ��Ϊu32TimeOut��

@param[in] nUartIndex Ҫ�����Ĵ���������
@param[in] pucBuffer ���ڴ�Ŷ�ȡ�����ݵĻ��档
@param[in] u32Length Ҫ��ȡ���ݵĳ��ȡ�
@param[in] u32TimeOut ��ʱʱ�䣬�����ַ�֮��ĳ�ʱʱ�䡣
@return ����ʵ�ʶ��������ݵĳ��ȡ�
*/
ULONG  CSHDIUartReadFromWithTimeout ( int  nUartIndex ,PBYTE pucBuffer, ULONG u32Length, ULONG u32TimeOut);

/**
@brief �򴮿�nUartIndex����u32Length�����ݣ�Ҫ���͵����ݴ���� pucBuffer�У���ʱʱ��Ϊu32TimeOut��

@param[in] nUartIndex Ҫ�����Ĵ���������
@param[in] pucBuffer ���Ҫ�������ݵĻ��档
@param[in] u32Length Ҫ�������ݵĳ��ȡ�
@param[in] u32TimeOut ��ʱ��ʱ�䣬�����ַ�֮��ĳ�ʱʱ�䡣
@return ����ʵ�ʷ��͵����ݵĳ��ȡ�
*/
ULONG  CSHDIUartWriteToWithTimeout( int  nUartIndex ,PBYTE pucBuffer, ULONG u32Length, ULONG u32TimeOut);


/**
@brief ����ָ�����ڵĲ����������T_UartParamType����

@param[in] nUartIndex ��������
@param[in] enmType ��������
@param[in] pVaule �������ݵ��׵�ַ
@return 
	CSHDI_SUCCESS:���óɹ�
	CSHDI_FAILURE:����ʧ��
	CSHDI_ERROR_BAD_PARAMETER: ��������
*/
CSHDI_Error_t CSHDIUartSetParam(int  nUartIndex, T_UartParamType enmType, void *pVaule);

/**
@brief ��ȡָ�����ڵĲ���

@param[in] nUartIndex ��������
@param[in] enmType ��������
@param[out] pVaule  ��Ų���ֵ���׵�ַ
@return  
	CSHDI_SUCCESS:���óɹ�
	CSHDI_FAILURE:����ʧ��
	CSHDI_ERROR_BAD_PARAMETER: ��������
*/
CSHDI_Error_t CSHDIUartGetParam(int  nUartIndex, T_UartParamType enmType, void *pVaule);


/**
@brief �ر�ָ������,�رպ����ͨ�����ó�ʼ���ӿڷ��ɻָ����ڹ�����

@param[in] nUartIndex ��������
@return
	CSHDI_SUCCESS: �رճɹ�
	CSHDI_FAILURE:  �ر�ʧ��
	CSHDI_ERROR_BAD_PARAMETER: ��������
*/
CSHDI_Error_t CSHDIUartTerm(int nUartIndex);

/**
@brief ��ȡUARTģ��汾��Ϣ����ʾ��ʽΪ:
  [ģ����]-[ģ������]-[�汾��],��UART_OS_T_01.00.00, UART��ʾģ����,OS��ʾ+os������NOOS��ʾ-os������T��ʾtest�汾,01.00.00Ϊ�汾��

@param[out] pchVer ��Ű汾��Ϣ�Ļ������׵�ַ
@param[in] nSize  ����������
@return 
   1> �����һ������pchVerΪ�գ����ذ汾��Ϣ��ʵ�ʳ���
   2> �����һ��������Ϊ�գ��Һ������óɹ����򷵻�ʵ
        �ʻ�ȡ�İ汾��Ϣ����
   3> ���ʧ�ܣ�����0
*/

int CSUARTGetVersion( PCHAR pucVer, int nSize );


#ifdef __cplusplus
}
#endif

/** @} */

#endif


