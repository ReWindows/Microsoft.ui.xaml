#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 13 member(s).
class ProgressBar {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ProgressBar@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ProgressBar@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ProgressBar@@QEAA@XZ
    ProgressBar();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ProgressBar@@UEAA@XZ
    virtual ~ProgressBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIndicatorWidthComponentChanged@ProgressBar@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnIndicatorWidthComponentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@ProgressBar@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgressBarIndicatorWidth@ProgressBar@@AEAAXXZ
    void SetProgressBarIndicatorWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateStates@ProgressBar@@AEAAXXZ
    void UpdateStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidthBasedTemplateSettings@ProgressBar@@AEAAXXZ
    void UpdateWidthBasedTemplateSettings();
};
