#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 3 member(s).
namespace FH4 {
class UWMap4 {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?getStartStop@UWMap4@FH4@@QEAAXHHAEAViterator@12@0@Z
    void getStartStop(int, int, WindissectOpaque &, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?getStateFromIterators@UWMap4@FH4@@SAHAEBViterator@12@H0H0@Z
    static int getStateFromIterators(WindissectOpaque const &, int, WindissectOpaque const &, int, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadEntry@UWMap4@FH4@@AEAAXPEAPEAE@Z
    void ReadEntry(unsigned char * *);
};
} // namespace FH4
