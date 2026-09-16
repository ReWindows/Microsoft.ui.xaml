#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 8 member(s).
class InteractionTrackerAsyncOperation {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsCompleted@InteractionTrackerAsyncOperation@@QEAAX_N@Z
    void SetIsCompleted(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsDelayed@InteractionTrackerAsyncOperation@@QEAAX_N@Z
    void SetIsDelayed(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetIsScrollControllerRequest@InteractionTrackerAsyncOperation@@QEAAX_N@Z
    void SetIsScrollControllerRequest(bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRequestId@InteractionTrackerAsyncOperation@@QEAAXH@Z
    void SetRequestId(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTicksCountdown@InteractionTrackerAsyncOperation@@QEAAXH@Z
    void SetTicksCountdown(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickNonAnimatedOperation@InteractionTrackerAsyncOperation@@QEAA_NXZ
    bool TickNonAnimatedOperation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TickQueuedOperation@InteractionTrackerAsyncOperation@@QEAA_NXZ
    bool TickQueuedOperation();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1InteractionTrackerAsyncOperation@@QEAA@XZ
    ~InteractionTrackerAsyncOperation();
};
