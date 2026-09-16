#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class ProgressBarAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@ProgressBarAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPatternCore@ProgressBarAutomationPeer@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBW4PatternInterface@Peers@Automation@Xaml@UI@45@@Z
    WindissectOpaque GetPatternCore(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Maximum@ProgressBarAutomationPeer@@QEAANXZ
    double Maximum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Minimum@ProgressBarAutomationPeer@@QEAANXZ
    double Minimum();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@ProgressBarAutomationPeer@@QEAAXN@Z
    void SetValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@ProgressBarAutomationPeer@@QEAANXZ
    double Value();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@ProgressBarAutomationPeer@@AEAA?AU?$com_ptr@VProgressBar@@@winrt@@XZ
    WindissectOpaque GetImpl();
};
