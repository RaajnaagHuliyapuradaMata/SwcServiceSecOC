#pragma once
/******************************************************************************/
/* File   : ServiceSecOC.hpp                                                  */
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
#include "infServiceSecOC_ServiceNvM_Types.hpp"
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
      const ConstModule_TypeAbstract* lptrNvMBlocksRom = (ConstModule_TypeAbstract*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, SERVICESECOC_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, SERVICESECOC_CONST,       SERVICESECOC_APPL_CONST) lptrNvMBlocksRomModule
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

