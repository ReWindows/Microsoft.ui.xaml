#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class ScrollControllerScrollToRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CorrelationId@ScrollControllerScrollToRequestedEventArgs@@QEAAXH@Z
    void CorrelationId(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollControllerScrollToRequestedEventArgs@@QEAA@NAEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@@Z
    ScrollControllerScrollToRequestedEventArgs(double, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollControllerScrollToRequestedEventArgs@@UEAA@XZ
    virtual ~ScrollControllerScrollToRequestedEventArgs();
};
