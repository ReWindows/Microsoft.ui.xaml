#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class ElementInfo {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Element@ElementInfo@@QEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Element() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementInfo@@QEAA@AEBUUIElement@Xaml@UI@Windows@winrt@@AEBU?$com_ptr@VVirtualizationInfo@@@5@@Z
    ElementInfo(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VirtInfo@ElementInfo@@QEBA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@XZ
    WindissectOpaque VirtInfo() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementInfo@@QEAA@XZ
    ~ElementInfo();
};
