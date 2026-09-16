#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class ZoomSnapPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@ZoomSnapPoint@@UEBAXAEAHAEBUSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void Combine(int &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpulseInfluence@ZoomSnapPoint@@UEBANNN@Z
    virtual double ImpulseInfluence(double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Influence@ZoomSnapPoint@@UEBANN@Z
    virtual double Influence(double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapCount@ZoomSnapPoint@@UEBAHXZ
    virtual int SnapCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortPredicate@ZoomSnapPoint@@UEBA?AUSnapPointSortPredicate@@XZ
    virtual SnapPointSortPredicate SortPredicate() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxActualImpulseApplicableZone@ZoomSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMaxActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMinActualImpulseApplicableZone@ZoomSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMinActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
};
