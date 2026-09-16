#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class ElementFactory {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementCore@ElementFactory@@UEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUElementFactoryGetArgs@Controls@34Microsoft@6@@Z
    virtual WindissectOpaque GetElementCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingAddRef@ElementFactory@@UEAAKXZ
    virtual unsigned long NonDelegatingAddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingQueryInterface@ElementFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long NonDelegatingQueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NonDelegatingRelease@ElementFactory@@UEAAKXZ
    virtual unsigned long NonDelegatingRelease();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleElementCore@ElementFactory@@UEAAXAEBUElementFactoryRecycleArgs@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void RecycleElementCore(WindissectOpaque const &);
};
