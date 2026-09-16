#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 19 member(s).
class InfoBar {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InfoBar@@QEAA@XZ
    InfoBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@InfoBar@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@InfoBar@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InfoBar@@UEAA@XZ
    virtual ~InfoBar();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconSeverityLevelResourceName@InfoBar@@AEAA?BUhstring@winrt@@W4InfoBarSeverity@Controls@Xaml@UI@Microsoft@3@@Z
    WindissectOpaque GetIconSeverityLevelResourceName(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseButtonClick@InfoBar@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnCloseButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundChanged@InfoBar@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnForegroundChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClosedEvent@InfoBar@@AEAAXXZ
    void RaiseClosedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseClosingEvent@InfoBar@@AEAAXXZ
    void RaiseClosingEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCloseButton@InfoBar@@AEAAXXZ
    void UpdateCloseButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForeground@InfoBar@@AEAAXXZ
    void UpdateForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIcon@InfoBar@@AEAAXXZ
    void UpdateIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIconVisibility@InfoBar@@AEAAXXZ
    void UpdateIconVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSeverity@InfoBar@@AEAAXXZ
    void UpdateSeverity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisibility@InfoBar@@AEAAX_N0@Z
    void UpdateVisibility(bool, bool);
};
