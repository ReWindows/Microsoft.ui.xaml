#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 8 member(s).
class ProgressBarProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ProgressBarProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsIndeterminate@ProgressBarProperties@@QEAA_NXZ
    bool IsIndeterminate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsIndeterminatePropertyChanged@ProgressBarProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsIndeterminatePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowErrorPropertyChanged@ProgressBarProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnShowErrorPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowPausedPropertyChanged@ProgressBarProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnShowPausedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowError@ProgressBarProperties@@QEAA_NXZ
    bool ShowError();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowPaused@ProgressBarProperties@@QEAA_NXZ
    bool ShowPaused();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TemplateSettings@ProgressBarProperties@@QEAA?AUProgressBarTemplateSettings@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque TemplateSettings();
};
