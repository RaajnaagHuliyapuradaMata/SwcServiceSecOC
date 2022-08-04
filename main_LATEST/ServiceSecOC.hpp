#pragma once
/******************************************************************************/
/* File   : ServiceSecOC.hpp                                                         */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "ConstServiceSecOC.hpp"
#include "CfgServiceSecOC.hpp"
#include "ServiceSecOC_core.hpp"
#include "infServiceSecOC_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_ServiceSecOC:
      INTERFACES_EXPORTED_SECOC
      public abstract_module
   ,  public class_ServiceSecOC_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstServiceSecOC_Type* lptrConst = (ConstServiceSecOC_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SECOC_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SECOC_CONST,       SECOC_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SECOC_CONFIG_DATA, SECOC_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SECOC_CODE) DeInitFunction           (void);
      FUNC(void, SECOC_CODE) MainFunction             (void);
      SECOC_CORE_FUNCTIONALITIES

      FUNC(void, SECOC_CODE) MainFunctionRouteSignals (void);
      FUNC(void, SECOC_CODE) MainFunctionRx           (void);
      FUNC(void, SECOC_CODE) MainFunctionTx           (void);
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
extern VAR(module_ServiceSecOC, SECOC_VAR) ServiceSecOC;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

