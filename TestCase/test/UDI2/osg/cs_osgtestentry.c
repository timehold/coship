#include "cs_testkit.h"
#include "cs_osgtestentry.h"
#include "cs_osgtestcase.h"

/*begin change*/
static CSTestInit_S s_sTestInit = {CSTC_OSG_Init, CSTC_OSG_UnInit};
static CSTestCase_S s_asTestCase[] = 
{
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateSurface_0001)},//CS_TK_AUTOCASE,测试过程无需干预
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateSurface_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateSurface_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateSurface_0004)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateSurface_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateSurface_0006)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DestroySurface_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DestroySurface_0002)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_GetDisplaySurface_0001)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_GetDisplaySurfaceInfo_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_GetDisplaySurfaceInfo_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_GetSurfaceInfo_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_GetSurfaceInfo_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_GetSurfaceInfo_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_GetSurfaceInfo_0004)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_SetSurfaceInfo_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_SetSurfaceInfo_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_SetSurfaceInfo_0003)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_CreateDestorySetGetSurface_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0006)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0007)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0008)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0009)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0010)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0011)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0012)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0013)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0014)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0015)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0016)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0017)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0018)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0019)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0020)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0021)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0022)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0023)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0024)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0025)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0026)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0027)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0028)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0029)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0030)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0031)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0032)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0033)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0034)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0035)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0036)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0037)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0038)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0039)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0040)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0041)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0042)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0043)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0044)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0045)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0046)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0047)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0048)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0049)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0050)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0051)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0052)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0053)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0054)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Rect_0055)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0006)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0007)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Ckey_0008)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_Blit_Alpha_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0006)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0007)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0008)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0009)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0010)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0011)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0012)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0013)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0014)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0015)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0016)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0017)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0018)},	
#if 0
	//hi3716平台公式不同导致测试不通过，暂不测试
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0019)}, 
#endif
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0020)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Alpha_0021)},		
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0001)},
#if 0
	//中间件暂未使用这些混合模式
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0006)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0007)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0008)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0009)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0010)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0011)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0012)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0013)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0014)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0015)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_OpMode_0016)},
#endif
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Surface_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Surface_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Surface_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Surface_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Blit_Surface_0005)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0006)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0007)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0008)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0009)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0010)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0011)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0012)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0013)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0014)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0015)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0016)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0017)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0018)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0019)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0020)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0021)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0022)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0023)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0024)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0025)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0026)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0027)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0028)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0029)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0030)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0031)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0032)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0033)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0034)},					
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0035)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Fill_0036)},
    {CS_TK_AUTOCASE(CSTC_OSG_IT_Sync_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Sync_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_Sync_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DecodeImage_0001)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0002)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0003)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0004)},
#if 0
	//不要求平台必须支持bmp格式图片硬解码，不测试
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0005)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0006)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0007)},
#endif
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0008)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0009)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0010)},
#if 0
	//不要求平台必须支持png格式图片硬解码，不测试
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0011)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0012)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0013)},
#endif
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DecodeImage_0014)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DecodeImage_0015)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0016)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0017)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0018)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0019)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0020)},
#if 0
	//图片大小为8192*8192、2848*4272的fullsize模式不测试
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0021)}, 
#endif
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0022)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0023)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0024)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0025)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0026)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0027)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0028)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0029)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DecodeImage_0030)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_DecodeImage_0031)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_DecodeImage_0032)},	
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0001)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0002)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0003)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0004)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0005)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0006)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0007)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0008)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0009)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0010)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0011)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0012)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0013)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0014)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0015)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0016)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0017)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0018)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0019)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0020)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0021)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0022)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0023)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0024)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0025)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0026)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0027)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0028)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0029)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0030)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0031)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0032)},
	{CS_TK_AUTOCASE(CSTC_OSG_IT_0033)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0034)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0035)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0036)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0037)},	
	{CS_TK_MANUALCASE(CSTC_OSG_IT_0038)},		
	{CS_TK_MANUALCASE(CSTC_OSG_IT_Resolution_0001)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_POWERON_SCENE_0001)},
	{CS_TK_MANUALCASE(CSTC_OSG_IT_GLOBAL_EFFECT_0001)},	
	CS_TK_ENDCASE //测试用例结束标记，必须要有，且在最后一个
};


static CSTestGetObj_F s_afnTestGetObj[]= 
{
	CSOSGTESTGetObj,	//对应自己，必须是第一个，必须要有
};
/*end change*/

CS_TEST_BUILD_FRAME_CODE(OSG)
/*end don't change*/

