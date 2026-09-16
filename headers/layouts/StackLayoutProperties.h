#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class StackLayoutProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableVirtualization@StackLayoutProperties@@QEAAX_N@Z
    void DisableVirtualization(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DisableVirtualization@StackLayoutProperties@@QEAA_NXZ
    bool DisableVirtualization();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@StackLayoutProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisableVirtualizationPropertyChanged@StackLayoutProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnDisableVirtualizationPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationPropertyChanged@StackLayoutProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnOrientationPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSpacingPropertyChanged@StackLayoutProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnSpacingPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Orientation@StackLayoutProperties@@QEAAXAEBW40Controls@Xaml@UI@Windows@winrt@@@Z
    void Orientation(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Spacing@StackLayoutProperties@@QEAANXZ
    double Spacing();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Spacing@StackLayoutProperties@@QEAAXN@Z
    void Spacing(double);
};
