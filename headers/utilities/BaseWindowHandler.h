#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
namespace SystemBackdropComponentInternal {
class BaseWindowHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateOrDeactivateController@BaseWindowHandler@SystemBackdropComponentInternal@@QEAAXXZ
    void ActivateOrDeactivateController();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BaseWindowHandler@SystemBackdropComponentInternal@@UEAA@XZ
    virtual ~BaseWindowHandler();
protected:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BaseWindowHandler@SystemBackdropComponentInternal@@IEAA@PEAUISystemBackdropController@1@@Z
    BaseWindowHandler(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializePolicy@BaseWindowHandler@SystemBackdropComponentInternal@@MEAAXXZ
    virtual void InitializePolicy();
};
} // namespace SystemBackdropComponentInternal
