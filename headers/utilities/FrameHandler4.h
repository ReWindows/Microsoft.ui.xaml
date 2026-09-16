#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 8 member(s).
class __FrameHandler4 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CxxCallCatchBlock@__FrameHandler4@@SAPEAXPEAU_EXCEPTION_RECORD@@@Z
    static void * CxxCallCatchBlock(_EXCEPTION_RECORD *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecutionInCatch@__FrameHandler4@@SA_NPEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@FH4@@@Z
    static bool ExecutionInCatch(_xDISPATCHER_CONTEXT *, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUnwindToEmptyState@__FrameHandler4@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@FH4@@@Z
    static void FrameUnwindToEmptyState(uint64_t *, _xDISPATCHER_CONTEXT *, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FrameUnwindToState@__FrameHandler4@@SAXPEA_KPEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@FH4@@H@Z
    static void FrameUnwindToState(uint64_t *, _xDISPATCHER_CONTEXT *, WindissectOpaque*, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEstablisherFrame@__FrameHandler4@@SAPEA_KPEA_KPEAU_xDISPATCHER_CONTEXT@@PEAUFuncInfo4@FH4@@0@Z
    static uint64_t * GetEstablisherFrame(uint64_t *, _xDISPATCHER_CONTEXT *, WindissectOpaque*, uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StateFromControlPc@__FrameHandler4@@SAHPEAUFuncInfo4@FH4@@PEAU_xDISPATCHER_CONTEXT@@@Z
    static int StateFromControlPc(WindissectOpaque*, _xDISPATCHER_CONTEXT *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StateFromIp@__FrameHandler4@@SAHPEAUFuncInfo4@FH4@@PEAU_xDISPATCHER_CONTEXT@@_K@Z
    static int StateFromIp(WindissectOpaque*, _xDISPATCHER_CONTEXT *, uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnwindNestedFrames@__FrameHandler4@@SAXPEA_KPEAUEHExceptionRecord@@PEAU_CONTEXT@@0PEAXPEAUFuncInfo4@FH4@@HHPEAUHandlerType4@5@PEAU_xDISPATCHER_CONTEXT@@E@Z
    static void UnwindNestedFrames(uint64_t *, EHExceptionRecord *, _CONTEXT *, uint64_t *, void *, WindissectOpaque*, int, int, WindissectOpaque*, _xDISPATCHER_CONTEXT *, unsigned char);
};
