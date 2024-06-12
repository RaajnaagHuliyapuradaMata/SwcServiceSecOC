/******************************************************************************/
/* File   : ServiceSecOC.cpp                                                  */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

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
VAR(module_ServiceSecOC, SERVICESECOC_VAR) ServiceSecOC;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICESECOC_CONST,       SERVICESECOC_APPL_CONST) lptrNvMBlocksRomModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESECOC_CONFIG_DATA, SERVICESECOC_APPL_CONST) lptrCfgModule
){
#if(STD_ON == ServiceSecOC_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrNvMBlocksRomModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrNvMBlocksRom = lptrNvMBlocksRomModule;
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
         ,  SERVICESECOC_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::DeInitFunction(
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
         ,  SERVICESECOC_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::MainFunction(
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
         ,  SERVICESECOC_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::MainFunctionRouteSignals(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::MainFunctionRx(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::MainFunctionTx(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::IfTransmit(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::TpTransmit(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::McalCancelReceive(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::IfMcalCancelTransmit(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::TpMcalCancelTransmit(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::ChangeParameter(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::AssociateKey(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::McalFreshnessValueRead(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::McalFreshnessValueWrite(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbIfRxIndication(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbTpRxIndication(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbIfTxConfirmation(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbTpTxConfirmation(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbTriggerTransmit(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbCopyRxData(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbCopyTxData(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CbStartOfReception(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CalloutGetRxMcalFreshness(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CalloutGetRxMcalFreshnessAuchData(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CalloutGetTxMcalFreshness(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CalloutGetTxMcalFreshnessTruncData(
   void
){
}

FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::CalloutSPduTxConfirmation(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

