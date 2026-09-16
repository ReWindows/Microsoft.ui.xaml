#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 17 member(s).
class TreeViewItemProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapsedGlyph@TreeViewItemProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque CollapsedGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@TreeViewItemProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandedGlyph@TreeViewItemProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque ExpandedGlyph();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphBrush@TreeViewItemProperties@@QEAA?AUBrush@Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GlyphBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphBrush@TreeViewItemProperties@@QEAAXAEBUBrush@Media@Xaml@UI@Windows@winrt@@@Z
    void GlyphBrush(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphOpacity@TreeViewItemProperties@@QEAAXN@Z
    void GlyphOpacity(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphOpacity@TreeViewItemProperties@@QEAANXZ
    double GlyphOpacity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphSize@TreeViewItemProperties@@QEAANXZ
    double GlyphSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?GlyphSize@TreeViewItemProperties@@QEAAXN@Z
    void GlyphSize(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasUnrealizedChildren@TreeViewItemProperties@@QEAA_NXZ
    bool HasUnrealizedChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@TreeViewItemProperties@@QEAA_NXZ
    bool IsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TreeViewItemProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque ItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TreeViewItemProperties@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void ItemsSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHasUnrealizedChildrenPropertyChanged@TreeViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnHasUnrealizedChildrenPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedPropertyChanged@TreeViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsExpandedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourcePropertyChanged@TreeViewItemProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnItemsSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeViewItemTemplateSettings@TreeViewItemProperties@@QEAA?AU0Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque TreeViewItemTemplateSettings();
};
