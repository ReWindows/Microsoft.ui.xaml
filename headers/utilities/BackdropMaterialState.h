#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
namespace BackdropMaterial {
class BackdropMaterialState {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BackdropMaterialState@BackdropMaterial@@QEAA@AEBUControl@Controls@Xaml@UI@Windows@winrt@@@Z
    BackdropMaterialState(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Dispose@BackdropMaterialState@BackdropMaterial@@QEAAXXZ
    void Dispose();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@BackdropMaterialState@BackdropMaterial@@UEBA?AUhstring@winrt@@XZ
    virtual WindissectOpaque GetRuntimeClassName() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BackdropMaterialState@BackdropMaterial@@UEAA@XZ
    virtual ~BackdropMaterialState();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFallbackBrush@BackdropMaterialState@BackdropMaterial@@AEAAXXZ
    void UpdateFallbackBrush();
};
} // namespace BackdropMaterial
