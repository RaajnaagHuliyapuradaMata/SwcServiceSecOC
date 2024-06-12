#pragma once
/******************************************************************************/
/* File   : ServiceSecOC.hpp                                                         */
/* Author : Nagaraja HULIYAPURADA-MATA                                        */
/* Date   : 01.02.1982                                                        */
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
      INTERFACES_EXPORTED_SERVICESECOC
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
      FUNC(void, SERVICESECOC_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESECOC_CONST,       SERVICESECOC_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   SERVICESECOC_CONFIG_DATA, SERVICESECOC_APPL_CONST) lptrCfgModule
      );
      FUNC(void, SERVICESECOC_CODE) DeInitFunction           (void);
      FUNC(void, SERVICESECOC_CODE) MainFunction             (void);
      SERVICESECOC_CORE_FUNCTIONALITIES

      FUNC(void, SERVICESECOC_CODE) MainFunctionRouteSignals (void);
      FUNC(void, SERVICESECOC_CODE) MainFunctionRx           (void);
      FUNC(void, SERVICESECOC_CODE) MainFunctionTx           (void);
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
extern VAR(module_ServiceSecOC, SERVICESECOC_VAR) ServiceSecOC;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

