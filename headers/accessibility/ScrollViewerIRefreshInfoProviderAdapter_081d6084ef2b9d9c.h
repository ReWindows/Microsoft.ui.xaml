#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 21 member(s).
class ScrollViewerIRefreshInfoProviderAdapter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Adapt@ScrollViewerIRefreshInfoProviderAdapter@@QEAA?AUIRefreshInfoProvider@Controls@Private@UI@Microsoft@winrt@@AEBUScrollViewer@3Xaml@5Windows@7@AEBUSize@Foundation@Windows@7@@Z
    WindissectOpaque Adapt(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdaptFromTree@ScrollViewerIRefreshInfoProviderAdapter@@QEAA?AUIRefreshInfoProvider@Controls@Private@UI@Microsoft@winrt@@AEBUUIElement@Xaml@5Windows@7@AEBUSize@Foundation@Windows@7@@Z
    WindissectOpaque AdaptFromTree(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollViewerIRefreshInfoProviderAdapter@@QEAA@AEBW4RefreshPullDirection@Controls@Xaml@UI@Microsoft@winrt@@AEBUIAdapterAnimationHandler@2Private@456@@Z
    ScrollViewerIRefreshInfoProviderAdapter(int const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAnimations@ScrollViewerIRefreshInfoProviderAdapter@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void SetAnimations(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollViewerIRefreshInfoProviderAdapter@@UEAA@XZ
    virtual ~ScrollViewerIRefreshInfoProviderAdapter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AdaptFromTreeRecursiveHelper@ScrollViewerIRefreshInfoProviderAdapter@@AEAA?AUScrollViewer@Controls@Xaml@UI@Windows@winrt@@AEBUDependencyObject@4567@H@Z
    WindissectOpaque AdaptFromTreeRecursiveHelper(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupIRefreshInfoProvider@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXXZ
    void CleanupIRefreshInfoProvider();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CleanupScrollViewer@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXXZ
    void CleanupScrollViewer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollContent@ScrollViewerIRefreshInfoProviderAdapter@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetScrollContent();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOrientationVertical@ScrollViewerIRefreshInfoProviderAdapter@@AEAA_NXZ
    bool IsOrientationVertical();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsWithinOffsetThreshold@ScrollViewerIRefreshInfoProviderAdapter@@AEAA_NXZ
    bool IsWithinOffsetThreshold();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MakeInteractionSource@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void MakeInteractionSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshCompleted@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnRefreshCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRefreshStarted@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnRefreshStarted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerDirectManipulationCompleted@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollViewerDirectManipulationCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerLoaded@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollViewerLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanging@ScrollViewerIRefreshInfoProviderAdapter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollViewerViewChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnScrollViewerViewChanging(WindissectOpaque const &, WindissectOpaque const &);
};
