#pragma once
/******************************************************************************/
/* File   : SecOC_core.hpp                                                    */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_SecOC.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define SECOC_COREFUNCTIONALITIES                                              \
              FUNC(void, SECOC_CODE) IfTransmit                     (void);     \
              FUNC(void, SECOC_CODE) TpTransmit                     (void);     \
              FUNC(void, SECOC_CODE) CancelReceive                  (void);     \
              FUNC(void, SECOC_CODE) IfCancelTransmit               (void);     \
              FUNC(void, SECOC_CODE) TpCancelTransmit               (void);     \
              FUNC(void, SECOC_CODE) ChangeParameter                (void);     \
              FUNC(void, SECOC_CODE) AssociateKey                   (void);     \
              FUNC(void, SECOC_CODE) FreshnessValueRead             (void);     \
              FUNC(void, SECOC_CODE) FreshnessValueWrite            (void);     \
              FUNC(void, SECOC_CODE) CbIfRxIndication               (void);     \
              FUNC(void, SECOC_CODE) CbTpRxIndication               (void);     \
              FUNC(void, SECOC_CODE) CbIfTxConfirmation             (void);     \
              FUNC(void, SECOC_CODE) CbTpTxConfirmation             (void);     \
              FUNC(void, SECOC_CODE) CbTriggerTransmit              (void);     \
              FUNC(void, SECOC_CODE) CbCopyRxData                   (void);     \
              FUNC(void, SECOC_CODE) CbCopyTxData                   (void);     \
              FUNC(void, SECOC_CODE) CbStartOfReception             (void);     \
              FUNC(void, SECOC_CODE) CalloutGetRxFreshness          (void);     \
              FUNC(void, SECOC_CODE) CalloutGetRxFreshnessAuchData  (void);     \
              FUNC(void, SECOC_CODE) CalloutGetTxFreshness          (void);     \
              FUNC(void, SECOC_CODE) CalloutGetTxFreshnessTruncData (void);     \
              FUNC(void, SECOC_CODE) CalloutSPduTxConfirmation      (void);     \

#define SECOC_COREFUNCTIONALITIES_VIRTUAL                                      \
      virtual FUNC(void, SECOC_CODE) IfTransmit                     (void) = 0; \
      virtual FUNC(void, SECOC_CODE) TpTransmit                     (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CancelReceive                  (void) = 0; \
      virtual FUNC(void, SECOC_CODE) IfCancelTransmit               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) TpCancelTransmit               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) ChangeParameter                (void) = 0; \
      virtual FUNC(void, SECOC_CODE) AssociateKey                   (void) = 0; \
      virtual FUNC(void, SECOC_CODE) FreshnessValueRead             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) FreshnessValueWrite            (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbIfRxIndication               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbTpRxIndication               (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbIfTxConfirmation             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbTpTxConfirmation             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbTriggerTransmit              (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbCopyRxData                   (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbCopyTxData                   (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CbStartOfReception             (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetRxFreshness          (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetRxFreshnessAuchData  (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetTxFreshness          (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutGetTxFreshnessTruncData (void) = 0; \
      virtual FUNC(void, SECOC_CODE) CalloutSPduTxConfirmation      (void) = 0; \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_SecOC_Functionality{
   public:
      SECOC_COREFUNCTIONALITIES_VIRTUAL
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

