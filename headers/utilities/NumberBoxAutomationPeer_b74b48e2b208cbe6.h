#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class NumberBoxAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@NumberBoxAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeChange@NumberBoxAutomationPeer@@QEAANXZ
    double LargeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Maximum@NumberBoxAutomationPeer@@QEAANXZ
    double Maximum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Minimum@NumberBoxAutomationPeer@@QEAANXZ
    double Minimum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseValueChangedEvent@NumberBoxAutomationPeer@@QEAAXNN@Z
    void RaiseValueChangedEvent(double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@NumberBoxAutomationPeer@@QEAAXN@Z
    void SetValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SmallChange@NumberBoxAutomationPeer@@QEAANXZ
    double SmallChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@NumberBoxAutomationPeer@@QEAANXZ
    double Value();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetImpl@NumberBoxAutomationPeer@@AEAA?AU?$com_ptr@VNumberBox@@@winrt@@XZ
    WindissectOpaque GetImpl();
};
