#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class BitmapIconSourceProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@BitmapIconSourceProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnShowAsMonochromePropertyChanged@BitmapIconSourceProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnShowAsMonochromePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUriSourcePropertyChanged@BitmapIconSourceProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnUriSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowAsMonochrome@BitmapIconSourceProperties@@QEAA_NXZ
    bool ShowAsMonochrome();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UriSource@BitmapIconSourceProperties@@QEAA?AUUri@Foundation@Windows@winrt@@XZ
    WindissectOpaque UriSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UriSource@BitmapIconSourceProperties@@QEAAXAEBUUri@Foundation@Windows@winrt@@@Z
    void UriSource(WindissectOpaque const &);
};
