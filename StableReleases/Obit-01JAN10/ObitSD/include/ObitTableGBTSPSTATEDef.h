/* $Id: ObitTableGBTSPSTATEDef.h 69 2009-01-21 16:00:01Z bill.cotton $  */
/* DO NOT EDIT - file generated by ObitSDTables.pl                    */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2009                                              */
/*;  Associated Universities, Inc. Washington DC, USA.                */
/*;                                                                   */
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
/*;Correspondence about this software should be addressed as follows: */
/*;         Internet email: bcotton@nrao.edu.                        */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the basic components of the ObitTableGBTSPSTATE  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableGBTSPSTATEDef.h
 * ObitTableGBTSPSTATE structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** SDD_FORMAT_I */
gchar  formatid[MAXKEYCHARTABLESTATE];
/** Scan numbe */
oint  scan;
/** Scan record numbe */
oint  subscan;
/** MJD of start tim */
oint  utdate;
/** UTC start time seconds */
odouble  utcstart;
/** Stop time seconds */
odouble  utcstop;
/** Each item is index by RCVRS */
oint  rcvrs;
/** Column offset for  in table record */
olong  blanktimOff;
/** Physical column number for  in table record */
olong  blanktimCol;
/** Column offset for  in table record */
olong  phasetimOff;
/** Physical column number for  in table record */
olong  phasetimCol;
/** Column offset for  in table record */
olong  sigrefOff;
/** Physical column number for  in table record */
olong  sigrefCol;
/** Column offset for  in table record */
olong  calOff;
/** Physical column number for  in table record */
olong  calCol;
/** Column offset for  in table record */
olong  fftsOff;
/** Physical column number for  in table record */
olong  fftsCol;
/** Column offset for  in table record */
olong  deletedOff;
/** Physical column number for  in table record */
olong  deletedCol;