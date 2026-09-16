#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 24 member(s).
class RatingControlProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Caption@RatingControlProperties@@QEAA?AUhstring@winrt@@XZ
    WindissectOpaque Caption();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RatingControlProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitialSetValue@RatingControlProperties@@QEAAHXZ
    int InitialSetValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitialSetValue@RatingControlProperties@@QEAAXH@Z
    void InitialSetValue(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsClearEnabled@RatingControlProperties@@QEAA_NXZ
    bool IsClearEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReadOnly@RatingControlProperties@@QEAA_NXZ
    bool IsReadOnly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemInfo@RatingControlProperties@@QEAA?AURatingItemInfo@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque ItemInfo();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemInfo@RatingControlProperties@@QEAAXAEBURatingItemInfo@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void ItemInfo(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxRating@RatingControlProperties@@QEAAHXZ
    int MaxRating();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MaxRating@RatingControlProperties@@QEAAXH@Z
    void MaxRating(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCaptionPropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnCaptionPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnInitialSetValuePropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnInitialSetValuePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsClearEnabledPropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsClearEnabledPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsReadOnlyPropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnIsReadOnlyPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemInfoPropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnItemInfoPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaxRatingPropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnMaxRatingPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPlaceholderValuePropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPlaceholderValuePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnValuePropertyChanged@RatingControlProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnValuePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceholderValue@RatingControlProperties@@QEAANXZ
    double PlaceholderValue();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlaceholderValue@RatingControlProperties@@QEAAXN@Z
    void PlaceholderValue(double);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RatingControlProperties@@QEAA@XZ
    RatingControlProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@RatingControlProperties@@QEAANXZ
    double Value();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Value@RatingControlProperties@@QEAAXN@Z
    void Value(double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RatingControlProperties@@QEAA@XZ
    ~RatingControlProperties();
};
