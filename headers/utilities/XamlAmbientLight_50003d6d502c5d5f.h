#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class XamlAmbientLight {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLightIdStatic@XamlAmbientLight@@SAAEAUhstring@winrt@@XZ
    static WindissectOpaque & GetLightIdStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnColorPropertyChanged@XamlAmbientLight@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnColorPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsTargetPropertyChanged@XamlAmbientLight@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsTargetPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionResources@XamlAmbientLight@@AEAAXXZ
    void EnsureCompositionResources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReleaseCompositionResources@XamlAmbientLight@@AEAAXXZ
    void ReleaseCompositionResources();
};
