#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 12 member(s).
class BreadcrumbLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@BreadcrumbLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@BreadcrumbLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BreadcrumbLayout@@UEAA@XZ
    virtual ~BreadcrumbLayout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeItem@BreadcrumbLayout@@AEAAXAEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@HAEAMM@Z
    void ArrangeItem(WindissectOpaque const &, int, float &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeItem@BreadcrumbLayout@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEAMM@Z
    void ArrangeItem(WindissectOpaque const &, float &, float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBreadcrumbBarItemsHeight@BreadcrumbLayout@@AEAAMAEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@H@Z
    float GetBreadcrumbBarItemsHeight(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementAt@BreadcrumbLayout@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUNonVirtualizingLayoutContext@Controls@34Microsoft@6@I@Z
    WindissectOpaque GetElementAt(WindissectOpaque const &, unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstBreadcrumbBarItemToArrange@BreadcrumbLayout@@AEAAHAEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int GetFirstBreadcrumbBarItemToArrange(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@BreadcrumbLayout@@AEAAIAEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    unsigned int GetItemCount(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideItem@BreadcrumbLayout@@AEAAXAEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@H@Z
    void HideItem(WindissectOpaque const &, int);
};
