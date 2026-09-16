#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class UniformGridLayoutState {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureElementSize@UniformGridLayoutState@@QEAAXUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@NNAEBW4UniformGridLayoutItemsStretch@789Microsoft@5@AEBW4Orientation@78945@NNI@Z
    void EnsureElementSize(WindissectOpaque, WindissectOpaque const &, double, double, int const &, int const &, double, double, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContext@UniformGridLayoutState@@QEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@PEAVIFlowLayoutAlgorithmDelegates@@@Z
    void InitializeForContext(WindissectOpaque const &, IFlowLayoutAlgorithmDelegates *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateAvailableSize@UniformGridLayoutState@@AEAA?AUSize@Foundation@Windows@winrt@@U2345@W4Orientation@Controls@Xaml@UI@45@AEBW4UniformGridLayoutItemsStretch@789Microsoft@5@INNNN@Z
    WindissectOpaque CalculateAvailableSize(WindissectOpaque, int, int const &, unsigned int, double, double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSize@UniformGridLayoutState@@AEAAXAEBUSize@Foundation@Windows@winrt@@NNU2345@AEBW4UniformGridLayoutItemsStretch@Controls@Xaml@UI@Microsoft@5@AEBW4Orientation@78945@NNI@Z
    void SetSize(WindissectOpaque const &, double, double, WindissectOpaque, int const &, int const &, double, double, unsigned int);
};
