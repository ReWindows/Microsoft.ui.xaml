#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class AutoSuggestBoxHelper {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@AutoSuggestBoxHelper@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeepInteriorCornersSquarePropertyChanged@AutoSuggestBoxHelper@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnKeepInteriorCornersSquarePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsPopupOpenDown@AutoSuggestBoxHelper@@CA_NAEBUAutoSuggestBox@Controls@Xaml@UI@Windows@winrt@@@Z
    static bool IsPopupOpenDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoSuggestBoxLoaded@AutoSuggestBoxHelper@@CAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    static void OnAutoSuggestBoxLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCornerRadius@AutoSuggestBoxHelper@@CAXAEBUAutoSuggestBox@Controls@Xaml@UI@Windows@winrt@@_N@Z
    static void UpdateCornerRadius(WindissectOpaque const &, bool);
};
