#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 10 member(s).
class RadioMenuFlyoutItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAreCheckStatesEnabledPropertyChanged@RadioMenuFlyoutItem@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnAreCheckStatesEnabledPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RadioMenuFlyoutItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadioMenuFlyoutItem@@QEAA@XZ
    RadioMenuFlyoutItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadioMenuFlyoutItem@@UEAA@XZ
    virtual ~RadioMenuFlyoutItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInternalIsCheckedChanged@RadioMenuFlyoutItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnInternalIsCheckedChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCheckedItemInGroup@RadioMenuFlyoutItem@@AEAAXXZ
    void UpdateCheckedItemInGroup();
};
