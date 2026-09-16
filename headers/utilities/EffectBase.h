#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
namespace Microsoft::UI::Private::Composition::Effects {
class EffectBase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@EffectBase@Effects@Composition@Private@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@EffectBase@Effects@Composition@Private@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@ABI@@@Z
    virtual long GetProperty(unsigned int, ::ABI::Windows::Foundation::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@EffectBase@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@EffectBase@Effects@Composition@Private@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@ABI@@@Z
    virtual long GetSource(unsigned int, ::ABI::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@EffectBase@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
};
} // namespace Microsoft::UI::Private::Composition::Effects
