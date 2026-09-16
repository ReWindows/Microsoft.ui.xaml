#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 14 member(s).
class RepeaterLayoutContext {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemAtCore@RepeaterLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@H@Z
    virtual WindissectOpaque GetItemAtCore(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateElementAtCore@RepeaterLayoutContext@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@HAEBW4ElementRealizationOptions@Controls@34Microsoft@6@@Z
    virtual WindissectOpaque GetOrCreateElementAtCore(int, int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@RepeaterLayoutContext@@UEBA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetRuntimeClassName() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemCountCore@RepeaterLayoutContext@@UEAAHXZ
    virtual int ItemCountCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@RepeaterLayoutContext@@UEAAXAEBUPoint@Foundation@Windows@winrt@@@Z
    virtual void LayoutOriginCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutOriginCore@RepeaterLayoutContext@@UEAA?AUPoint@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutOriginCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@RepeaterLayoutContext@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    virtual void LayoutStateCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LayoutStateCore@RepeaterLayoutContext@@UEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque LayoutStateCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RealizationRectCore@RepeaterLayoutContext@@UEAA?AURect@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque RealizationRectCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecommendedAnchorIndexCore@RepeaterLayoutContext@@UEAAHXZ
    virtual int RecommendedAnchorIndexCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@RepeaterLayoutContext@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RepeaterLayoutContext@@QEAA@AEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@@Z
    RepeaterLayoutContext(WindissectOpaque const &);
};
