#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 24 member(s).
class ProgressRing {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ProgressRing@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundColorPropertyChanged@ProgressRing@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnBackgroundColorPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackgroundPropertyChanged@ProgressRing@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnBackgroundPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ProgressRing@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundColorPropertyChanged@ProgressRing@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnForegroundColorPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundPropertyChanged@ProgressRing@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnForegroundPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProgressRing@@QEAA@XZ
    ProgressRing();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProgressRing@@UEAA@XZ
    virtual ~ProgressRing();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyTemplateSettings@ProgressRing@@AEAAXXZ
    void ApplyTemplateSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceMaximum@ProgressRing@@AEAAXXZ
    void CoerceMaximum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceMinimum@ProgressRing@@AEAAXXZ
    void CoerceMinimum();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceValue@ProgressRing@@AEAAXXZ
    void CoerceValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInBounds@ProgressRing@@AEAA_NN@Z
    bool IsInBounds(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ProgressRing@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@ProgressRing@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimatedVisualPlayerSource@ProgressRing@@AEAAXXZ
    void SetAnimatedVisualPlayerSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLottieBackgroundColor@ProgressRing@@AEAAXUIAnimatedVisualSource@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetLottieBackgroundColor(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLottieForegroundColor@ProgressRing@@AEAAXUIAnimatedVisualSource@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetLottieForegroundColor(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLottieProgress@ProgressRing@@AEAAXXZ
    void UpdateLottieProgress();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStates@ProgressRing@@AEAAXXZ
    void UpdateStates();
};
