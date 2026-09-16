#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 36 member(s).
class NumberBox {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NumberBox@@QEAA@XZ
    NumberBox();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NumberBox@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@NumberBox@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@NumberBox@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValuePropertyChanged@NumberBox@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnValuePropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateNumberFormatter@NumberBox@@QEAAXUINumberFormatter2@NumberFormatting@Globalization@Windows@winrt@@@Z
    void ValidateNumberFormatter(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@NumberBox@@QEAANXZ
    double Value();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@NumberBox@@QEAAXN@Z
    void Value(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NumberBox@@UEAA@XZ
    virtual ~NumberBox();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoerceValue@NumberBox@@AEAAXXZ
    void CoerceValue();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegionalSettingsAwareDecimalFormatter@NumberBox@@AEAA?AUDecimalFormatter@NumberFormatting@Globalization@Windows@winrt@@XZ
    WindissectOpaque GetRegionalSettingsAwareDecimalFormatter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInBounds@NumberBox@@AEAA_NN@Z
    bool IsInBounds(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveCaretToTextEnd@NumberBox@@AEAAXXZ
    void MoveCaretToTextEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutomationPropertiesNamePropertyChanged@NumberBox@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnAutomationPropertiesNamePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@Xaml@UI@45@@Z
    void OnIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberBoxGotFocus@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnNumberBoxGotFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberBoxKeyDown@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnNumberBoxKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberBoxKeyUp@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnNumberBoxKeyUp(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberBoxLostFocus@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnNumberBoxLostFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberBoxScroll@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnNumberBoxScroll(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpinDownClick@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnSpinDownClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpinUpClick@NumberBox@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnSpinUpClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReevaluateForwardedUIAName@NumberBox@@AEAAXXZ
    void ReevaluateForwardedUIAName();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDefaultInputScope@NumberBox@@AEAAXXZ
    void SetDefaultInputScope();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StepValue@NumberBox@@AEAAXN@Z
    void StepValue(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderPresenterState@NumberBox@@AEAAXXZ
    void UpdateHeaderPresenterState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpinButtonEnabled@NumberBox@@AEAAXXZ
    void UpdateSpinButtonEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSpinButtonPlacement@NumberBox@@AEAAXXZ
    void UpdateSpinButtonPlacement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTextToValue@NumberBox@@AEAAXXZ
    void UpdateTextToValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateValueToText@NumberBox@@AEAAXXZ
    void UpdateValueToText();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForIsEnabledChange@NumberBox@@AEAAXXZ
    void UpdateVisualStateForIsEnabledChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateInput@NumberBox@@AEAAXXZ
    void ValidateInput();
};
