/**
�ļ����� :   csarpfont.h
��Ȩ����(c) 2009�� ͬ�޵��ӡ�
 
@version  Ver 1.0    
@author   ��ʽ�� (longshirong@coship.com)
 
@brief
 		  �ļ�����˵��
  
@history 
�汾��		����		����		�޸�����
---------	     --------	     --------  	-------------
    1.0		   2009-09-15	     ��ʽ��	  	����
*/

#ifndef _CSARPFONT_H
#define _CSARPFONT_H

#include "mwfont.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
@brief  ��������:
		��ȡ���Ķ��ֿ��ע��ָ��
 
@param[in]
		��
 
@param[out] 
		��
 
@return
 		�Ķ��ֿ��ע��ָ��
@exception
@note
*/
GR_FONT_Driver_Proc *  GrFont_GetARPProc(void);


#ifdef __cplusplus
}
#endif


#endif

