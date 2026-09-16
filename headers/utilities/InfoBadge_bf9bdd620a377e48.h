#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class InfoBadge {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0InfoBadge@@QEAA@XZ
    InfoBadge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@InfoBadge@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InfoBadge@@UEAA@XZ
    virtual ~InfoBadge();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayKindPropertiesChanged@InfoBadge@@AEAAXXZ
    void OnDisplayKindPropertiesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@InfoBadge@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
};
