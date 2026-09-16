#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 187 member(s).
class ScrollPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScrollVelocity@ScrollPresenter@@QEAAHUfloat2@Numerics@Foundation@Windows@winrt@@U?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@456@@Z
    int AddScrollVelocity(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddZoomVelocity@ScrollPresenter@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IReference@M@345@@Z
    int AddZoomVelocity(float, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnchorElement@ScrollPresenter@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque AnchorElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ScrollPresenter@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CustomAnimationStateEntered@ScrollPresenter@@QEAAXAEBUInteractionTrackerCustomAnimationStateEnteredArgs@Interactions@Composition@UI@Windows@winrt@@@Z
    void CustomAnimationStateEntered(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangeRenderSizesDelta@ScrollPresenter@@QEAA?AUfloat2@Numerics@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetArrangeRenderSizesDelta();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConsolidatedScrollSnapPoints@ScrollPresenter@@QEAA?AU?$IVector@UScrollSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@W4ScrollPresenterDimension@1@@Z
    WindissectOpaque GetConsolidatedScrollSnapPoints(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetConsolidatedZoomSnapPoints@ScrollPresenter@@QEAA?AU?$IVector@UZoomSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetConsolidatedZoomSnapPoints();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxPosition@ScrollPresenter@@QEAA?AUfloat2@Numerics@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetMaxPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinPosition@ScrollPresenter@@QEAA?AUfloat2@Numerics@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetMinPosition();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeViewport@ScrollPresenter@@QEAA?AURect@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@@Z
    WindissectOpaque GetRelativeViewport(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalScrollController@ScrollPresenter@@QEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void HorizontalScrollController(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HorizontalSnapPoints@ScrollPresenter@@QEAA?AU?$IVector@UScrollSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque HorizontalSnapPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IdleStateEntered@ScrollPresenter@@QEAAXAEBUInteractionTrackerIdleStateEnteredArgs@Interactions@Composition@UI@Windows@winrt@@@Z
    void IdleStateEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnoredInputKinds@ScrollPresenter@@QEAA?AW4ScrollingInputKinds@Controls@Xaml@UI@Microsoft@winrt@@XZ
    int IgnoredInputKinds();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InertiaStateEntered@ScrollPresenter@@QEAAXAEBUInteractionTrackerInertiaStateEnteredArgs@Interactions@Composition@UI@Windows@winrt@@@Z
    void InertiaStateEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractingStateEntered@ScrollPresenter@@QEAAXAEBUInteractionTrackerInteractingStateEnteredArgs@Interactions@Composition@UI@Windows@winrt@@@Z
    void InteractingStateEntered(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnchorRatioValid@ScrollPresenter@@SA_NN@Z
    static bool IsAnchorRatioValid(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementValidAnchor@ScrollPresenter@@QEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    bool IsElementValidAnchor(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineDown@ScrollPresenter@@QEAAXXZ
    void LineDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineLeft@ScrollPresenter@@QEAAXXZ
    void LineLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineRight@ScrollPresenter@@QEAAXXZ
    void LineRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LineUp@ScrollPresenter@@QEAAXXZ
    void LineUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ScrollPresenter@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentPropertyChanged@ScrollPresenter@@QEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnContentPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ScrollPresenter@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ScrollPresenter@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageDown@ScrollPresenter@@QEAAXXZ
    void PageDown();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageLeft@ScrollPresenter@@QEAAXXZ
    void PageLeft();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageRight@ScrollPresenter@@QEAAXXZ
    void PageRight();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PageUp@ScrollPresenter@@QEAAXXZ
    void PageUp();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnchorCandidate@ScrollPresenter@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void RegisterAnchorCandidate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestIgnored@ScrollPresenter@@QEAAXAEBUInteractionTrackerRequestIgnoredArgs@Interactions@Composition@UI@Windows@winrt@@@Z
    void RequestIgnored(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollBy@ScrollPresenter@@QEAAHNN@Z
    int ScrollBy(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollBy@ScrollPresenter@@QEAAHNNAEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int ScrollBy(double, double, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollPresenter@@QEAA@XZ
    ScrollPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTo@ScrollPresenter@@QEAAHNN@Z
    int ScrollTo(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollTo@ScrollPresenter@@QEAAHNNAEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int ScrollTo(double, double, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToHorizontalOffset@ScrollPresenter@@QEAAXN@Z
    void ScrollToHorizontalOffset(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToOffsets@ScrollPresenter@@QEAAXNN@Z
    void ScrollToOffsets(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToVerticalOffset@ScrollPresenter@@QEAAXN@Z
    void ScrollToVerticalOffset(double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentLayoutOffsetX@ScrollPresenter@@QEAAXM@Z
    void SetContentLayoutOffsetX(float);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetContentLayoutOffsetY@ScrollPresenter@@QEAAXM@Z
    void SetContentLayoutOffsetY(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnchorCandidate@ScrollPresenter@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void UnregisterAnchorCandidate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateAnchorRatio@ScrollPresenter@@SAXN@Z
    static void ValidateAnchorRatio(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValidateZoomFactoryBoundary@ScrollPresenter@@SAXN@Z
    static void ValidateZoomFactoryBoundary(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ValuesChanged@ScrollPresenter@@QEAAXAEBUInteractionTrackerValuesChangedArgs@Interactions@Composition@UI@Windows@winrt@@@Z
    void ValuesChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalScrollController@ScrollPresenter@@QEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void VerticalScrollController(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?VerticalSnapPoints@ScrollPresenter@@QEAA?AU?$IVector@UScrollSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque VerticalSnapPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomBy@ScrollPresenter@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z
    int ZoomBy(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomBy@ScrollPresenter@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBUScrollingZoomOptions@Controls@Xaml@UI@Microsoft@5@@Z
    int ZoomBy(float, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomSnapPoints@ScrollPresenter@@QEAA?AU?$IVector@UZoomSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque ZoomSnapPoints();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomTo@ScrollPresenter@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@Z
    int ZoomTo(float, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ZoomTo@ScrollPresenter@@QEAAHMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@AEBUScrollingZoomOptions@Controls@Xaml@UI@Microsoft@5@@Z
    int ZoomTo(float, WindissectOpaque, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollPresenter@@UEAA@XZ
    virtual ~ScrollPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeContent@ScrollPresenter@@AEAA?AUSize@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@AEBUThickness@7845@AEAURect@345@_N3@Z
    WindissectOpaque ArrangeContent(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOffsetsPrivate@ScrollPresenter@@AEAAXNNW4ScrollPresenterViewKind@@AEBUScrollingScrollOptions@Controls@Xaml@UI@Microsoft@winrt@@W4InteractionTrackerAsyncOperationTrigger@@HPEAH@Z
    void ChangeOffsetsPrivate(double, double, int, WindissectOpaque const &, int, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeOffsetsWithAdditionalVelocityPrivate@ScrollPresenter@@AEAAXUfloat2@Numerics@Foundation@Windows@winrt@@0U?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@456@W4InteractionTrackerAsyncOperationTrigger@@PEAH@Z
    void ChangeOffsetsWithAdditionalVelocityPrivate(WindissectOpaque, WindissectOpaque, WindissectOpaque, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeZoomFactorPrivate@ScrollPresenter@@AEAAXMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@W4ScrollPresenterViewKind@@AEBUScrollingZoomOptions@Controls@Xaml@UI@Microsoft@5@PEAH@Z
    void ChangeZoomFactorPrivate(float, WindissectOpaque, int, WindissectOpaque const &, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeZoomFactorWithAdditionalVelocityPrivate@ScrollPresenter@@AEAAXMMU?$IReference@Ufloat2@Numerics@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@U?$IReference@M@345@W4InteractionTrackerAsyncOperationTrigger@@PEAH@Z
    void ChangeZoomFactorWithAdditionalVelocityPrivate(float, float, WindissectOpaque, WindissectOpaque, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAnchorCandidates@ScrollPresenter@@AEAAXXZ
    void ClearAnchorCandidates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteDelayedOperations@ScrollPresenter@@AEAAXXZ
    void CompleteDelayedOperations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CompleteInteractionTrackerOperations@ScrollPresenter@@AEAAXHW4ScrollPresenterViewChangeResult@@00_N111@Z
    void CompleteInteractionTrackerOperations(int, int, int, int, bool, bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeAnchorPoint@ScrollPresenter@@AEAAXAEBURect@Foundation@Windows@winrt@@PEAN1@Z
    void ComputeAnchorPoint(WindissectOpaque const &, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeBringIntoViewTargetOffsets@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBW4ScrollingSnapPointsMode@Controls@34Microsoft@6@AEBUBringIntoViewRequestedEventArgs@3456@PEAN333PEAURect@Foundation@56@@Z
    void ComputeBringIntoViewTargetOffsets(WindissectOpaque const &, int const &, WindissectOpaque const &, double *, double *, double *, double *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeCenterPointerForMouseWheelZooming@ScrollPresenter@@AEBA?AUfloat2@Numerics@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@56@AEBUPoint@456@@Z
    WindissectOpaque ComputeCenterPointerForMouseWheelZooming(WindissectOpaque const &, WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeContentLayoutOffsetDelta@ScrollPresenter@@AEBAMW4ScrollPresenterDimension@1@M@Z
    float ComputeContentLayoutOffsetDelta(int, float) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeElementAnchorPoint@ScrollPresenter@@AEAAX_NPEAN1@Z
    void ComputeElementAnchorPoint(bool, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEndOfInertiaPosition@ScrollPresenter@@AEAA?AUfloat2@Numerics@Foundation@Windows@winrt@@XZ
    WindissectOpaque ComputeEndOfInertiaPosition();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeEndOfInertiaZoomFactor@ScrollPresenter@@AEBAMXZ
    float ComputeEndOfInertiaZoomFactor() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeMinMaxPositions@ScrollPresenter@@AEAAXMPEAUfloat2@Numerics@Foundation@Windows@winrt@@0@Z
    void ComputeMinMaxPositions(float, WindissectOpaque*, WindissectOpaque*);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputePositionFromOffsets@ScrollPresenter@@AEAA?AUfloat2@Numerics@Foundation@Windows@winrt@@NN@Z
    WindissectOpaque ComputePositionFromOffsets(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeViewportAnchorPoint@ScrollPresenter@@AEAAXNNPEAN0@Z
    void ComputeViewportAnchorPoint(double, double, double *, double *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeViewportToElementAnchorPointsDistance@ScrollPresenter@@AEAA?AUSize@Foundation@Windows@winrt@@NN_N@Z
    WindissectOpaque ComputeViewportToElementAnchorPointsDistance(double, double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeZoomedOffsetWithMinimalChange@ScrollPresenter@@CANNNNN@Z
    static double ComputeZoomedOffsetWithMinimalChange(double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureAnchorElementSelection@ScrollPresenter@@AEAAXXZ
    void EnsureAnchorElementSelection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureExpressionAnimationSources@ScrollPresenter@@AEAAXXZ
    void EnsureExpressionAnimationSources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInteractionTracker@ScrollPresenter@@AEAAXXZ
    void EnsureInteractionTracker();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsurePositionBoundariesExpressionAnimations@ScrollPresenter@@AEAAXXZ
    void EnsurePositionBoundariesExpressionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScrollControllerExpressionAnimationSources@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void EnsureScrollControllerExpressionAnimationSources(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScrollControllerVisualInteractionSource@ScrollPresenter@@AEAAXAEBUVisual@Composition@UI@Windows@winrt@@W4ScrollPresenterDimension@1@@Z
    void EnsureScrollControllerVisualInteractionSource(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureScrollPresenterVisualInteractionSource@ScrollPresenter@@AEAAXXZ
    void EnsureScrollPresenterVisualInteractionSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureTransformExpressionAnimations@ScrollPresenter@@AEAAXXZ
    void EnsureTransformExpressionAnimations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetArrangeRenderSizesDelta@ScrollPresenter@@AEBA?AUfloat2@Numerics@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@56@@Z
    WindissectOpaque GetArrangeRenderSizesDelta(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputedAnimationMode@ScrollPresenter@@CA?AW4ScrollingAnimationMode@Controls@Xaml@UI@Microsoft@winrt@@AEBW4234567@@Z
    static int GetComputedAnimationMode(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputedMaxHeight@ScrollPresenter@@AEBANNAEBUFrameworkElement@Xaml@UI@Windows@winrt@@@Z
    double GetComputedMaxHeight(double, WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetComputedMaxWidth@ScrollPresenter@@AEBANNAEBUFrameworkElement@Xaml@UI@Windows@winrt@@@Z
    double GetComputedMaxWidth(double, WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantBounds@ScrollPresenter@@CA?AURect@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@0AEBU2345@@Z
    static WindissectOpaque GetDescendantBounds(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescendantBounds@ScrollPresenter@@CA?AURect@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@0@Z
    static WindissectOpaque GetDescendantBounds(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetInteractionTrackerOperationsTicksCountdownForTrigger@ScrollPresenter@@AEBAHW4InteractionTrackerAsyncOperationTrigger@@@Z
    int GetInteractionTrackerOperationsTicksCountdownForTrigger(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxPositionExpression@ScrollPresenter@@AEBA?AUhstring@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetMaxPositionExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxPositionXExpression@ScrollPresenter@@AEBA?AUhstring@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetMaxPositionXExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMaxPositionYExpression@ScrollPresenter@@AEBA?AUhstring@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetMaxPositionYExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinPositionExpression@ScrollPresenter@@AEBA?AUhstring@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetMinPositionExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinPositionXExpression@ScrollPresenter@@AEBA?AUhstring@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetMinPositionXExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMinPositionYExpression@ScrollPresenter@@AEBA?AUhstring@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetMinPositionYExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMouseWheelAnticipatedOffsetsChange@ScrollPresenter@@AEBA?AUfloat2@Numerics@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetMouseWheelAnticipatedOffsetsChange() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMouseWheelAnticipatedZoomFactorChange@ScrollPresenter@@AEBAMXZ
    float GetMouseWheelAnticipatedZoomFactorChange() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPositionAnimation@ScrollPresenter@@AEAA?AUCompositionAnimation@Composition@UI@Windows@winrt@@NNW4InteractionTrackerAsyncOperationTrigger@@H@Z
    WindissectOpaque GetPositionAnimation(double, double, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomFactorAnimation@ScrollPresenter@@AEAA?AUCompositionAnimation@Composition@UI@Windows@winrt@@MAEBUfloat2@Numerics@Foundation@56@H@Z
    WindissectOpaque GetZoomFactorAnimation(float, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookCompositionTargetRendering@ScrollPresenter@@AEAAXXZ
    void HookCompositionTargetRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookContentPropertyChanged@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void HookContentPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookDpiChangedEvent@ScrollPresenter@@AEAAXXZ
    void HookDpiChangedEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookHorizontalScrollControllerEvents@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void HookHorizontalScrollControllerEvents(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollPresenterEvents@ScrollPresenter@@AEAAXXZ
    void HookScrollPresenterEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookVerticalScrollControllerEvents@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void HookVerticalScrollControllerEvents(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InterruptViewChangeWithAnimation@ScrollPresenter@@AEAA_NW4InteractionTrackerAsyncOperationType@@@Z
    bool InterruptViewChangeWithAnimation(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnchoring@ScrollPresenter@@AEAAXPEA_N000@Z
    void IsAnchoring(bool *, bool *, bool *, bool *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsElementValidAnchor@ScrollPresenter@@CA_NAEBUUIElement@Xaml@UI@Windows@winrt@@0@Z
    static bool IsElementValidAnchor(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInertiaFromImpulse@ScrollPresenter@@AEBA_NXZ
    bool IsInertiaFromImpulse() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInputKindIgnored@ScrollPresenter@@AEAA_NAEBW4ScrollingInputKinds@Controls@Xaml@UI@Microsoft@winrt@@@Z
    bool IsInputKindIgnored(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractionTrackerPointerWheelRedirectionEnabled@ScrollPresenter@@CA_NXZ
    static bool IsInteractionTrackerPointerWheelRedirectionEnabled();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLoadedAndSetUp@ScrollPresenter@@AEBA_NXZ
    bool IsLoadedAndSetUp() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBringIntoViewRequestedHandler@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUBringIntoViewRequestedEventArgs@Xaml@UI@45@@Z
    void OnBringIntoViewRequestedHandler(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTargetRendering@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnCompositionTargetRendering(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentLayoutOffsetChanged@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void OnContentLayoutOffsetChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentSizeChanged@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void OnContentSizeChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDpiChanged@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnDpiChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHorizontalSnapPointsVectorChanged@ScrollPresenter@@AEAAXAEBU?$IObservableVector@UScrollSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnHorizontalSnapPointsVectorChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerWheelChangedHandler@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerWheelChangedHandler(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollControllerAddScrollVelocityRequested@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUScrollControllerAddScrollVelocityRequestedEventArgs@345678@@Z
    void OnScrollControllerAddScrollVelocityRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollControllerInteractionInfoChanged@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@8@@Z
    void OnScrollControllerInteractionInfoChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollControllerInteractionRequested@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUScrollControllerInteractionRequestedEventArgs@345678@@Z
    void OnScrollControllerInteractionRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollControllerScrollByRequested@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUScrollControllerScrollByRequestedEventArgs@345678@@Z
    void OnScrollControllerScrollByRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollControllerScrollToRequested@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUScrollControllerScrollToRequestedEventArgs@345678@@Z
    void OnScrollControllerScrollToRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ScrollPresenter@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVerticalSnapPointsVectorChanged@ScrollPresenter@@AEAAXAEBU?$IObservableVector@UScrollSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnVerticalSnapPointsVectorChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnViewChanged@ScrollPresenter@@AEAAX_N0@Z
    void OnViewChanged(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnZoomSnapPointsVectorChanged@ScrollPresenter@@AEAAXAEBU?$IObservableVector@UZoomSnapPointBase@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@UIVectorChangedEventArgs@3456@@Z
    void OnZoomSnapPointsVectorChanged(WindissectOpaque const &, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessAnchorCandidate@ScrollPresenter@@AEBAXAEBUUIElement@Xaml@UI@Windows@winrt@@0AEBURect@Foundation@56@NNPEANPEAU23456@PEAU7856@@Z
    void ProcessAnchorCandidate(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, double, double, double *, WindissectOpaque *, WindissectOpaque *) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerWheelScroll@ScrollPresenter@@AEAAX_NHMMM@Z
    void ProcessPointerWheelScroll(bool, int, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerWheelZoom@ScrollPresenter@@AEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@HMMM@Z
    void ProcessPointerWheelZoom(WindissectOpaque const &, int, float, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAnchorRequested@ScrollPresenter@@AEAAXXZ
    void RaiseAnchorRequested();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseBringingIntoView@ScrollPresenter@@AEAA_NNNAEBUBringIntoViewRequestedEventArgs@Xaml@UI@Windows@winrt@@HPEAW4ScrollingSnapPointsMode@Controls@34Microsoft@6@@Z
    bool RaiseBringingIntoView(double, double, WindissectOpaque const &, int, int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseConfigurationChanged@ScrollPresenter@@AEAAXXZ
    void RaiseConfigurationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExtentChanged@ScrollPresenter@@AEAAXXZ
    void RaiseExtentChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseInteractionSourcesChanged@ScrollPresenter@@AEAAXXZ
    void RaiseInteractionSourcesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaisePostArrange@ScrollPresenter@@AEAAXXZ
    void RaisePostArrange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseScrollAnimationStarting@ScrollPresenter@@AEAA?AUCompositionAnimation@Composition@UI@Windows@winrt@@AEBUVector3KeyFrameAnimation@3456@AEBUfloat2@Numerics@Foundation@56@1H@Z
    WindissectOpaque RaiseScrollAnimationStarting(WindissectOpaque const &, WindissectOpaque &, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseStateChanged@ScrollPresenter@@AEAAXXZ
    void RaiseStateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewChangeCompleted@ScrollPresenter@@AEAAX_NW4ScrollPresenterViewChangeResult@@H@Z
    void RaiseViewChangeCompleted(bool, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewChanged@ScrollPresenter@@AEAAXXZ
    void RaiseViewChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseViewportChanged@ScrollPresenter@@AEAAX_N@Z
    void RaiseViewportChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseZoomAnimationStarting@ScrollPresenter@@AEAA?AUCompositionAnimation@Composition@UI@Windows@winrt@@AEBUScalarKeyFrameAnimation@3456@MAEBUfloat2@Numerics@Foundation@56@H@Z
    WindissectOpaque RaiseZoomAnimationStarting(WindissectOpaque const &, float, WindissectOpaque &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAnchorElement@ScrollPresenter@@AEAAXXZ
    void ResetAnchorElement();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupInteractionTrackerBoundaries@ScrollPresenter@@AEAAXXZ
    void SetupInteractionTrackerBoundaries();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupInteractionTrackerZoomFactorBoundaries@ScrollPresenter@@AEAAXNN@Z
    void SetupInteractionTrackerZoomFactorBoundaries(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupPositionBoundariesExpressionAnimations@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void SetupPositionBoundariesExpressionAnimations(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupScrollControllerVisualInterationSource@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void SetupScrollControllerVisualInterationSource(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupScrollControllerVisualInterationSourcePositionModifiers@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@AEBW4Orientation@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetupScrollControllerVisualInterationSourcePositionModifiers(int, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupScrollPresenterVisualInteractionSource@ScrollPresenter@@AEAAXXZ
    void SetupScrollPresenterVisualInteractionSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupTransformExpressionAnimations@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void SetupTransformExpressionAnimations(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupVisualInteractionSourceCenterPointModifier@ScrollPresenter@@AEAAXAEBUVisualInteractionSource@Interactions@Composition@UI@Windows@winrt@@W4ScrollPresenterDimension@1@@Z
    void SetupVisualInteractionSourceCenterPointModifier(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupVisualInteractionSourceChainingMode@ScrollPresenter@@AEAAXAEBUVisualInteractionSource@Interactions@Composition@UI@Windows@winrt@@W4ScrollPresenterDimension@1@AEBW4ScrollingChainMode@Controls@Xaml@5Microsoft@7@@Z
    void SetupVisualInteractionSourceChainingMode(WindissectOpaque const &, int, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SetupVisualInteractionSourceRedirectionMode@ScrollPresenter@@AEAAXAEBUVisualInteractionSource@Interactions@Composition@UI@Windows@winrt@@@Z
    void SetupVisualInteractionSourceRedirectionMode(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartExpressionAnimationSourcesAnimations@ScrollPresenter@@AEAAXXZ
    void StartExpressionAnimationSourcesAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartScrollControllerExpressionAnimationSourcesAnimations@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void StartScrollControllerExpressionAnimationSourcesAnimations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTransformExpressionAnimations@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    void StartTransformExpressionAnimations(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartTranslationAndZoomFactorExpressionAnimations@ScrollPresenter@@AEAA_N_N@Z
    bool StartTranslationAndZoomFactorExpressionAnimations(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopScrollControllerExpressionAnimationSourcesAnimations@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void StopScrollControllerExpressionAnimationSourcesAnimations(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTransformExpressionAnimations@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    void StopTransformExpressionAnimations(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopTranslationAndZoomFactorExpressionAnimations@ScrollPresenter@@AEAAXXZ
    void StopTranslationAndZoomFactorExpressionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookContentPropertyChanged@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void UnhookContentPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookHorizontalScrollControllerEvents@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UnhookHorizontalScrollControllerEvents(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollPresenterEvents@ScrollPresenter@@AEAAXXZ
    void UnhookScrollPresenterEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookVerticalScrollControllerEvents@ScrollPresenter@@AEAAXAEBUIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UnhookVerticalScrollControllerEvents(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContent@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0@Z
    void UpdateContent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayInformation@ScrollPresenter@@AEAAXAEBUDisplayInformation@Display@Graphics@Windows@winrt@@@Z
    void UpdateDisplayInformation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpressionAnimationSources@ScrollPresenter@@AEAAXXZ
    void UpdateExpressionAnimationSources();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsInertiaFromImpulse@ScrollPresenter@@AEAAX_N@Z
    void UpdateIsInertiaFromImpulse(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationRedirectionMode@ScrollPresenter@@AEAAXXZ
    void UpdateManipulationRedirectionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOffset@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@N@Z
    void UpdateOffset(int, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePositionBoundaries@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void UpdatePositionBoundaries(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollAutomationPatternProperties@ScrollPresenter@@AEAAXXZ
    void UpdateScrollAutomationPatternProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllerInteractionsAllowed@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void UpdateScrollControllerInteractionsAllowed(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollControllerValues@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void UpdateScrollControllerValues(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateState@ScrollPresenter@@AEAAXAEBW4ScrollingInteractionState@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateState(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTransformSource@ScrollPresenter@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@0@Z
    void UpdateTransformSource(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateUnzoomedExtentAndViewport@ScrollPresenter@@AEAAX_NNNNN@Z
    void UpdateUnzoomedExtentAndViewport(bool, double, double, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualInteractionSourceMode@ScrollPresenter@@AEAAXW4ScrollPresenterDimension@1@@Z
    void UpdateVisualInteractionSourceMode(int);
};
