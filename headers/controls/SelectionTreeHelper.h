#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 2 member(s).
class SelectionTreeHelper {
public:
    class TreeWalkNodeInfo;
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSubSet@SelectionTreeHelper@@CA_NAEBUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@0@Z
    static bool IsSubSet(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartPath@SelectionTreeHelper@@CA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@AEBU234567@H@Z
    static WindissectOpaque StartPath(WindissectOpaque const &, int);
};
