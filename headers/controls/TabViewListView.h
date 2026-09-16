#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 10 member(s).
class TabViewListView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@TabViewListView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void OnItemsChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareContainerForItemOverride@TabViewListView@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void PrepareContainerForItemOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TabViewListView@@QEAA@XZ
    TabViewListView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerContentChanging@TabViewListView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUContainerContentChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnContainerContentChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedIndexPropertyChanged@TabViewListView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSelectedIndexPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBottomBorderVisualState@TabViewListView@@AEAAXXZ
    void UpdateBottomBorderVisualState();
};
