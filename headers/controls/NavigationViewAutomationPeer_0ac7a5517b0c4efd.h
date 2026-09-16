#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 2 member(s).
class NavigationViewAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@NavigationViewAutomationPeer@@QEAA?AU?$com_array@UIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@winrt@@@winrt@@XZ
    WindissectOpaque GetSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangedEvent@NavigationViewAutomationPeer@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void RaiseSelectionChangedEvent(WindissectOpaque const &, WindissectOpaque const &);
};
