#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 11 member(s).
class Expander {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Expander@@QEAA@XZ
    Expander();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@Expander@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@Expander@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Expander@@UEAA@XZ
    virtual ~Expander();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentSizeChanged@Expander@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnContentSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpandDirection@Expander@@AEAAX_N@Z
    void UpdateExpandDirection(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpandState@Expander@@AEAAX_N@Z
    void UpdateExpandState(bool);
};
