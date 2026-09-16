#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 24 member(s).
class StackLayout {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetAnchorForRealizationRect@StackLayout@@UEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Microsoft@winrt@@AEBUSize@Foundation@Windows@7@AEBUVirtualizingLayoutContext@34567@@Z
    virtual WindissectOpaque Algorithm_GetAnchorForRealizationRect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetAnchorForTargetElement@StackLayout@@UEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Microsoft@winrt@@HAEBUSize@Foundation@Windows@7@AEBUVirtualizingLayoutContext@34567@@Z
    virtual WindissectOpaque Algorithm_GetAnchorForTargetElement(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetExtent@StackLayout@@UEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBUUIElement@9UI@45@HAEBU2345@2H3@Z
    virtual WindissectOpaque Algorithm_GetExtent(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetMeasureSize@StackLayout@@UEAA?AUSize@Foundation@Windows@winrt@@HAEBU2345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@@Z
    virtual WindissectOpaque Algorithm_GetMeasureSize(int, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_GetProvisionalArrangeSize@StackLayout@@UEAA?AUSize@Foundation@Windows@winrt@@HAEBU2345@0AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@@Z
    virtual WindissectOpaque Algorithm_GetProvisionalArrangeSize(int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_OnElementMeasured@StackLayout@@UEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@HAEBUSize@Foundation@56@111AEBUVirtualizingLayoutContext@Controls@34Microsoft@6@@Z
    virtual void Algorithm_OnElementMeasured(WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_OnLineArranged@StackLayout@@UEAAXHHNAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void Algorithm_OnLineArranged(int, int, double, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Algorithm_ShouldBreakLine@StackLayout@@UEAA_NHN@Z
    virtual bool Algorithm_ShouldBreakLine(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@StackLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU2345@@Z
    virtual WindissectOpaque ArrangeOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorForRealizationRect@StackLayout@@QEAA?AUFlowLayoutAnchorInfo@Controls@Xaml@UI@Microsoft@winrt@@AEBUSize@Foundation@Windows@7@AEBUVirtualizingLayoutContext@34567@@Z
    WindissectOpaque GetAnchorForRealizationRect(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtent@StackLayout@@QEAA?AURect@Foundation@Windows@winrt@@AEBUSize@345@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBUUIElement@9UI@45@HAEBU2345@2H3@Z
    WindissectOpaque GetExtent(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &, WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeForContextCore@StackLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void InitializeForContextCore(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@StackLayout@@UEAA?AUSize@Foundation@Windows@winrt@@AEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU2345@@Z
    virtual WindissectOpaque MeasureOverride(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChangedCore@StackLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@AEBUNotifyCollectionChangedEventArgs@Interop@45Windows@7@@Z
    virtual void OnItemsChangedCore(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@StackLayout@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0StackLayout@@QEAA@XZ
    StackLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UninitializeForContextCore@StackLayout@@UEAAXAEBUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@@Z
    virtual void UninitializeForContextCore(WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAsStackState@StackLayout@@AEAA?AU?$com_ptr@VStackLayoutState@@@winrt@@AEBUIInspectable@Foundation@Windows@3@@Z
    WindissectOpaque GetAsStackState(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAverageElementSize@StackLayout@@AEAANUSize@Foundation@Windows@winrt@@UVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@5@AEBU?$com_ptr@VStackLayoutState@@@5@@Z
    double GetAverageElementSize(WindissectOpaque, WindissectOpaque, WindissectOpaque const &);
};
