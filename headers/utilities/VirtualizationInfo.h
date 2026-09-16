#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 6 member(s).
class VirtualizationInfo {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRealized@VirtualizationInfo@@QEBA_NXZ
    bool IsRealized() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemovePin@VirtualizationInfo@@QEAAIXZ
    unsigned int RemovePin();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePhasingInfo@VirtualizationInfo@@QEAAXHAEBUIInspectable@Foundation@Windows@winrt@@AEBUIDataTemplateComponent@Markup@Xaml@UI@45@@Z
    void UpdatePhasingInfo(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1VirtualizationInfo@@UEAA@XZ
    virtual ~VirtualizationInfo();
};
