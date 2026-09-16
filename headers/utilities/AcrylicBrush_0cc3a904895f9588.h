#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 28 member(s).
class AcrylicBrush {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AcrylicBrush@@QEAA@XZ
    AcrylicBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceToZeroOneRange@AcrylicBrush@@QEAAXAEAN@Z
    void CoerceToZeroOneRange(double &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceToZeroOneRange_Nullable@AcrylicBrush@@QEAAXAEAU?$IReference@N@Foundation@Windows@winrt@@@Z
    void CoerceToZeroOneRange_Nullable(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcrylicBrushWorker@AcrylicBrush@@SA?AUCompositionEffectBrush@Composition@UI@Windows@winrt@@AEBUCompositor@3456@_N1UColor@456@2211@Z
    static WindissectOpaque CreateAcrylicBrushWorker(WindissectOpaque const &, bool, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnConnected@AcrylicBrush@@QEAAXXZ
    void OnConnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisconnected@AcrylicBrush@@QEAAXXZ
    void OnDisconnected();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@AcrylicBrush@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AcrylicBrush@@UEAA@XZ
    virtual ~AcrylicBrush();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcrylicBrush@AcrylicBrush@@IEAAX_N0@Z
    void CreateAcrylicBrush(bool, bool);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CancelFallbackAnimationCompleteWait@AcrylicBrush@@AEAAXXZ
    void CancelFallbackAnimationCompleteWait();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CombineNoiseWithTintEffect_Legacy@AcrylicBrush@@CA?AUIGraphicsEffect@Effects@Graphics@Windows@winrt@@AEBUIGraphicsEffectSource@3456@AEBUColorSourceEffect@3Composition@Private@UI@Microsoft@6@@Z
    static WindissectOpaque CombineNoiseWithTintEffect_Legacy(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAcrylicBrushCompositionEffectFactory@AcrylicBrush@@CA?AUCompositionEffectFactory@Composition@UI@Windows@winrt@@AEBUCompositor@3456@_N11UColor@456@22@Z
    static WindissectOpaque CreateAcrylicBrushCompositionEffectFactory(WindissectOpaque const &, bool, bool, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimation@AcrylicBrush@@AEAAXAEBUCompositionBrush@Composition@UI@Windows@winrt@@AEAUCompositionScopedBatch@3456@AEAUevent_token@6@MMAEBU?$TypedEventHandler@UIInspectable@Foundation@Windows@winrt@@UCompositionBatchCompletedEventArgs@Composition@UI@34@@Foundation@56@@Z
    void CreateAnimation(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &, float, float, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureNoiseBrush@AcrylicBrush@@AEAAXXZ
    void EnsureNoiseBrush();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveLuminosityColor@AcrylicBrush@@AEAA?AUColor@UI@Windows@winrt@@XZ
    WindissectOpaque GetEffectiveLuminosityColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetEffectiveTintColor@AcrylicBrush@@AEAA?AUColor@UI@Windows@winrt@@XZ
    WindissectOpaque GetEffectiveTintColor();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateAcrylicBrushCompositionEffectFactory@AcrylicBrush@@CA?AUCompositionEffectFactory@Composition@UI@Windows@winrt@@AEBUCompositor@3456@_N11UColor@456@221@Z
    static WindissectOpaque GetOrCreateAcrylicBrushCompositionEffectFactory(WindissectOpaque const &, bool, bool, bool, WindissectOpaque, WindissectOpaque, WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWindowActive@AcrylicBrush@@AEAA_NAEBUCoreWindow@Core@UI@Windows@winrt@@@Z
    bool IsWindowActive(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCurrentWindowActivated@AcrylicBrush@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUWindowActivatedEventArgs@Core@UI@45@@Z
    void OnCurrentWindowActivated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFallbackColorChanged@AcrylicBrush@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFallbackColorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayCrossFadeAnimation@AcrylicBrush@@CAXAEBUCompositionBrush@Composition@UI@Windows@winrt@@MM@Z
    static void PlayCrossFadeAnimation(WindissectOpaque const &, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcrylicBrush@AcrylicBrush@@AEAAXXZ
    void UpdateAcrylicBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAcrylicStatus@AcrylicBrush@@AEAAXXZ
    void UpdateAcrylicStatus();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWindowActivationStatus@AcrylicBrush@@AEAAXXZ
    void UpdateWindowActivationStatus();
};
