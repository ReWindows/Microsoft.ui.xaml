#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class IconSource {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateIconElement@IconSource@@QEAA?AUIconElement@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque CreateIconElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIconElementPropertyCore@IconSource@@UEAA?AUDependencyProperty@Xaml@UI@Windows@winrt@@U23456@@Z
    virtual WindissectOpaque GetIconElementPropertyCore(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0IconSource@@QEAA@XZ
    IconSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@IconSource@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
};
