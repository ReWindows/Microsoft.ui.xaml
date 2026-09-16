#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class ExpanderAutomationPeer {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenCore@ExpanderAutomationPeer@@QEAA?AU?$IVector@UAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetChildrenCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPeerFromPointCore@ExpanderAutomationPeer@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@UPoint@Foundation@78@@Z
    WindissectOpaque GetPeerFromPointCore(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasKeyboardFocusCore@ExpanderAutomationPeer@@QEAA_NXZ
    bool HasKeyboardFocusCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@ExpanderAutomationPeer@@QEAAXW4ExpandCollapseState@Automation@Xaml@UI@Windows@winrt@@@Z
    void RaiseExpandCollapseAutomationEvent(int);
};
