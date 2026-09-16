#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class VirtualLayoutContextAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildrenCore@VirtualLayoutContextAdapter@@UEAA?AU?$IVectorView@UUIElement@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque ChildrenCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@VirtualLayoutContextAdapter@@UEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutStateCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@VirtualLayoutContextAdapter@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    virtual void LayoutStateCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualLayoutContextAdapter@@QEAA@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    VirtualLayoutContextAdapter(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualLayoutContextAdapter@@UEAA@XZ
    virtual ~VirtualLayoutContextAdapter();
};
