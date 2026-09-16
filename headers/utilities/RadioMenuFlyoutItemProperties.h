#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class RadioMenuFlyoutItemProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RadioMenuFlyoutItemProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAreCheckStatesEnabled@RadioMenuFlyoutItemProperties@@SA_NAEBUMenuFlyoutSubItem@Controls@Xaml@UI@Windows@winrt@@@Z
    static bool GetAreCheckStatesEnabled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GroupName@RadioMenuFlyoutItemProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque GroupName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChecked@RadioMenuFlyoutItemProperties@@QEAAX_N@Z
    void IsChecked(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsChecked@RadioMenuFlyoutItemProperties@@QEAA_NXZ
    bool IsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGroupNamePropertyChanged@RadioMenuFlyoutItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnGroupNamePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCheckedPropertyChanged@RadioMenuFlyoutItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsCheckedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
