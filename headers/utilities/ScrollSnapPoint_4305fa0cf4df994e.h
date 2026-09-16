#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class ScrollSnapPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@ScrollSnapPoint@@UEBAXAEAHAEBUSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void Combine(int &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpulseInfluence@ScrollSnapPoint@@UEBANNN@Z
    virtual double ImpulseInfluence(double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Influence@ScrollSnapPoint@@UEBANN@Z
    virtual double Influence(double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapCount@ScrollSnapPoint@@UEBAHXZ
    virtual int SnapCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortPredicate@ScrollSnapPoint@@UEBA?AUSnapPointSortPredicate@@XZ
    virtual SnapPointSortPredicate SortPredicate() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxActualImpulseApplicableZone@ScrollSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMaxActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMinActualImpulseApplicableZone@ScrollSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMinActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
};
