///////////////////////////////////////////////////////////////////////////////
// Authors: Mingyu Woo
//
// BSD 3-Clause License
//
// Copyright (c) 2019, The Regents of the University of California
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///////////////////////////////////////////////////////////////////////////////

#ifndef __REPLACE_TIMING_STA__
#define __REPLACE_TIMING_STA__ 0

#include "Machine.hh"
#include "Liberty.hh"
#include "StringUtil.hh"
#include "Vector.hh"
#include "Sta.hh"
#include "Sdc.hh"
#include "StaMain.hh"
#include "Machine.hh"
#include "Stats.hh"
#include "Report.hh"
#include "StringUtil.hh"
#include "PatternMatch.hh"
#include "PortDirection.hh"
#include "FuncExpr.hh"
#include "Units.hh"
#include "MinMax.hh"
#include "Transition.hh"
#include "TimingRole.hh"
#include "TimingArc.hh"
#include "InternalPower.hh"
#include "LeakagePower.hh"
#include "Liberty.hh"
#include "EquivCells.hh"
#include "MinMax.hh"
#include "Network.hh"
#include "Clock.hh"
#include "PortDelay.hh"
#include "ExceptionPath.hh"
#include "Graph.hh"
#include "GraphDelayCalc.hh"
#include "Parasitics.hh"
#include "Wireload.hh"
#include "DelayCalc.hh"
#include "DcalcAnalysisPt.hh"
#include "Corner.hh"
#include "Tag.hh"
#include "PathVertex.hh"
#include "PathRef.hh"
#include "PathEnd.hh"
#include "PathGroup.hh"
#include "CheckTiming.hh"
#include "CheckMinPulseWidths.hh"
#include "Levelize.hh"
#include "Bfs.hh"
#include "Search.hh"
#include "SearchPred.hh"
#include "PathAnalysisPt.hh"
#include "DisallowCopyAssign.hh"
#include "Debug.hh"
#include "Error.hh"
#include "Stats.hh"
#include "PortDirection.hh"
#include "Liberty.hh"
#include "Network.hh"
#include "VerilogNamespace.hh"
#include "Verilog.hh"
#include "VerilogReader.hh"
#include "CheckMinPulseWidths.hh"
#include "CheckMinPeriods.hh"
#include "CheckMaxSkews.hh"
#include "Search.hh"
#include "PathExpanded.hh"
#include "Latches.hh"
#include "Corner.hh"
#include "ReportPath.hh"
#include "VisitPathGroupVertices.hh"
#include "ConcreteNetwork.hh"

#ifdef YY_INPUT
#undef YY_INPUT
#endif

#include "parasitics/SpefReaderPvt.hh"
#include "config.h"
#include "global.h"

// to import Swig
extern "C" {
    extern int Sta_Init(Tcl_Interp *interp);
}

// to import TCL functions
namespace sta { 
    extern const char *tcl_inits[];
}

//void evalTclInitForLibrary(Tcl_Interp *interp, 
//        const char *inits[]);
void parasiticsChangedAfter(sta::Sta* sta); 
sta::Sta* GetStaObject(EnvFile& _env);


#endif
