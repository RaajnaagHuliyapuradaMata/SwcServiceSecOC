/*****************************************************/
/* File   : SecOC.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "SecOC.h"

#include "SecOC_EcuM.h"
#include "SecOC_SchM.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
class_SecOC_EcuM_Init SecOC_EcuM_Init;
class_SecOC_EcuM_DeInit SecOC_EcuM_DeInit;
class_SecOCRx_SchM_Main SecOCRx_SchM_Main;
class_SecOCTx_SchM_Main SecOCTx_SchM_Main;
class_SecOC SecOC;

class_EcuM_Init_Client *EcuM_Init_Client_ptr_SecOC = &SecOC_EcuM_Init;
class_EcuM_DeInit_Client *EcuM_DeInit_Client_ptr_SecOC = &SecOC_EcuM_DeInit;
class_SchM_Main_Client *SchM_Main_Client_ptr_SecOCRx = &SecOCRx_SchM_Main;
class_SchM_Main_Client *SchM_Main_Client_ptr_SecOCTx = &SecOCTx_SchM_Main;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SECOC_CODE) class_SecOC_EcuM_Init::InitFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOC_EcuM_DeInit::DeInitFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOCRx_SchM_Main::MainFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOCTx_SchM_Main::MainFunction(void){
}

FUNC(void, SECOC_CODE) class_SecOC::GetVersionInfo(void){
}

FUNC(void, SECOC_CODE) class_SecOC::IfTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::TpTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CancelReceive(void){
}

FUNC(void, SECOC_CODE) class_SecOC::IfCancelTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::TpCancelTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::ChangeParameter(void){
}

FUNC(void, SECOC_CODE) class_SecOC::AssociateKey(void){
}

FUNC(void, SECOC_CODE) class_SecOC::FreshnessValueRead(void){
}

FUNC(void, SECOC_CODE) class_SecOC::FreshnessValueWrite(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbIfRxIndication(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbTpRxIndication(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbIfTxConfirmation(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbTpTxConfirmation(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbTriggerTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbCopyRxData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbCopyTxData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CbStartOfReception(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetRxFreshness(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetRxFreshnessAuchData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetTxFreshness(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutGetTxFreshnessTruncData(void){
}

FUNC(void, SECOC_CODE) class_SecOC::CalloutSPduTxConfirmation(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

