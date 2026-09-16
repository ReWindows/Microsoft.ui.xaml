#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 8 member(s).
class NavigationViewItemsFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCore@NavigationViewItemsFactory@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUElementFactoryGetArgs@Controls@34Microsoft@6@@Z
    virtual WindissectOpaque GetElementCore(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItemsFactory@@QEAA@XZ
    NavigationViewItemsFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@NavigationViewItemsFactory@@UEAAXAEBUElementFactoryRecycleArgs@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserElementFactory@NavigationViewItemsFactory@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void UserElementFactory(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItemsFactory@@UEAA@XZ
    virtual ~NavigationViewItemsFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnlinkElementFromParent@NavigationViewItemsFactory@@AEAAXAEBUElementFactoryRecycleArgs@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UnlinkElementFromParent(WindissectOpaque const &);
};
