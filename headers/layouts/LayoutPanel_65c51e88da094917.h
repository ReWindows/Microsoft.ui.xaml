#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 12 member(s).
class LayoutPanel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@LayoutPanel@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0LayoutPanel@@QEAA@XZ
    LayoutPanel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@LayoutPanel@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@LayoutPanel@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1LayoutPanel@@UEAA@XZ
    virtual ~LayoutPanel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrangeForLayout@LayoutPanel@@AEAAXAEBULayout@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void InvalidateArrangeForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasureForLayout@LayoutPanel@@AEAAXAEBULayout@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void InvalidateMeasureForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@LayoutPanel@@AEAAXAEBULayout@Controls@Xaml@UI@Microsoft@winrt@@0@Z
    void OnLayoutChanged(WindissectOpaque const &, WindissectOpaque const &);
};
