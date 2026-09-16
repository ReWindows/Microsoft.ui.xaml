#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 14 member(s).
class NavigationViewItemSeparator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItemSeparator@@QEAA@XZ
    NavigationViewItemSeparator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemSeparator@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationViewItemSeparator@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItemSeparator@@UEAA@XZ
    virtual ~NavigationViewItemSeparator();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBaseDepthChanged@NavigationViewItemSeparator@@EEAAXXZ
    virtual void OnNavigationViewItemBaseDepthChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBasePositionChanged@NavigationViewItemSeparator@@EEAAXXZ
    virtual void OnNavigationViewItemBasePositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPropertyChanged@NavigationViewItemSeparator@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSplitViewPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClosedCompact@NavigationViewItemSeparator@@AEAAX_N@Z
    void UpdateIsClosedCompact(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemIndentation@NavigationViewItemSeparator@@AEAAXXZ
    void UpdateItemIndentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationViewItemSeparator@@AEAAX_N@Z
    void UpdateVisualState(bool);
};
