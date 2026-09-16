#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
namespace SystemBackdropComponentInternal {
class XamlWindowHandler {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0XamlWindowHandler@SystemBackdropComponentInternal@@QEAA@PEAUISystemBackdropController@1@AEBUWindow@Xaml@UI@Windows@winrt@@@Z
    XamlWindowHandler(WindissectOpaque *, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1XamlWindowHandler@SystemBackdropComponentInternal@@UEAA@XZ
    virtual ~XamlWindowHandler();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToThemeChanged@XamlWindowHandler@SystemBackdropComponentInternal@@AEAAX_N@Z
    void AttachToThemeChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RefreshTheme@XamlWindowHandler@SystemBackdropComponentInternal@@AEAAXXZ
    void RefreshTheme();
};
} // namespace SystemBackdropComponentInternal
