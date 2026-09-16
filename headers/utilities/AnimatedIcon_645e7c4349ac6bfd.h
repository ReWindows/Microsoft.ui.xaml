#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 25 member(s).
class AnimatedIcon {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimatedIcon@@QEAA@XZ
    AnimatedIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@AnimatedIcon@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@AnimatedIcon@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAncestorAnimatedIconStatePropertyChanged@AnimatedIcon@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnAncestorAnimatedIconStatePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatedIconStatePropertyChanged@AnimatedIcon@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnAnimatedIconStatePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@AnimatedIcon@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdatedAfterStateChanged@AnimatedIcon@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnLayoutUpdatedAfterStateChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@AnimatedIcon@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnStatePropertyChanged@AnimatedIcon@@QEAAXXZ
    void OnStatePropertyChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimatedIcon@@UEAA@XZ
    virtual ~AnimatedIcon();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConstructVisual@AnimatedIcon@@AEAA?AUVisual@Composition@UI@Windows@winrt@@XZ
    WindissectOpaque ConstructVisual();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertVisual@AnimatedIcon@@AEAA_NUVisual@Composition@UI@Windows@winrt@@@Z
    bool InsertVisual(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationCompleted@AnimatedIcon@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUCompositionBatchCompletedEventArgs@Composition@UI@45@@Z
    void OnAnimationCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlowDirectionPropertyChanged@AnimatedIcon@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFlowDirectionPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundBrushColorPropertyChanged@AnimatedIcon@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnForegroundBrushColorPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundPropertyChanged@AnimatedIcon@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnForegroundPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetRootPanelChildToFallbackIcon@AnimatedIcon@@AEAAXXZ
    void SetRootPanelChildToFallbackIcon();
    // Category: Method | Source: PDB Internal
    // Symbol: ?TransitionAndUpdateStates@AnimatedIcon@@AEAAXAEBUhstring@winrt@@0M@Z
    void TransitionAndUpdateStates(WindissectOpaque const &, WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetForegroundProperty@AnimatedIcon@@AEAAXAEBUIAnimatedVisualSource2@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void TrySetForegroundProperty(WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySetForegroundProperty@AnimatedIcon@@AEAAXUColor@UI@Windows@winrt@@AEBUIAnimatedVisualSource2@Controls@Xaml@3Microsoft@5@@Z
    void TrySetForegroundProperty(WindissectOpaque, WindissectOpaque &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMirrorTransform@AnimatedIcon@@AEAAXXZ
    void UpdateMirrorTransform();
};
