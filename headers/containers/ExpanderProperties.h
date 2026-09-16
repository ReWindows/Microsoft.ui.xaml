#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 13 member(s).
class ExpanderProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ExpanderProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExpandDirection@ExpanderProperties@@QEAA?AW40Controls@Xaml@UI@Microsoft@winrt@@XZ
    int ExpandDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Header@ExpanderProperties@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque Header();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Header@ExpanderProperties@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Header(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderTemplate@ExpanderProperties@@QEAA?AUDataTemplate@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque HeaderTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderTemplate@ExpanderProperties@@QEAAXAEBUDataTemplate@Xaml@UI@Windows@winrt@@@Z
    void HeaderTemplate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderTemplateSelector@ExpanderProperties@@QEAA?AUDataTemplateSelector@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque HeaderTemplateSelector();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HeaderTemplateSelector@ExpanderProperties@@QEAAXAEBUDataTemplateSelector@Controls@Xaml@UI@Windows@winrt@@@Z
    void HeaderTemplateSelector(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExpanded@ExpanderProperties@@QEAA_NXZ
    bool IsExpanded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpandDirectionPropertyChanged@ExpanderProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnExpandDirectionPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedPropertyChanged@ExpanderProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsExpandedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TemplateSettings@ExpanderProperties@@QEAA?AUExpanderTemplateSettings@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque TemplateSettings();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ExpanderProperties@@QEAA@XZ
    ~ExpanderProperties();
};
