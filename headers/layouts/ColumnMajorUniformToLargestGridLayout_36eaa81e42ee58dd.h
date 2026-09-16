#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class ColumnMajorUniformToLargestGridLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ColumnMajorUniformToLargestGridLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ColumnMajorUniformToLargestGridLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUNonVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateGreaterThanZero@ColumnMajorUniformToLargestGridLayout@@SAXH@Z
    static void ValidateGreaterThanZero(int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateColumns@ColumnMajorUniformToLargestGridLayout@@AEAAHHMM@Z
    int CalculateColumns(int, float, float);
};
