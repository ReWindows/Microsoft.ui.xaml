#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 12 member(s).
class SliderInteraction {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LargeChange@SliderInteraction@@QEAAXN@Z
    void LargeChange(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Maximum@SliderInteraction@@QEAAXN@Z
    void Maximum(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Minimum@SliderInteraction@@QEAAXN@Z
    void Minimum(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SliderInteraction@@QEAA@XZ
    SliderInteraction();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SmallChange@SliderInteraction@@QEAAXN@Z
    void SmallChange(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SliderInteraction@@UEAA@XZ
    virtual ~SliderInteraction();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePosition@SliderInteraction@@AEAAXN@Z
    void UpdatePosition(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransform@SliderInteraction@@AEAAXXZ
    void UpdateTransform();
};
