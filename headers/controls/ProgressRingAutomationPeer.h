#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class ProgressRingAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ProgressRingAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Maximum@ProgressRingAutomationPeer@@QEAANXZ
    double Maximum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Minimum@ProgressRingAutomationPeer@@QEAANXZ
    double Minimum();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@ProgressRingAutomationPeer@@QEAAXN@Z
    void SetValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@ProgressRingAutomationPeer@@QEAANXZ
    double Value();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@ProgressRingAutomationPeer@@AEAA?AU?$com_ptr@VProgressRing@@@winrt@@XZ
    WindissectOpaque GetImpl();
};
