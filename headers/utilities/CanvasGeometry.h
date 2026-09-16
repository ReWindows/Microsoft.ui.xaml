#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class CanvasGeometry {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGeometry@CanvasGeometry@@UEAAJPEAPEAUID2D1Geometry@@@Z
    virtual long GetGeometry(ID2D1Geometry * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetGeometryUsingFactory@CanvasGeometry@@UEAAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z
    virtual long TryGetGeometryUsingFactory(ID2D1Factory *, ID2D1Geometry * *);
};
