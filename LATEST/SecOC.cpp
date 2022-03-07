/*****************************************************/
/* File   : SecOC.cpp                                */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "module.h"
#include "SecOC_EcuM.h"
#include "SecOC_SchM.h"
#include "SecOC_Unused.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class module_SecOC:
      public abstract_module
{
   public:
      FUNC(void, SECOC_CODE) InitFunction             (void);
      FUNC(void, SECOC_CODE) DeInitFunction           (void);
      FUNC(void, SECOC_CODE) MainFunction             (void);
      FUNC(void, SECOC_CODE) MainFunctionRouteSignals (void);
      FUNC(void, SECOC_CODE) MainFunctionRx           (void);
      FUNC(void, SECOC_CODE) MainFunctionTx           (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
module_SecOC   SecOC;
infEcuMClient* gptrinfEcuMClient_SecOC = &SecOC;
infSchMClient* gptrinfSchMClient_SecOC = &SecOC;

/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
FUNC(void, SECOC_CODE) module_SecOC::InitFunction(void){
}

FUNC(void, SECOC_CODE) module_SecOC::DeInitFunction(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunction(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionRouteSignals(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionRx(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionTx(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::GetVersionInfo(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::IfTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::TpTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CancelReceive(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::IfCancelTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::TpCancelTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::ChangeParameter(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::AssociateKey(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::FreshnessValueRead(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::FreshnessValueWrite(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbIfRxIndication(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbTpRxIndication(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbIfTxConfirmation(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbTpTxConfirmation(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbTriggerTransmit(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbCopyRxData(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbCopyTxData(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CbStartOfReception(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CalloutGetRxFreshness(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CalloutGetRxFreshnessAuchData(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CalloutGetTxFreshness(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CalloutGetTxFreshnessTruncData(void){
}

FUNC(void, SECOC_CODE) class_SecOC_Unused::CalloutSPduTxConfirmation(void){
}

/*****************************************************/
/* EOF                                               */
/*****************************************************/

