#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class MUXControlsTestHooks {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLoggingLevelForInstance@MUXControlsTestHooks@@QEAAEAEBUIInspectable@Foundation@Windows@winrt@@@Z
    unsigned char GetLoggingLevelForInstance(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MUXControlsTestHooks@@QEAA@XZ
    MUXControlsTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetLoggingLevelForInstanceImpl@MUXControlsTestHooks@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@_N1@Z
    void SetLoggingLevelForInstanceImpl(WindissectOpaque const &, bool, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MUXControlsTestHooks@@UEAA@XZ
    virtual ~MUXControlsTestHooks();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureHooks@MUXControlsTestHooks@@CAXXZ
    static void EnsureHooks();
};
