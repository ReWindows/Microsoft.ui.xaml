#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 3 member(s).
class BackdropMaterial {
public:
    class BackdropMaterialState;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@BackdropMaterial@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyToRootOrPageBackgroundChanged@BackdropMaterial@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnApplyToRootOrPageBackgroundChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateOrDestroyMicaController@BackdropMaterial@@CAXXZ
    static void CreateOrDestroyMicaController();
};
