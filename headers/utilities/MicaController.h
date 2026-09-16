#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 18 member(s).
class MicaController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Activate@MicaController@@UEAAXXZ
    virtual void Activate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Deactivate@MicaController@@UEAAXXZ
    virtual void Deactivate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FallbackColor@MicaController@@QEAAXAEBUColor@UI@Windows@winrt@@@Z
    void FallbackColor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LuminosityOpacity@MicaController@@QEAAXM@Z
    void LuminosityOpacity(float);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MicaController@@QEAA@XZ
    MicaController();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetHighContrast@MicaController@@UEAAX_N@Z
    virtual void SetHighContrast(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTarget@MicaController@@QEAA_NAEBUWindow@Xaml@UI@Windows@winrt@@@Z
    bool SetTarget(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TintColor@MicaController@@QEAAXAEBUColor@UI@Windows@winrt@@@Z
    void TintColor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TintOpacity@MicaController@@QEAAXM@Z
    void TintOpacity(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTheme@MicaController@@UEAAXW4ElementTheme@Xaml@UI@Windows@winrt@@@Z
    virtual void UpdateTheme(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MicaController@@UEAA@XZ
    virtual ~MicaController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Crossfade@MicaController@@AEAAXAEBUCompositionBrush@Composition@UI@Windows@winrt@@@Z
    void Crossfade(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsMicaSupported@MicaController@@AEBA_NXZ
    bool IsMicaSupported() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?Update@MicaController@@AEAAXXZ
    void Update();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSystemBackdropBrush@MicaController@@AEAAXAEBUCompositionBrush@Composition@UI@Windows@winrt@@@Z
    void UpdateSystemBackdropBrush(WindissectOpaque const &);
};
