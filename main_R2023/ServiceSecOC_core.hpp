#pragma once
/******************************************************************************/
/* File   : ServiceSecOC_core.hpp                                                    */
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
#include "CompilerCfg_ServiceSecOC.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SERVICESECOC_CORE_FUNCTIONALITIES                                             \
              FUNC(void, SERVICESECOC_CODE) IfTransmit                     (void);     \
              FUNC(void, SERVICESECOC_CODE) TpTransmit                     (void);     \
              FUNC(void, SERVICESECOC_CODE) McalCancelReceive                  (void);     \
              FUNC(void, SERVICESECOC_CODE) IfMcalCancelTransmit               (void);     \
              FUNC(void, SERVICESECOC_CODE) TpMcalCancelTransmit               (void);     \
              FUNC(void, SERVICESECOC_CODE) ChangeParameter                (void);     \
              FUNC(void, SERVICESECOC_CODE) AssociateKey                   (void);     \
              FUNC(void, SERVICESECOC_CODE) McalFreshnessValueRead             (void);     \
              FUNC(void, SERVICESECOC_CODE) McalFreshnessValueWrite            (void);     \
              FUNC(void, SERVICESECOC_CODE) CbIfRxIndication               (void);     \
              FUNC(void, SERVICESECOC_CODE) CbTpRxIndication               (void);     \
              FUNC(void, SERVICESECOC_CODE) CbIfTxConfirmation             (void);     \
              FUNC(void, SERVICESECOC_CODE) CbTpTxConfirmation             (void);     \
              FUNC(void, SERVICESECOC_CODE) CbTriggerTransmit              (void);     \
              FUNC(void, SERVICESECOC_CODE) CbCopyRxData                   (void);     \
              FUNC(void, SERVICESECOC_CODE) CbCopyTxData                   (void);     \
              FUNC(void, SERVICESECOC_CODE) CbStartOfReception             (void);     \
              FUNC(void, SERVICESECOC_CODE) CalloutGetRxMcalFreshness          (void);     \
              FUNC(void, SERVICESECOC_CODE) CalloutGetRxMcalFreshnessAuchData  (void);     \
              FUNC(void, SERVICESECOC_CODE) CalloutGetTxMcalFreshness          (void);     \
              FUNC(void, SERVICESECOC_CODE) CalloutGetTxMcalFreshnessTruncData (void);     \
              FUNC(void, SERVICESECOC_CODE) CalloutSPduTxConfirmation      (void);     \

#define SERVICESECOC_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, SERVICESECOC_CODE) IfTransmit                     (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) TpTransmit                     (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) McalCancelReceive                  (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) IfMcalCancelTransmit               (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) TpMcalCancelTransmit               (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) ChangeParameter                (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) AssociateKey                   (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) McalFreshnessValueRead             (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) McalFreshnessValueWrite            (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbIfRxIndication               (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbTpRxIndication               (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbIfTxConfirmation             (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbTpTxConfirmation             (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbTriggerTransmit              (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbCopyRxData                   (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbCopyTxData                   (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CbStartOfReception             (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CalloutGetRxMcalFreshness          (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CalloutGetRxMcalFreshnessAuchData  (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CalloutGetTxMcalFreshness          (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CalloutGetTxMcalFreshnessTruncData (void) = 0; \
      virtual FUNC(void, SERVICESECOC_CODE) CalloutSPduTxConfirmation      (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceSecOC_Functionality{
   public:
      SERVICESECOC_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

