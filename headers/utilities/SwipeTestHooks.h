#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class SwipeTestHooks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalTestHooks@SwipeTestHooks@@SA?AU?$com_ptr@VSwipeTestHooks@@@winrt@@XZ
    static WindissectOpaque EnsureGlobalTestHooks();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyIdleStatusChanged@SwipeTestHooks@@SAXAEBUSwipeControl@Controls@Xaml@UI@Microsoft@winrt@@@Z
    static void NotifyIdleStatusChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyLastInteractedWithSwipeControlChanged@SwipeTestHooks@@SAXXZ
    static void NotifyLastInteractedWithSwipeControlChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyOpenedStatusChanged@SwipeTestHooks@@SAXAEBUSwipeControl@Controls@Xaml@UI@Microsoft@winrt@@@Z
    static void NotifyOpenedStatusChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeTestHooks@@UEAA@XZ
    virtual ~SwipeTestHooks();
};
