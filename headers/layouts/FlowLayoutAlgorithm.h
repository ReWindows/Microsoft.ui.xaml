#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 8 member(s).
class FlowLayoutAlgorithm {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0FlowLayoutAlgorithm@@QEAA@PEBUITrackerHandleManager@@@Z
    FlowLayoutAlgorithm(ITrackerHandleManager const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@FlowLayoutAlgorithm@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@PEAVIFlowLayoutAlgorithmDelegates@@@Z
    void InitializeForContext(WindissectOpaque const &, IFlowLayoutAlgorithmDelegates *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureElement@FlowLayoutAlgorithm@@QEAA?AUSize@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@HAEBU2345@AEBUVirtualizingLayoutContext@Controls@78Microsoft@5@@Z
    WindissectOpaque MeasureElement(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContext@FlowLayoutAlgorithm@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UninitializeForContext(WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsReflowRequired@FlowLayoutAlgorithm@@AEBA_NXZ
    bool IsReflowRequired() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsVirtualizingContext@FlowLayoutAlgorithm@@AEAA_NXZ
    bool IsVirtualizingContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeAnchor@FlowLayoutAlgorithm@@AEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@HAEBUSize@Foundation@Windows@7@@Z
    void MakeAnchor(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldContinueFillingUpSpace@FlowLayoutAlgorithm@@AEAA_NHW4GenerateDirection@1@@Z
    bool ShouldContinueFillingUpSpace(int, int);
};
