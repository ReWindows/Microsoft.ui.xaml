#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 26 member(s).
class MaterialHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNoiseBrush@MaterialHelper@@SA?AUCompositionSurfaceBrush@Composition@UI@Windows@winrt@@XZ
    static WindissectOpaque GetNoiseBrush();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MaterialHelper@@QEAA@XZ
    MaterialHelper();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NoiseChanged@MaterialHelper@@SAXUevent_token@winrt@@@Z
    static void NoiseChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PolicyChanged@MaterialHelper@@SAXUevent_token@winrt@@@Z
    static void PolicyChanged(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RS2IsSafeToCreateNoise@MaterialHelper@@SA_NXZ
    static bool RS2IsSafeToCreateNoise();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShouldBeginAttachingLights@MaterialHelper@@SAX_N@Z
    static void SetShouldBeginAttachingLights(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetShouldContinueAttachingLights@MaterialHelper@@SAX_N@Z
    static void SetShouldContinueAttachingLights(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueAttachingLights@MaterialHelper@@SA_NXZ
    static bool ShouldContinueAttachingLights();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePolicyStatus@MaterialHelper@@QEAAX_N@Z
    void UpdatePolicyStatus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?WindowSizeChanged@MaterialHelper@@SAXUevent_token@winrt@@@Z
    static void WindowSizeChanged(WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MaterialHelper@@UEAA@XZ
    virtual ~MaterialHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureCompositionCapabilities@MaterialHelper@@AEAAXXZ
    void EnsureCompositionCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureSizeChangedHandler@MaterialHelper@@AEAAXXZ
    void EnsureSizeChangedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNoiseBrushImpl@MaterialHelper@@AEAA?AUCompositionSurfaceBrush@Composition@UI@Windows@winrt@@XZ
    WindissectOpaque GetNoiseBrushImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupDpiChangedHandler@MaterialHelper@@AEAAXXZ
    void HookupDpiChangedHandler();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookupVisibilityChangedHandler@MaterialHelper@@AEAAXXZ
    void HookupVisibilityChangedHandler();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullScreenOrTabletModeImpl@MaterialHelper@@AEAA_NXZ
    bool IsFullScreenOrTabletModeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionCapabilitiesChanged@MaterialHelper@@AEAAXAEBUCompositionCapabilities@Composition@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnCompositionCapabilitiesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDpiChanged@MaterialHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnDpiChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnEnergySaverStatusChanged@MaterialHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnEnergySaverStatusChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@MaterialHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUISettingsChanged@MaterialHelper@@AEAAXAEBUUISettings@ViewManagement@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnUISettingsChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisibilityChanged@MaterialHelper@@AEAAXAEBUCoreWindow@Core@UI@Windows@winrt@@AEBUVisibilityChangedEventArgs@3456@@Z
    void OnVisibilityChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetNoise@MaterialHelper@@AEAAXXZ
    void ResetNoise();
};
