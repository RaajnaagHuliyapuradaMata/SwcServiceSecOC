/******************************************************************************/
/* File   : SecOC.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "SecOC_Cfg.h"
#include "infSecOC_EcuM.h"
#include "infSecOC_Dcm.h"
#include "infSecOC_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SECOC_AR_RELEASE_MAJOR_VERSION                                         4
#define SECOC_AR_RELEASE_MINOR_VERSION                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SECOC_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible SECOC_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(SECOC_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible SECOC_AR_RELEASE_MINOR_VERSION!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_SecOC:
      public abstract_module
{
   public:
      FUNC(void, SECOC_CODE) InitFunction             (void);
      FUNC(void, SECOC_CODE) DeInitFunction           (void);
      FUNC(void, SECOC_CODE) GetVersionInfo           (void);
      FUNC(void, SECOC_CODE) MainFunction             (void);
      FUNC(void, SECOC_CODE) MainFunctionRouteSignals (void);
      FUNC(void, SECOC_CODE) MainFunctionRx           (void);
      FUNC(void, SECOC_CODE) MainFunctionTx           (void);

   private:
      CONST(Std_TypeVersionInfo, SECOC_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_SecOC, SECOC_VAR) SecOC;
CONSTP2VAR(infEcuMClient, SECOC_VAR, SECOC_CONST) gptrinfEcuMClient_SecOC = &SecOC;
CONSTP2VAR(infDcmClient,  SECOC_VAR, SECOC_CONST) gptrinfDcmClient_SecOC  = &SecOC;
CONSTP2VAR(infSchMClient, SECOC_VAR, SECOC_CONST) gptrinfSchMClient_SecOC = &SecOC;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SECOC_CODE) module_SecOC::InitFunction(void){
   SecOC.IsInitDone = E_OK;
}

FUNC(void, SECOC_CODE) module_SecOC::DeInitFunction(void){
   SecOC.IsInitDone = E_NOT_OK;
}

FUNC(void, SECOC_CODE) module_SecOC::GetVersionInfo(void){
#if(STD_ON == SecOC_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunction(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionRouteSignals(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionRx(void){
}

FUNC(void, SECOC_CODE) module_SecOC::MainFunctionTx(void){
}

#include "SecOC_Unused.h"

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

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

