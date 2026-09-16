#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 13 member(s).
class TabViewItemProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TabViewItemProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Header@TabViewItemProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque Header();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Header@TabViewItemProperties@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Header(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderTemplate@TabViewItemProperties@@QEAA?AUDataTemplate@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque HeaderTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderTemplate@TabViewItemProperties@@QEAAXAEBUDataTemplate@Xaml@UI@Windows@winrt@@@Z
    void HeaderTemplate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconSource@TabViewItemProperties@@QEAA?AU0Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque IconSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IconSource@TabViewItemProperties@@QEAAXAEBU0Controls@Xaml@UI@Microsoft@winrt@@@Z
    void IconSource(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClosable@TabViewItemProperties@@QEAA_NXZ
    bool IsClosable();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderPropertyChanged@TabViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnHeaderPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconSourcePropertyChanged@TabViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIconSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsClosablePropertyChanged@TabViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsClosablePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TabViewTemplateSettings@TabViewItemProperties@@QEAA?AUTabViewItemTemplateSettings@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque TabViewTemplateSettings();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TabViewItemProperties@@QEAA@XZ
    ~TabViewItemProperties();
};
