#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class ImageIconSourceProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ImageIconSourceProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageSource@ImageIconSourceProperties@@QEAA?AU0Media@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ImageSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ImageSource@ImageIconSourceProperties@@QEAAXAEBU0Media@Xaml@UI@Windows@winrt@@@Z
    void ImageSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnImageSourcePropertyChanged@ImageIconSourceProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnImageSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
