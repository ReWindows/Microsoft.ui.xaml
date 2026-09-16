#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 14 member(s).
class RepeatedZoomSnapPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@RepeatedZoomSnapPoint@@UEBAXAEAHAEBUSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void Combine(int &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpulseInfluence@RepeatedZoomSnapPoint@@UEBANNN@Z
    virtual double ImpulseInfluence(double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Influence@RepeatedZoomSnapPoint@@UEBANN@Z
    virtual double Influence(double) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RepeatedZoomSnapPoint@@QEAA@NNNN@Z
    RepeatedZoomSnapPoint(double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapCount@RepeatedZoomSnapPoint@@UEBAHXZ
    virtual int SnapCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortPredicate@RepeatedZoomSnapPoint@@UEBA?AUSnapPointSortPredicate@@XZ
    virtual SnapPointSortPredicate SortPredicate() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineFirstRepeatedSnapPointValue@RepeatedZoomSnapPoint@@AEBANXZ
    double DetermineFirstRepeatedSnapPointValue() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxActualImpulseApplicableZone@RepeatedZoomSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMaxActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMinActualImpulseApplicableZone@RepeatedZoomSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMinActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConstructorParameters@RepeatedZoomSnapPoint@@AEBAXNNNN@Z
    void ValidateConstructorParameters(double, double, double, double) const;
};
