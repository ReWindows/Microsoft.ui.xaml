#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class ScrollViewTestHooks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalTestHooks@ScrollViewTestHooks@@SA?AU?$com_ptr@VScrollViewTestHooks@@@winrt@@XZ
    static WindissectOpaque EnsureGlobalTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAutoHideScrollControllers@ScrollViewTestHooks@@SA?AU?$IReference@_N@Foundation@Windows@winrt@@AEBUScrollView@Controls@Xaml@UI@Microsoft@5@@Z
    static WindissectOpaque GetAutoHideScrollControllers(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAutoHideScrollControllers@ScrollViewTestHooks@@SAXAEBUScrollView@Controls@Xaml@UI@Microsoft@winrt@@U?$IReference@_N@Foundation@Windows@7@@Z
    static void SetAutoHideScrollControllers(WindissectOpaque const &, WindissectOpaque);
};
