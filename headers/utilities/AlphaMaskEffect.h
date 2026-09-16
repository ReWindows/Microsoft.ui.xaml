#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
namespace Microsoft::UI::Private::Composition::Effects {
class AlphaMaskEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@AlphaMaskEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@AlphaMaskEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@ABI@@@Z
    virtual long GetSource(unsigned int, ::ABI::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@AlphaMaskEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AlphaMaskEffect@Effects@Composition@Private@UI@Microsoft@@UEAA@XZ
    virtual ~AlphaMaskEffect();
};
} // namespace Microsoft::UI::Private::Composition::Effects
