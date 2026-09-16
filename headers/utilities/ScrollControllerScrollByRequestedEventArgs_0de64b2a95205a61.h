#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class ScrollControllerScrollByRequestedEventArgs {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CorrelationId@ScrollControllerScrollByRequestedEventArgs@@QEAAXH@Z
    void CorrelationId(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollControllerScrollByRequestedEventArgs@@QEAA@NAEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@@Z
    ScrollControllerScrollByRequestedEventArgs(double, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollControllerScrollByRequestedEventArgs@@UEAA@XZ
    virtual ~ScrollControllerScrollByRequestedEventArgs();
};
