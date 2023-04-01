/******************************************************************************/
/* File   : ServiceSecOC.cpp                                                  */
/*                                                                            */
/* Author : Nagaraja HULIYAPURADA MATA                                        */
/*                                                                            */
/* License / Warranty / Terms and Conditions                                  */
/*                                                                            */
/* Everyone is permitted to copy and distribute verbatim copies of this lice- */
/* nse document, but changing it is not allowed. This is a free, copyright l- */
/* icense for software and other kinds of works. By contrast, this license is */
/* intended to guarantee your freedom to share and change all versions of a   */
/* program, to make sure it remains free software for all its users. You have */
/* certain responsibilities, if you distribute copies of the software, or if  */
/* you modify it: responsibilities to respect the freedom of others.          */
/*                                                                            */
/* All rights reserved. Copyright © 1982 Nagaraja HULIYAPURADA MATA           */
/*                                                                            */
/* Always refer latest software version from:                                 */
/* https://github.com/NagarajaHuliyapuradaMata?tab=repositories               */
/*                                                                            */
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
#define SERVICESECOC_AR_RELEASE_VERSION_MAJOR                                  4
#define SERVICESECOC_AR_RELEASE_VERSION_MINOR                                  3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(SERVICESECOC_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible SERVICESECOC_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(SERVICESECOC_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible SERVICESECOC_AR_RELEASE_VERSION_MINOR!"
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
VAR(module_ServiceSecOC, SERVICESECOC_VAR) ServiceSecOC;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, SERVICESECOC_CODE) module_ServiceSecOC::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, SERVICESECOC_CONST,       SERVICESECOC_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESECOC_CONFIG_DATA, SERVICESECOC_APPL_CONST) lptrCfgModule
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

