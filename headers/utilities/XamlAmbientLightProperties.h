#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class XamlAmbientLightProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@XamlAmbientLightProperties@@QEAA?AU0UI@Windows@winrt@@XZ
    WindissectOpaque Color();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Color@XamlAmbientLightProperties@@QEAAXAEBU0UI@Windows@winrt@@@Z
    void Color(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@XamlAmbientLightProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsTarget@XamlAmbientLightProperties@@SA_NAEBUDependencyObject@Xaml@UI@Windows@winrt@@@Z
    static bool GetIsTarget(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorPropertyChanged@XamlAmbientLightProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnColorPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
};
