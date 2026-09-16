#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class UniqueIdElementPool {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Add@UniqueIdElementPool@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void Add(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Remove@UniqueIdElementPool@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque Remove(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?begin@UniqueIdElementPool@@QEBA@XZ
    begin() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?end@UniqueIdElementPool@@QEBA@XZ
    end() const;
};
