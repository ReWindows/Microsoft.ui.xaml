#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class FocusHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationDirection@FocusHelper@@SA?AW4FocusNavigationDirection@Input@Xaml@UI@Windows@winrt@@W4VirtualKey@System@67@@Z
    static int GetNavigationDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOppositeDirection@FocusHelper@@SA?AW4FocusNavigationDirection@Input@Xaml@UI@Windows@winrt@@W4234567@@Z
    static int GetOppositeDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPageNavigationDirection@FocusHelper@@SA?AW4FocusNavigationDirection@Input@Xaml@UI@Windows@winrt@@W4VirtualKey@System@67@@Z
    static int GetPageNavigationDirection(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUIElementForFocusCandidate@FocusHelper@@SA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUDependencyObject@3456@@Z
    static WindissectOpaque GetUIElementForFocusCandidate(WindissectOpaque const &);
};
