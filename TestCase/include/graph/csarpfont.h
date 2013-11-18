/**
文件名称 :   csarpfont.h
版权所有(c) 2009， 同洲电子。
 
@version  Ver 1.0    
@author   龙式荣 (longshirong@coship.com)
 
@brief
 		  文件功能说明
  
@history 
版本号		日期		作者		修改内容
---------	     --------	     --------  	-------------
    1.0		   2009-09-15	     龙式荣	  	创建
*/

#ifndef _CSARPFONT_H
#define _CSARPFONT_H

#include "mwfont.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
@brief  功能描述:
		获取到文鼎字库的注册指针
 
@param[in]
		无
 
@param[out] 
		无
 
@return
 		文鼎字库的注册指针
@exception
@note
*/
GR_FONT_Driver_Proc *  GrFont_GetARPProc(void);


#ifdef __cplusplus
}
#endif


#endif


