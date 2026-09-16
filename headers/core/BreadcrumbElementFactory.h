#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class BreadcrumbElementFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BreadcrumbElementFactory@@QEAA@XZ
    BreadcrumbElementFactory();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCore@BreadcrumbElementFactory@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUElementFactoryGetArgs@Controls@34Microsoft@6@@Z
    virtual WindissectOpaque GetElementCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@BreadcrumbElementFactory@@UEAAXAEBUElementFactoryRecycleArgs@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UserElementFactory@BreadcrumbElementFactory@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void UserElementFactory(WindissectOpaque const &);
};
