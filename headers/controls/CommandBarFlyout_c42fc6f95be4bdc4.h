#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 18 member(s).
class CommandBarFlyout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddDropShadow@CommandBarFlyout@@QEAAXXZ
    void AddDropShadow();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CommandBarFlyout@@QEAA@XZ
    CommandBarFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreatePresenter@CommandBarFlyout@@QEAA?AUControl@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque CreatePresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrimaryCommands@CommandBarFlyout@@QEAA?AU?$IObservableVector@UICommandBarElement@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque PrimaryCommands();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveDropShadow@CommandBarFlyout@@QEAAXXZ
    void RemoveDropShadow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SecondaryCommands@CommandBarFlyout@@QEAA?AU?$IObservableVector@UICommandBarElement@Controls@Xaml@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque SecondaryCommands();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CommandBarFlyout@@UEAA@XZ
    virtual ~CommandBarFlyout();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookAllCommandBarElementDependencyPropertyChanges@CommandBarFlyout@@AEAAXXZ
    void HookAllCommandBarElementDependencyPropertyChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookAppBarButtonDependencyPropertyChanges@CommandBarFlyout@@AEAAXAEBUAppBarButton@Controls@Xaml@UI@Windows@winrt@@H@Z
    void HookAppBarButtonDependencyPropertyChanges(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookAppBarToggleButtonDependencyPropertyChanges@CommandBarFlyout@@AEAAXAEBUAppBarToggleButton@Controls@Xaml@UI@Windows@winrt@@H@Z
    void HookAppBarToggleButtonDependencyPropertyChanges(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandBarElementDependencyPropertyChanged@CommandBarFlyout@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnCommandBarElementDependencyPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSecondaryCommandsToCloseWhenExecuted@CommandBarFlyout@@AEAAXXZ
    void SetSecondaryCommandsToCloseWhenExecuted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookAllCommandBarElementDependencyPropertyChanges@CommandBarFlyout@@AEAAXXZ
    void UnhookAllCommandBarElementDependencyPropertyChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookCommandBarElementDependencyPropertyChanges@CommandBarFlyout@@AEAAXH_N@Z
    void UnhookCommandBarElementDependencyPropertyChanges(int, bool);
};
