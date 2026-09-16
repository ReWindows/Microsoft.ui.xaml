#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 19 member(s).
class RadialGradientBrush {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@RadialGradientBrush@@QEAAXXZ
    void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@RadialGradientBrush@@QEAAXXZ
    void OnDisconnected();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadialGradientBrush@@QEAA@XZ
    RadialGradientBrush();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadialGradientBrush@@UEAA@XZ
    virtual ~RadialGradientBrush();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionBrush@RadialGradientBrush@@AEAAXXZ
    void EnsureCompositionBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFallbackColorChanged@RadialGradientBrush@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFallbackColorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGradientStopsVectorChanged@RadialGradientBrush@@AEAAXAEBU?$IObservableVector@UGradientStop@Media@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIVectorChangedEventArgs@3456@@Z
    void OnGradientStopsVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionExtendMode@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionExtendMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionGradientCenter@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionGradientCenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionGradientMappingMode@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionGradientMappingMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionGradientOrigin@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionGradientOrigin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionGradientRadius@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionGradientRadius();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionGradientStops@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionGradientStops();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompositionInterpolationSpace@RadialGradientBrush@@AEAAXXZ
    void UpdateCompositionInterpolationSpace();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFallbackBrush@RadialGradientBrush@@AEAAXXZ
    void UpdateFallbackBrush();
};
