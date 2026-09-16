#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class AnimatedFindVisualSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Markers@AnimatedFindVisualSource@@QEAA?AU?$IMapView@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque Markers();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetColorProperty@AnimatedFindVisualSource@@QEAAXAEBUhstring@winrt@@UColor@UI@Windows@3@@Z
    void SetColorProperty(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@AnimatedFindVisualSource@@QEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@winrt@@AEBUCompositor@Composition@5Windows@7@AEAUIInspectable@Foundation@Windows@7@@Z
    WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThemeProperties@AnimatedFindVisualSource@@AEAA?AUCompositionPropertySet@Composition@UI@Windows@winrt@@UCompositor@3456@@Z
    WindissectOpaque EnsureThemeProperties(WindissectOpaque);
};
