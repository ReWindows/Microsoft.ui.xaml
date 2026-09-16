#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
namespace RecyclePool {
class ElementInfo {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ElementInfo@RecyclePool@@QEAA@PEBUITrackerHandleManager@@AEBUUIElement@Xaml@UI@Windows@winrt@@AEBUPanel@Controls@4567@@Z
    ElementInfo(ITrackerHandleManager const *, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Owner@ElementInfo@RecyclePool@@QEBA?AUPanel@Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Owner() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ElementInfo@RecyclePool@@QEAA@XZ
    ~ElementInfo();
};
} // namespace RecyclePool
