#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 8 member(s).
class LifetimeHandler {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCachedVisualTreeHelpersInstance@LifetimeHandler@@SA?AU?$com_ptr@VCachedVisualTreeHelpers@@@winrt@@XZ
    static WindissectOpaque GetCachedVisualTreeHelpersInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDisplayRegionHelperInstance@LifetimeHandler@@SA?AU?$com_ptr@VDisplayRegionHelper@@@winrt@@XZ
    static WindissectOpaque GetDisplayRegionHelperInstance();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaterialHelperInstance@LifetimeHandler@@SA?AU?$com_ptr@VMaterialHelper@@@winrt@@XZ
    static WindissectOpaque GetMaterialHelperInstance();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetMaterialHelperInstance@LifetimeHandler@@SA?AU?$com_ptr@VMaterialHelper@@@winrt@@XZ
    static WindissectOpaque TryGetMaterialHelperInstance();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LifetimeHandler@@UEAA@XZ
    virtual ~LifetimeHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Instance@LifetimeHandler@@CAAEAV1@XZ
    static LifetimeHandler & Instance();
};
