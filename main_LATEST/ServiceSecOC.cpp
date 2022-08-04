/******************************************************************************/
/* File   : ServiceSecOC.cpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "ServiceSecOC.hpp"
#include "infServiceSecOC_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SECOC_AR_RELEASE_VERSION_MAJOR                                         4
#define SECOC_AR_RELEASE_VERSION_MINOR                                         3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SECOC_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SECOC_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SECOC_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SECOC_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_ServiceSecOC, SECOC_VAR) ServiceSecOC;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SECOC_CODE) module_ServiceSecOC::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SECOC_CONST,       SECOC_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SECOC_CONFIG_DATA, SECOC_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceSecOC_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstServiceSecOC_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == ServiceSecOC_DevErrorDetect)
         ServiceDet_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == ServiceSecOC_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == ServiceSecOC_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SECOC_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::DeInitFunction(
   void
){
#if(STD_ON == ServiceSecOC_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSecOC_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == ServiceSecOC_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SECOC_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::MainFunction(
   void
){
#if(STD_ON == ServiceSecOC_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == ServiceSecOC_InitCheck)
   }
   else{
#if(STD_ON == ServiceSecOC_DevErrorDetect)
      ServiceDet_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  SECOC_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::MainFunctionRouteSignals(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::MainFunctionRx(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::MainFunctionTx(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::IfTransmit(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::TpTransmit(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::McalCancelReceive(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::IfMcalCancelTransmit(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::TpMcalCancelTransmit(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::ChangeParameter(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::AssociateKey(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::McalFreshnessValueRead(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::McalFreshnessValueWrite(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbIfRxIndication(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbTpRxIndication(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbIfTxConfirmation(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbTpTxConfirmation(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbTriggerTransmit(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbCopyRxData(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbCopyTxData(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CbStartOfReception(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CalloutGetRxMcalFreshness(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CalloutGetRxMcalFreshnessAuchData(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CalloutGetTxMcalFreshness(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CalloutGetTxMcalFreshnessTruncData(
   void
){
}

FUNC(void, SECOC_CODE) module_ServiceSecOC::CalloutSPduTxConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

