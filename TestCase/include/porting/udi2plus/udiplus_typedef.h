/**@defgroup TYPEDEF_PLUS TYPEDEF Plus UDI TYPEDEF ģ��Ĳ���ģ�飬�ṩ���ݵ����ݶ���

@brief ��ģ���Ϊ���־ɷ����汾�ļ��ݶ����壬ԭ���ϲ��Ƽ�����ģ����ʹ�ñ�ģ���еĶ��塣
��ģ���еĶ��������MMCP�ڲ�ģ�鼰�ڲ�ͷ�ļ���ʹ�ã�Ҳ�����ڻ���GUI+USPģʽ�Ĳ�Ʒ��ʹ�ã�
��������Eastwinϵ�в�Ʒ�Ķ���ͷ�ļ���ʹ��

@warning ��ģ�����MMCP�ڲ�ʹ�ã�����������ģ����κζ��塢�ӿ��ṩ��MMCP�����ģ��ʵ�ã�������������UDI�����ɽӿ���
@warning ����������Ҫ��MMCP�ⲿ������ͷ�ļ��а�����ͷ�ļ�
 
@version 2009/10/09 ����UDI2.1�汾�Ķ��壬���µ�����ģ��
- ��ʼ�汾
@{
*/

#include "udi2_typedef.h"
#include "udi2_error.h"

#ifndef _UDIPLUS_TYPEDEF_H_
#define _UDIPLUS_TYPEDEF_H_

#ifdef  __cplusplus
extern "C" {
#endif

#ifndef WIN32
typedef char			 CHAR;
typedef CHAR			 *PCHAR;
typedef CHAR			 *LPCHAR;

typedef unsigned char    UCHAR;
typedef UCHAR			 *PUCHAR;
typedef UCHAR			 *LPUCHAR;

typedef short			 SHORT;
typedef SHORT			 *PSHORT;
typedef SHORT			 *LPSHORT;

typedef unsigned short   USHORT;
typedef USHORT			 *PUSHORT;
typedef USHORT			 *LPUSHORT;

typedef long			 LONG;
typedef LONG			 *PLONG;
typedef LONG			 *LPLONG;

typedef unsigned long	 ULONG;
typedef ULONG			 *PULONG;
typedef ULONG			 *LPULONG;

typedef int              INT;
typedef int              *PINT;
typedef int              *LPINT;

typedef unsigned int     UINT;
typedef unsigned int     *PUINT;
typedef unsigned int     *LPUINT;

typedef float            FLOAT;
typedef FLOAT            *PFLOAT;
typedef FLOAT            *LPFLOAT;

typedef void			 VOID;
typedef void			 *PVOID;
typedef void             *LPVOID;
typedef const void       *LPCVOID;

typedef CSUDI_INT8		 INT8;
typedef CSUDI_INT16		 INT16;
typedef CSUDI_INT32		 INT32;
typedef CSUDI_UINT8	     UINT8;
typedef CSUDI_UINT16 	 UINT16;
typedef CSUDI_UINT32	 UINT32;

#ifndef DEFINED_BOOL
typedef CSUDI_BOOL       BOOL;
#define  DEFINED_BOOL
#endif

typedef BOOL             *PBOOL;
typedef BOOL             *LPBOOL;

typedef CSUDI_UINT8		 BYTE;
typedef BYTE             *PBYTE;
typedef BYTE             *LPBYTE;

typedef CSUDI_UINT16	 WORD;
typedef WORD             *PWORD;
typedef WORD             *LPWORD;

typedef unsigned int     DWORD;
typedef DWORD            *PDWORD;
typedef DWORD            *LPDWORD;
#else
	#include <windows.h>
#endif

typedef DWORD       	 HCSHANDLE; 

/*Standard constants*/
#undef FALSE
#undef TRUE
#undef NULL

#define FALSE   		 (CSUDI_FALSE)
#define TRUE    		 (CSUDI_TRUE)
#define NULL    		 (0)


#ifndef SUCCESS
#define SUCCESS			 (CSUDI_SUCCESS)
#endif

#ifndef FAILURE
#define FAILURE			 (CSUDI_FAILURE) 
#endif

#ifdef	__cplusplus
}
#endif
/** @} */

#endif
