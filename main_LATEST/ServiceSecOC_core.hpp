#pragma once
/******************************************************************************/
/* File   : ServiceSecOC_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_ServiceSecOC.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SECOC_CORE_FUNCTIONALITIES                                             \
              FUNC(void, SECOC_CODE) IfTransmit                     (void);     \
              FUNC(void, SECOC_CODE) TpTransmit                     (void);     \
              FUNC(void, SECOC_CODE) McalCancelReceive                  (void);     \
              FUNC(void, SECOC_CODE) IfMcalCancelTransmit               (void);     \
              FUNC(void, SECOC_CODE) TpMcalCancelTransmit               (void);     \
              FUNC(void, SECOC_CODE) ChangeParameter                (void);     \
              FUNC(void, SECOC_CODE) AssociateKey                   (void);     \
              FUNC(void, SECOC_CODE) McalFreshnessValueRead             (void);     \
              FUNC(void, SECOC_CODE) McalFreshnessValueWrite            (void);     \
              FUNC(void, SECOC_CODE) CbIfRxIndication               (void);     \
              FUNC(void, SECOC_CODE) CbTpRxIndication               (void);     \
              FUNC(void, SECOC_CODE) CbIfTxConfirmation             (void);     \
              FUNC(void, SECOC_CODE) CbTpTxConfirmation             (void);     \
              FUNC(void, SECOC_CODE) CbTriggerTransmit              (void);     \
              FUNC(void, SECOC_CODE) CbCopyRxData                   (void);     \
              FUNC(void, SECOC_CODE) CbCopyTxData                   (void);     \
              FUNC(void, SECOC_CODE) CbStartOfReception             (void);     \
              FUNC(void, SECOC_CODE) CalloutGetRxMcalFreshness          (void);     \
              FUNC(void, SECOC_CODE) CalloutGetRxMcalFreshnessAuchData  (void);     \
              FUNC(void, SECOC_CODE) CalloutGetTxMcalFreshness          (void);     \
              FUNC(void, SECOC_CODE) CalloutGetTxMcalFreshnessTruncData (void);     \
              FUNC(void, SECOC_CODE) CalloutSPduTxConfirmation      (void);     \

#define SECOC_CORE_FUNCTIONALITIES_VIRTUAL                                     \
      virtual FUNC(void, SECOC_CODE) IfTransmit                     (void) = 0; \
      virtual FUNC(void, SECOC_CODE) TpTransmit                     (void) = 0; \
      virtual FUNC(void, SECOC_CODE) McalCancelReceive                  (void) = 0; \
      virtual FUNC(void, SECOC_CODE) IfMcalCancelTransmit               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) TpMcalCancelTransmit               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) ChangeParameter                (void) = 0; \
      virtual FUNC(void, SECOC_CODE) AssociateKey                   (void) = 0; \
      virtual FUNC(void, SECOC_CODE) McalFreshnessValueRead             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) McalFreshnessValueWrite            (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbIfRxIndication               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbTpRxIndication               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbIfTxConfirmation             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbTpTxConfirmation             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbTriggerTransmit              (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbCopyRxData                   (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbCopyTxData                   (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbStartOfReception             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetRxMcalFreshness          (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetRxMcalFreshnessAuchData  (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetTxMcalFreshness          (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetTxMcalFreshnessTruncData (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutSPduTxConfirmation      (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_ServiceSecOC_Functionality{
   public:
      SECOC_CORE_FUNCTIONALITIES_VIRTUAL
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

