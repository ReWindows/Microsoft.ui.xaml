#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 98 member(s).
class ScrollView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScrollVelocity@ScrollView@@QEAAHUfloat2@Numerics@Foundation@Windows@winrt@@U?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@456@@Z
    int AddScrollVelocity(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddZoomVelocity@ScrollView@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IReference@M@345@@Z
    int AddZoomVelocity(float, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CurrentAnchor@ScrollView@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque CurrentAnchor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentHeight@ScrollView@@QEAANXZ
    double ExtentHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExtentWidth@ScrollView@@QEAANXZ
    double ExtentWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalOffset@ScrollView@@QEAANXZ
    double HorizontalOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoredInputKinds@ScrollView@@QEAA?AW4ScrollingInputKinds@Controls@Xaml@UI@Microsoft@winrt@@XZ
    int IgnoredInputKinds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoredInputKinds@ScrollView@@QEAAXAEBW4ScrollingInputKinds@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void IgnoredInputKinds(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@ScrollView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@ScrollView@@QEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@ScrollView@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ScrollView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnchorCandidate@ScrollView@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void RegisterAnchorCandidate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollBy@ScrollView@@QEAAHNN@Z
    int ScrollBy(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollBy@ScrollView@@QEAAHNNAEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int ScrollBy(double, double, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTo@ScrollView@@QEAAHNN@Z
    int ScrollTo(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTo@ScrollView@@QEAAHNNAEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int ScrollTo(double, double, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollView@@QEAA@XZ
    ScrollView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollableHeight@ScrollView@@QEAANXZ
    double ScrollableHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollableWidth@ScrollView@@QEAANXZ
    double ScrollableWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnchorCandidate@ScrollView@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void UnregisterAnchorCandidate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalOffset@ScrollView@@QEAANXZ
    double VerticalOffset();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewportHeight@ScrollView@@QEAANXZ
    double ViewportHeight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ViewportWidth@ScrollView@@QEAANXZ
    double ViewportWidth();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomBy@ScrollView@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z
    int ZoomBy(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomBy@ScrollView@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBUScrollingZoomOptions@Controls@Xaml@UI@Microsoft@5@@Z
    int ZoomBy(float, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomFactor@ScrollView@@QEAAMXZ
    float ZoomFactor();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomTo@ScrollView@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z
    int ZoomTo(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomTo@ScrollView@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBUScrollingZoomOptions@Controls@Xaml@UI@Microsoft@5@@Z
    int ZoomTo(float, WindissectOpaque, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollView@@UEAA@XZ
    virtual ~ScrollView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAllScrollControllersCollapsed@ScrollView@@AEBA_NXZ
    bool AreAllScrollControllersCollapsed() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreBothScrollControllersVisible@ScrollView@@AEBA_NXZ
    bool AreBothScrollControllersVisible() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreScrollControllersAutoHiding@ScrollView@@AEAA_NXZ
    bool AreScrollControllersAutoHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScrollHorizontallyInDirection@ScrollView@@AEAA_N_N@Z
    bool CanScrollHorizontallyInDirection(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScrollInDirection@ScrollView@@AEAA_NW4FocusNavigationDirection@Input@Xaml@UI@Windows@winrt@@@Z
    bool CanScrollInDirection(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CanScrollVerticallyInDirection@ScrollView@@AEAA_N_N@Z
    bool CanScrollVerticallyInDirection(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoScroll@ScrollView@@AEAAXNW4Orientation@Controls@Xaml@UI@Windows@winrt@@@Z
    void DoScroll(double, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoScrollForKey@ScrollView@@AEAA_NW4VirtualKey@System@Windows@winrt@@N@Z
    bool DoScrollForKey(int, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextFocusCandidate@ScrollView@@AEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@W4FocusNavigationDirection@Input@3456@_N@Z
    WindissectOpaque GetNextFocusCandidate(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeyDownForStandardScroll@ScrollView@@AEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void HandleKeyDownForStandardScroll(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeyDownForXYNavigation@ScrollView@@AEAAXUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void HandleKeyDownForXYNavigation(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideIndicators@ScrollView@@AEAAX_N@Z
    void HideIndicators(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideIndicatorsAfterDelay@ScrollView@@AEAAXXZ
    void HideIndicatorsAfterDelay();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookCompositionTargetRendering@ScrollView@@AEAAXXZ
    void HookCompositionTargetRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookHorizontalScrollControllerEvents@ScrollView@@AEAAXXZ
    void HookHorizontalScrollControllerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollPresenterEvents@ScrollView@@AEAAXXZ
    void HookScrollPresenterEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollViewEvents@ScrollView@@AEAAXXZ
    void HookScrollViewEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookUISettingsEvent@ScrollView@@AEAAXXZ
    void HookUISettingsEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookVerticalScrollControllerEvents@ScrollView@@AEAAXXZ
    void HookVerticalScrollControllerEvents();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputKindIgnored@ScrollView@@AEAA_NAEBW4ScrollingInputKinds@Controls@Xaml@UI@Microsoft@winrt@@@Z
    bool IsInputKindIgnored(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoHideScrollBarsChanged@ScrollView@@AEAAXAEBUUISettings@ViewManagement@UI@Windows@winrt@@AEBUUISettingsAutoHideScrollBarsChangedEventArgs@3456@@Z
    void OnAutoHideScrollBarsChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTargetRendering@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnCompositionTargetRendering(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHideIndicatorsTimerTick@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnHideIndicatorsTimerTick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalScrollControllerPointerEntered@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnHorizontalScrollControllerPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalScrollControllerPointerExited@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnHorizontalScrollControllerPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIndicatorStateStoryboardCompleted@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnIndicatorStateStoryboardCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNoIndicatorStateStoryboardCompleted@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnNoIndicatorStateStoryboardCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollAnimationStarting@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollingScrollAnimationStartingEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnScrollAnimationStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollControllerInteractionInfoChanged@ScrollView@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@8@@Z
    void OnScrollControllerInteractionInfoChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterAnchorRequested@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollingAnchorRequestedEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnScrollPresenterAnchorRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterBringingIntoView@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollingBringingIntoViewEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnScrollPresenterBringingIntoView(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterExtentChanged@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollPresenterExtentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterScrollCompleted@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollingScrollCompletedEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnScrollPresenterScrollCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterStateChanged@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollPresenterStateChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterViewChanged@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollPresenterViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterZoomCompleted@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollingZoomCompletedEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnScrollPresenterZoomCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewGettingFocus@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUGettingFocusEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewIsEnabledChanged@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewPointerCanceled@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewPointerCanceled(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewPointerEntered@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewPointerExited@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewPointerMoved@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewPointerMoved(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewPointerPressed@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewPointerReleased@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnScrollViewPointerReleased(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewUnloaded@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalScrollControllerPointerEntered@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnVerticalScrollControllerPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalScrollControllerPointerExited@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnVerticalScrollControllerPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomAnimationStarting@ScrollView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollingZoomAnimationStartingEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnZoomAnimationStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetHideIndicatorsTimer@ScrollView@@AEAAX_N0@Z
    void ResetHideIndicatorsTimer(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookHorizontalScrollControllerEvents@ScrollView@@AEAAXXZ
    void UnhookHorizontalScrollControllerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollPresenterEvents@ScrollView@@AEAAX_N@Z
    void UnhookScrollPresenterEvents(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollViewEvents@ScrollView@@AEAAXXZ
    void UnhookScrollViewEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookVerticalScrollControllerEvents@ScrollView@@AEAAXXZ
    void UnhookVerticalScrollControllerEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHorizontalScrollController@ScrollView@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUIUIElement@56Windows@8@@Z
    void UpdateHorizontalScrollController(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllersAutoHiding@ScrollView@@AEAAX_N@Z
    void UpdateScrollControllersAutoHiding(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllersSeparator@ScrollView@@AEAAXAEBUIUIElement@Xaml@UI@Windows@winrt@@@Z
    void UpdateScrollControllersSeparator(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllersSeparatorVisualState@ScrollView@@AEAAX_N0@Z
    void UpdateScrollControllersSeparatorVisualState(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllersVisibility@ScrollView@@AEAAX_N0@Z
    void UpdateScrollControllersVisibility(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllersVisualState@ScrollView@@AEAAX_N00@Z
    void UpdateScrollControllersVisualState(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollPresenter@ScrollView@@AEAAXAEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateScrollPresenter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollPresenterHorizontalScrollController@ScrollView@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateScrollPresenterHorizontalScrollController(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollPresenterVerticalScrollController@ScrollView@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateScrollPresenterVerticalScrollController(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVerticalScrollController@ScrollView@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUIUIElement@56Windows@8@@Z
    void UpdateVerticalScrollController(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStates@ScrollView@@AEAAX_N00000@Z
    void UpdateVisualStates(bool, bool, bool, bool, bool, bool);
};
