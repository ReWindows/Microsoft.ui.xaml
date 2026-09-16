#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class RevealBrushProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AlwaysUseFallback@RevealBrushProperties@@QEAA_NXZ
    bool AlwaysUseFallback();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@RevealBrushProperties@@QEAA?AU0UI@Windows@winrt@@XZ
    WindissectOpaque Color();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@RevealBrushProperties@@QEAAXAEBU0UI@Windows@winrt@@@Z
    void Color(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RevealBrushProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAlwaysUseFallbackPropertyChanged@RevealBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnAlwaysUseFallbackPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorPropertyChanged@RevealBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnColorPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetThemePropertyChanged@RevealBrushProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnTargetThemePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTheme@RevealBrushProperties@@QEAA?AW4ApplicationTheme@Xaml@UI@Windows@winrt@@XZ
    int TargetTheme();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TargetTheme@RevealBrushProperties@@QEAAXAEBW4ApplicationTheme@Xaml@UI@Windows@winrt@@@Z
    void TargetTheme(int const &);
};
