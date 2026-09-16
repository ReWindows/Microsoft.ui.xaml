#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class TreeViewNodeProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@TreeViewNodeProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque Content();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Content@TreeViewNodeProperties@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Content(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Depth@TreeViewNodeProperties@@QEAAHXZ
    int Depth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TreeViewNodeProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasChildren@TreeViewNodeProperties@@QEAA_NXZ
    bool HasChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TreeViewNodeProperties@@QEAA_NXZ
    bool IsExpanded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TreeViewNodeProperties@@QEAAX_N@Z
    void IsExpanded(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHasChildrenPropertyChanged@TreeViewNodeProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnHasChildrenPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedPropertyChanged@TreeViewNodeProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsExpandedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
