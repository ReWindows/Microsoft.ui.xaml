#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class ImageIconProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ImageIconProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourcePropertyChanged@ImageIconProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source@ImageIconProperties@@QEAA?AUImageSource@Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Source();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Source@ImageIconProperties@@QEAAXAEBUImageSource@Media@Xaml@UI@Windows@winrt@@@Z
    void Source(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SourceProperty@ImageIconProperties@@SA?AUDependencyProperty@Xaml@UI@Windows@winrt@@XZ
    static WindissectOpaque SourceProperty();
};
