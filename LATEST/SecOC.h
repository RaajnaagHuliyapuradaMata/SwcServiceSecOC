#pragma once

#include "Std_Types.h"
#include "Compiler_Cfg_SecOC.h"

class class_SecOC{
   public:
      FUNC(void, SECOC_CODE) InitFunction                   (void);
      FUNC(void, SECOC_CODE) DeInitFunction                 (void);
      FUNC(void, SECOC_CODE) GetVersionInfo                 (void);
      FUNC(void, SECOC_CODE) IfTransmit                     (void);
      FUNC(void, SECOC_CODE) TpTransmit                     (void);
      FUNC(void, SECOC_CODE) CancelReceive                  (void);
      FUNC(void, SECOC_CODE) IfCancelTransmit               (void);
      FUNC(void, SECOC_CODE) TpCancelTransmit               (void);
      FUNC(void, SECOC_CODE) ChangeParameter                (void);
      FUNC(void, SECOC_CODE) AssociateKey                   (void);
      FUNC(void, SECOC_CODE) FreshnessValueRead             (void);
      FUNC(void, SECOC_CODE) FreshnessValueWrite            (void);
      FUNC(void, SECOC_CODE) CbIfRxIndication               (void);
      FUNC(void, SECOC_CODE) CbTpRxIndication               (void);
      FUNC(void, SECOC_CODE) CbIfTxConfirmation             (void);
      FUNC(void, SECOC_CODE) CbTpTxConfirmation             (void);
      FUNC(void, SECOC_CODE) CbTriggerTransmit              (void);
      FUNC(void, SECOC_CODE) CbCopyRxData                   (void);
      FUNC(void, SECOC_CODE) CbCopyTxData                   (void);
      FUNC(void, SECOC_CODE) CbStartOfReception             (void);
      FUNC(void, SECOC_CODE) CalloutGetRxFreshness          (void);
      FUNC(void, SECOC_CODE) CalloutGetRxFreshnessAuchData  (void);
      FUNC(void, SECOC_CODE) CalloutGetTxFreshness          (void);
      FUNC(void, SECOC_CODE) CalloutGetTxFreshnessTruncData (void);
      FUNC(void, SECOC_CODE) CalloutSPduTxConfirmation      (void);
      FUNC(void, SECOC_CODE) MainFunctionRx                 (void);
      FUNC(void, SECOC_CODE) MainFunctionTx                 (void);
};

extern class_SecOC SecOC;

