#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class PipsPagerAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@PipsPagerAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@PipsPagerAutomationPeer@@QEAA?AU?$com_array@UIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@winrt@@@winrt@@XZ
    WindissectOpaque GetSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChanged@PipsPagerAutomationPeer@@QEAAXNN@Z
    void RaiseSelectionChanged(double, double);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@PipsPagerAutomationPeer@@AEAA?AU?$com_ptr@VPipsPager@@@winrt@@XZ
    WindissectOpaque GetImpl();
};
