#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 12 member(s).
class VirtualizingLayoutContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAtCore@VirtualizingLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetItemAtCore(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNonVirtualizingContextAdapter@VirtualizingLayoutContext@@QEAA?AUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetNonVirtualizingContextAdapter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateElementAtCore@VirtualizingLayoutContext@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@HAEBW4ElementRealizationOptions@Controls@34Microsoft@6@@Z
    virtual WindissectOpaque GetOrCreateElementAtCore(int, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCountCore@VirtualizingLayoutContext@@UEAAHXZ
    virtual int ItemCountCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@VirtualizingLayoutContext@@UEAA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutOriginCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@VirtualizingLayoutContext@@UEAAXAEBUPoint@Foundation@Windows@winrt@@@Z
    virtual void LayoutOriginCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizationRectCore@VirtualizingLayoutContext@@UEAA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque RealizationRectCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendedAnchorIndexCore@VirtualizingLayoutContext@@UEAAHXZ
    virtual int RecommendedAnchorIndexCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@VirtualizingLayoutContext@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0VirtualizingLayoutContext@@QEAA@XZ
    VirtualizingLayoutContext();
};
