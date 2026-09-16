#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class PagerControlAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@PagerControlAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelection@PagerControlAutomationPeer@@QEAA?AU?$com_array@UIInspectable@Foundation@Windows@winrt@@@winrt@@XZ
    WindissectOpaque GetSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChanged@PagerControlAutomationPeer@@QEAAXNN@Z
    void RaiseSelectionChanged(double, double);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@PagerControlAutomationPeer@@AEAA?AU?$com_ptr@VPagerControl@@@winrt@@XZ
    WindissectOpaque GetImpl();
};
