/* $Id: $   */
/*--------------------------------------------------------------------*/
/*;  Copyright (C) 2014                                               */
/*;  Associated Universities, Inc. Washington DC, USA.                */
/*;  This program is free software; you can redistribute it and/or    */
/*;  modify it under the terms of the GNU General Public License as   */
/*;  published by the Free Software Foundation; either version 2 of   */
/*;  the License, or (at your option) any later version.              */
/*;                                                                   */
/*;  This program is distributed in the hope that it will be useful,  */
/*;  but WITHOUT ANY WARRANTY; without even the implied warranty of   */
/*;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    */
/*;  GNU General Public License for more details.                     */
/*;                                                                   */
/*;  You should have received a copy of the GNU General Public        */
/*;  License along with this program; if not, write to the Free       */
/*;  Software Foundation, Inc., 675 Massachusetts Ave, Cambridge,     */
/*;  MA 02139, USA.                                                   */
/*;                                                                   */
/*;  Correspondence this software should be addressed as follows:     */
/*;         Internet email: bcotton@nrao.edu.                         */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the CUDAFArray (GPU version of ObitFArray) class            */
/**
 * \file CUDAFArray.h
 * GPU version of ObitFArray class
 */
#ifndef CUDAFARRAY_H 
#define CUDAFARRAY_H 

/*--------------Class definitions-------------------------------------*/
/** CUDAFArray Class structure. */
typedef struct {
#include "CUDAFArrayDef.h"   /* this class definition */
} CUDAFArray;
#if IS_CUDA==1  /* CUDA code */
/** Public: Create/initialize CUDAFArray structures */
extern "C"
CUDAFArray* CUDAFArrayCreate (int ndim, int *naxis);

/** Public: Destructor */
extern "C"
void CUDAFArrayZap (CUDAFArray *in);
#else  /* Not CUDA */
/** Public: Create/initialize CUDAFArray structures */
CUDAFArray* CUDAFArrayCreate (int ndim, int *naxis);

/** Public: Destructor */
void CUDAFArrayZap (CUDAFArray *in);
#endif /* IS_CUDA */
#endif  /* CUDAFARRAY_H */