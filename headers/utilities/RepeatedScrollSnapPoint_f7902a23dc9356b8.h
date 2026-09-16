#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 15 member(s).
class RepeatedScrollSnapPoint {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Combine@RepeatedScrollSnapPoint@@UEBAXAEAHAEBUSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void Combine(int &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImpulseInfluence@RepeatedScrollSnapPoint@@UEBANNN@Z
    virtual double ImpulseInfluence(double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Influence@RepeatedScrollSnapPoint@@UEBANN@Z
    virtual double Influence(double) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RepeatedScrollSnapPoint@@QEAA@NNNNW4ScrollSnapPointsAlignment@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    RepeatedScrollSnapPoint(double, double, double, double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapCount@RepeatedScrollSnapPoint@@UEBAHXZ
    virtual int SnapCount() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SortPredicate@RepeatedScrollSnapPoint@@UEBA?AUSnapPointSortPredicate@@XZ
    virtual SnapPointSortPredicate SortPredicate() const;
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineFirstRepeatedSnapPointValue@RepeatedScrollSnapPoint@@AEBANXZ
    double DetermineFirstRepeatedSnapPointValue() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineLastRepeatedSnapPointValue@RepeatedScrollSnapPoint@@AEBANXZ
    double DetermineLastRepeatedSnapPointValue() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMaxActualImpulseApplicableZone@RepeatedScrollSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMaxActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetermineMinActualImpulseApplicableZone@RepeatedScrollSnapPoint@@AEBANPEBVSnapPointBase@@NN@Z
    double DetermineMinActualImpulseApplicableZone(SnapPointBase const *, double, double) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateConstructorParameters@RepeatedScrollSnapPoint@@AEBAXNNNN@Z
    void ValidateConstructorParameters(double, double, double, double) const;
};
