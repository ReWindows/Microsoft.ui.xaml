#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class MaterialHelperBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateScaledBrush@MaterialHelperBase@@QEAA?AUCompositionSurfaceBrush@Composition@UI@Windows@winrt@@H@Z
    WindissectOpaque CreateScaledBrush(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealBrushConnected@MaterialHelperBase@@SAXXZ
    static void OnRevealBrushConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRevealBrushDisconnected@MaterialHelperBase@@SAXXZ
    static void OnRevealBrushDisconnected();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialHelperBase@@UEAA@XZ
    virtual ~MaterialHelperBase();
};
