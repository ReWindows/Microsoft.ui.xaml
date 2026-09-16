#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 17 member(s).
class NavigationViewItemAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Collapse@NavigationViewItemAutomationPeer@@QEAAXXZ
    void Collapse();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Expand@NavigationViewItemAutomationPeer@@QEAAXXZ
    void Expand();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLevelCore@NavigationViewItemAutomationPeer@@QEAAHXZ
    int GetLevelCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNameCore@NavigationViewItemAutomationPeer@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetNameCore();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSizeOfSetCore@NavigationViewItemAutomationPeer@@QEAAHXZ
    int GetSizeOfSetCore();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@NavigationViewItemAutomationPeer@@QEAAXXZ
    void Invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandCollapseAutomationEvent@NavigationViewItemAutomationPeer@@QEAAXW4ExpandCollapseState@Automation@Xaml@UI@Windows@winrt@@@Z
    void RaiseExpandCollapseAutomationEvent(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionContainer@NavigationViewItemAutomationPeer@@QEAA?AUIRawElementProviderSimple@Provider@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque SelectionContainer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelection@NavigationViewItemAutomationPeer@@AEAAX_N@Z
    void ChangeSelection(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationViewRepeaterPosition@NavigationViewItemAutomationPeer@@AEAA?AW4NavigationViewRepeaterPosition@@XZ
    int GetNavigationViewRepeaterPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentItemsRepeater@NavigationViewItemAutomationPeer@@AEAA?AUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetParentItemsRepeater();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentNavigationView@NavigationViewItemAutomationPeer@@AEAA?AUNavigationView@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetParentNavigationView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionOrSetCountInLeftNavHelper@NavigationViewItemAutomationPeer@@AEAAHW4AutomationOutput@1@@Z
    int GetPositionOrSetCountInLeftNavHelper(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionOrSetCountInTopNavHelper@NavigationViewItemAutomationPeer@@AEAAHW4AutomationOutput@1@@Z
    int GetPositionOrSetCountInTopNavHelper(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasChildren@NavigationViewItemAutomationPeer@@AEAA_NXZ
    bool HasChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnFooterNavigation@NavigationViewItemAutomationPeer@@AEAA_NXZ
    bool IsOnFooterNavigation();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnTopNavigation@NavigationViewItemAutomationPeer@@AEAA_NXZ
    bool IsOnTopNavigation();
};
