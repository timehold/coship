#include "cs_testkit.h"
#include "cs_screentestentry.h"
#include "cs_screentestcase.h"

/*begin change*/
static CSTestInit_S s_sTestInit = {CSTC_SCREEN_Init, CSTC_SCREEN_UnInit};
static CSTestCase_S s_asTestCase[] = 
{
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_AddCallback_0001)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_AddCallback_0002)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_AddCallback_0003)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_DelCallback_0001)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_DelCallback_0002)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_DelCallback_0003)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_BeforeSetResolution_0001)},	
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_SetResolution_0001)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_SetResolution_0002)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_SetResolution_0003)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0004)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0005)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0006)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0007)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0008)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0009)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0010)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0011)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetResolution_0012)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_SetResolution_0013)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_SetResolution_0014)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_GetResolution_0001)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_GetResolution_0002)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_GetCapability_0001)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_GetCapability_0002)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetBrightness_0001)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetBrightness_0002)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetContrast_0001)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetContrast_0002)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetSaturation_0001)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetSaturation_0002)},
	{CS_TK_AUTOCASE(CSTC_SCREEN_TEST_IT_SetOSDTransparency_0001)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetOSDTransparency_0002)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_SetOSDTransparency_0003)},
	{CS_TK_MANUALCASE(CSTC_SCREEN_TEST_IT_0001)},
 	CS_TK_ENDCASE //测试用例结束标记，必须要有，且在最后一个
};


static CSTestGetObj_F s_afnTestGetObj[]= 
{
	CSSCREENTESTGetObj,	//对应自己，必须是第一个，必须要有
};
/*end change*/

CS_TEST_BUILD_FRAME_CODE(SCREEN)
/*end don't change*/

