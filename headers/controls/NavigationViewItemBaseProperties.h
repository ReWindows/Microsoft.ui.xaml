#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class NavigationViewItemBaseProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@NavigationViewItemBaseProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@NavigationViewItemBaseProperties@@QEAA_NXZ
    bool IsSelected();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedProperty@NavigationViewItemBaseProperties@@SA?AUDependencyProperty@Xaml@UI@Windows@winrt@@XZ
    static WindissectOpaque IsSelectedProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectedPropertyChanged@NavigationViewItemBaseProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsSelectedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
