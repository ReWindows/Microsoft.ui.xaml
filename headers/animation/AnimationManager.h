#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class AnimationManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElement@AnimationManager@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    bool ClearElement(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatorChanged@AnimationManager@@QEAAXAEBUElementAnimator@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void OnAnimatorChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimationManager@@QEAA@XZ
    ~AnimationManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideAnimationCompleted@AnimationManager@@AEAAXAEBUElementAnimator@Controls@Xaml@UI@Microsoft@winrt@@AEBUUIElement@45Windows@7@@Z
    void OnHideAnimationCompleted(WindissectOpaque const &, WindissectOpaque const &);
};
