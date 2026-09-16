#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 3 member(s).
namespace AnimatedVisuals {
class ProgressRingDeterminate {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetThemeProperties@ProgressRingDeterminate@AnimatedVisuals@@UEAA?AUCompositionPropertySet@Composition@UI@Windows@winrt@@UCompositor@4567@@Z
    virtual WindissectOpaque GetThemeProperties(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryCreateAnimatedVisual@ProgressRingDeterminate@AnimatedVisuals@@UEAA?AUIAnimatedVisual@Controls@Xaml@UI@Microsoft@winrt@@AEBUCompositor@Composition@6Windows@8@AEAUIInspectable@Foundation@Windows@8@@Z
    virtual WindissectOpaque TryCreateAnimatedVisual(WindissectOpaque const &, WindissectOpaque &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureThemeProperties@ProgressRingDeterminate@AnimatedVisuals@@AEAA?AUCompositionPropertySet@Composition@UI@Windows@winrt@@UCompositor@4567@@Z
    WindissectOpaque EnsureThemeProperties(WindissectOpaque);
};
} // namespace AnimatedVisuals
