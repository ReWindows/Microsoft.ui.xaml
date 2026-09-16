#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 3 member(s).
class Awaitable {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0Awaitable@@QEAA@XZ
    Awaitable();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1Awaitable@@QEAA@XZ
    ~Awaitable();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CoroutineCompletedCallback@Awaitable@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@K@Z
    static void CoroutineCompletedCallback(_TP_CALLBACK_INSTANCE *, void *, _TP_WAIT *, unsigned long);
};
