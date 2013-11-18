/**@defgroup PublicShellNDSCA PublicShellNDSCA ����NDS CA����ӿ�

@version 2.0.0 2009/12/16 ����
@{
*/
#ifndef CSSHELL_NDSCA_PRIVATE_H
#define CSSHELL_NDSCA_PRIVATE_H

#include "csshell_ndsca.h"
#include "thirdparty/ca/nds/CS_NDSCA_Interface.h"

#ifdef __cplusplus
extern "C"
{
#endif

	/**
	@brief ��ȡNDS CAʵ�ֽӿ�
	@param ��
	@return �ɹ�����֮ǰ���õ�ndscaʵ�ֽӿ�
	@see CSShellNdsCaGetDefaultParam
	*/
	const CSShellNdsCaInitParam_S* CSShellNdsCaGetParam(void);


/**
@brief ��ȡNDS CA�����������Ϣ
@return �ɹ�����������Ϣ��ʧ�ܷ���NULL
@note ��Ӧ��û�е���CSShellNdsCaSetConfig()����������Ϣʱ������NULL
@see CSShellNdsCaConfig_S
*/
const CSShellNdsCaConfig_S* CSShellNdsCaGetConfig(void);

/******************************************************************************
@breif ����ca�����ͺ���Ϣ���������ܿ�״̬
@param dwType--dwParam3,��Ӧcs_cainterface_prvext.h�� F_CBMsg�еĲ���
@return �ɹ�����TRUE,���򷵻�FALSE
@note �ڽ��յ�ca�����ģ����ܿ�������������ܿ������ܽ�Ŀ����Ŀδ��Ȩ��Ҫֹͣ����Ƶ�������Ϣʱ����Ҫ����ԭ����߸�mediaplayer�����mediaplayer��֪��
��Ŀͣ����ԭ�򣬾ͻ����ͽ�Ŀͣ������Ϣ
*******************************************************************************/
BOOL CSShellNdsCaSetSmartCardState(DWORD dwType, DWORD dwParm1, DWORD dwParm2);


#ifdef __cplusplus
}
#endif
/** @} */
#endif
