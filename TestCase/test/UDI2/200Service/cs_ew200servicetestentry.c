#include "cs_testkit.h"
#include "cs_ew200servicetestentry.h"
#include "cs_ew200servicetestcase.h"

static CSTestInit_S s_sTestInit = {CSTC_EW200SERVICE_Init, CSTC_EW200SERVICE_UnInit};
static CSTestCase_S s_asTestCase[] = 
{
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0001)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0002)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0003)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0004)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0005)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0006)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0007)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0008)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0009)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0010)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0011)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0012)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0013)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0014)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0015)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0016)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0017)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0018)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0019)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0020)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0021)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0022)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0023)},
	{CS_TK_MANUALCASE(CSTC_EW200SERVICE_MT_0024)},
	{CS_TK_AUTOCASE(CSTC_EW200SERVICE_MT_0025)},
	{"", NULL, 0} //��������������ǣ�����Ҫ�У��������һ��
};


static CSTestGetObj_F s_afnTestGetObj[]= 
{
	CSEW200SERVICETESTGetObj //��Ӧ�Լ��������ǵ�һ��������Ҫ��
};

CS_TEST_BUILD_FRAME_CODE(EW200SERVICE)
