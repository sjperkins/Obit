%{
#include "Obit.h"
#include "ObitData.h"
#include "ObitTableGBTQUADDETECTOR.h"
%}
 
%inline %{
 
extern ObitTable* TableGBTQUADDETECTOR (ObitData *inData, long *tabVer,
 	                   int access,
 	                   char *tabName,
                          
                           ObitErr *err)
 {
   ObitIOAccess laccess;
   /* Cast structural keywords to correct type */
   olong ltabVer = (olong)*tabVer;
   ObitTable *outTable=NULL;
   laccess = OBIT_IO_ReadOnly;
   if (access==2) laccess = OBIT_IO_WriteOnly;
   else if (access==3) laccess = OBIT_IO_ReadWrite;
   outTable = (ObitTable*)newObitTableGBTQUADDETECTORValue ((gchar*)tabName, inData, (olong*)&ltabVer,
   			   laccess, 
                          
                           err);
   *tabVer = (long)ltabVer;
   return outTable;
   }
 
extern PyObject* TableGBTQUADDETECTORGetHeadKeys (ObitTable *inTab) {
  PyObject *outDict=PyDict_New();
  ObitTableGBTQUADDETECTOR *lTab = (ObitTableGBTQUADDETECTOR*)inTab;

  return outDict;
} 

extern void TableGBTQUADDETECTORSetHeadKeys (ObitTable *inTab, PyObject *inDict) {
  ObitTableGBTQUADDETECTOR *lTab = (ObitTableGBTQUADDETECTOR*)inTab;
  char *tstr;
  int lstr=MAXKEYCHARTABLEQuadrantDetectorData;


  if ((lTab->myDesc->access==OBIT_IO_ReadWrite) || (lTab->myDesc->access==OBIT_IO_WriteOnly)) 
    lTab->myStatus = OBIT_Modified;
} 

%}
