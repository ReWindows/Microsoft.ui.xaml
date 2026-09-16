#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class ComboBoxHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@ComboBoxHelper@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeepInteriorCornersSquarePropertyChanged@ComboBoxHelper@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnKeepInteriorCornersSquarePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPopupOpenDown@ComboBoxHelper@@CA_NAEBUComboBox@Controls@Xaml@UI@Windows@winrt@@@Z
    static bool IsPopupOpenDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownClosed@ComboBoxHelper@@CAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    static void OnDropDownClosed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDropDownOpened@ComboBoxHelper@@CAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    static void OnDropDownOpened(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCornerRadius@ComboBoxHelper@@CAXAEBUComboBox@Controls@Xaml@UI@Windows@winrt@@_N@Z
    static void UpdateCornerRadius(WindissectOpaque const &, bool);
};
