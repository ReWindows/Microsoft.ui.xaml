#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class Layout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@Layout@@QEAAXAEBULayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void InitializeForContext(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Layout@@QEAA@XZ
    Layout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutId@Layout@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque LayoutId();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContext@Layout@@QEAAXAEBULayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UninitializeForContext(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Layout@@UEAA@XZ
    virtual ~Layout();
};
