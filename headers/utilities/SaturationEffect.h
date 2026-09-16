#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
namespace Microsoft::UI::Private::Composition::Effects {
class SaturationEffect {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectId@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAU_GUID@@@Z
    virtual long GetEffectId(_GUID *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNamedPropertyMapping@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJPEB_WPEAIPEAW4GRAPHICS_EFFECT_PROPERTY_MAPPING@@@Z
    virtual long GetNamedPropertyMapping(wchar_t const *, unsigned int *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJIPEAPEAUIPropertyValue@Foundation@Windows@ABI@@@Z
    virtual long GetProperty(unsigned int, ::ABI::Windows::Foundation::IPropertyValue * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPropertyCount@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetPropertyCount(unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSource@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJIPEAPEAUIGraphicsEffectSource@2Graphics@Windows@ABI@@@Z
    virtual long GetSource(unsigned int, ::ABI::Windows::Graphics::Effects::IGraphicsEffectSource * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceCount@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@UEAAJPEAI@Z
    virtual long GetSourceCount(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Saturation@SaturationEffect@Effects@Composition@Private@UI@Microsoft@@QEAAXAEBM@Z
    void Saturation(float const &);
};
} // namespace Microsoft::UI::Private::Composition::Effects
