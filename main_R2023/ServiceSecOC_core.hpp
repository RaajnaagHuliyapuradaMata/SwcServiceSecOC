#pragma once
/******************************************************************************/
/* File   : ServiceSecOC_core.hpp                                                    */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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

