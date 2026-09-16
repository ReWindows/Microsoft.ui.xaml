#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 17 member(s).
class NavigationViewItemBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSplitView@NavigationViewItemBase@@QEBA?AUSplitView@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetSplitView() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItemBase@@QEAA@XZ
    NavigationViewItemBase();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemBase@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@NavigationViewItemBase@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    virtual void OnContentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@NavigationViewItemBase@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@NavigationViewItemBase@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@NavigationViewItemBase@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@NavigationViewItemBase@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnLostFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBaseDepthChanged@NavigationViewItemBase@@UEAAXXZ
    virtual void OnNavigationViewItemBaseDepthChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBaseIsSelectedChanged@NavigationViewItemBase@@UEAAXXZ
    virtual void OnNavigationViewItemBaseIsSelectedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBasePositionChanged@NavigationViewItemBase@@UEAAXXZ
    virtual void OnNavigationViewItemBasePositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@NavigationViewItemBase@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationViewParent@NavigationViewItemBase@@QEAAXAEBUNavigationView@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetNavigationViewParent(WindissectOpaque const &);
};
