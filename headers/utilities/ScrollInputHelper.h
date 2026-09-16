#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 67 member(s).
class ScrollInputHelper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetFromScrollContentElement@ScrollInputHelper@@QEBANAEBUUIElement@Xaml@UI@Windows@winrt@@W4Orientation@Controls@3456@@Z
    double GetOffsetFromScrollContentElement(WindissectOpaque const &, int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSourceOffsetPropertyName@ScrollInputHelper@@QEBA?AUhstring@winrt@@W4Orientation@Controls@Xaml@UI@Windows@3@@Z
    WindissectOpaque GetSourceOffsetPropertyName(int) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetSourceElement@ScrollInputHelper@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void SetSourceElement(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTargetElement@ScrollInputHelper@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void SetTargetElement(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollInputHelper@@QEAA@XZ
    ~ScrollInputHelper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeHorizontalContentAlignment@ScrollInputHelper@@AEBA?AW4HorizontalAlignment@Xaml@UI@Windows@winrt@@XZ
    int ComputeHorizontalContentAlignment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeVerticalContentAlignment@ScrollInputHelper@@AEBA?AW4VerticalAlignment@Xaml@UI@Windows@winrt@@XZ
    int ComputeVerticalContentAlignment() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComputeZoomMode@ScrollInputHelper@@AEBA?AW4ZoomMode@Controls@Xaml@UI@Windows@winrt@@XZ
    int ComputeZoomMode() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureInternalSourcePropertySetAndExpressionAnimations@ScrollInputHelper@@AEAAXXZ
    void EnsureInternalSourcePropertySetAndExpressionAnimations();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildScrollPresenterOrScrollViewer@ScrollInputHelper@@CAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@PEAUScrollPresenter@Primitives@Controls@34Microsoft@6@PEAUScrollViewer@93456@@Z
    static void GetChildScrollPresenterOrScrollViewer(WindissectOpaque const &, WindissectOpaque *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRichEditBoxParent@ScrollInputHelper@@CA?AURichEditBox@Controls@Xaml@UI@Windows@winrt@@AEBUDependencyObject@4567@@Z
    static WindissectOpaque GetRichEditBoxParent(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollContentElement@ScrollInputHelper@@AEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetScrollContentElement() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookRichEditBoxTextChanged@ScrollInputHelper@@AEAAXXZ
    void HookRichEditBoxTextChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollPresenterContentPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void HookScrollPresenterContentPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollPresenterPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void HookScrollPresenterPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollViewerContentPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void HookScrollViewerContentPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollViewerDirectManipulationCompleted@ScrollInputHelper@@AEAAXXZ
    void HookScrollViewerDirectManipulationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollViewerDirectManipulationStarted@ScrollInputHelper@@AEAAXXZ
    void HookScrollViewerDirectManipulationStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollViewerPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void HookScrollViewerPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookSourceControlTemplateChanged@ScrollInputHelper@@AEAAXXZ
    void HookSourceControlTemplateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookSourceElementLoaded@ScrollInputHelper@@AEAAXXZ
    void HookSourceElementLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookTargetElementLoaded@ScrollInputHelper@@AEAAXXZ
    void HookTargetElementLoaded();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsScrollContentPresenterIScrollInfoProvider@ScrollInputHelper@@AEBA_NXZ
    bool IsScrollContentPresenterIScrollInfoProvider() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCompositionTargetRendering@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnCompositionTargetRendering(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRichEditBoxTextChanged@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnRichEditBoxTextChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollPresenterPropertyChanged@ScrollInputHelper@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnScrollPresenterPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerContentPropertyChanged@ScrollInputHelper@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnScrollViewerContentPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerDirectManipulationCompleted@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollViewerDirectManipulationCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerDirectManipulationStarted@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnScrollViewerDirectManipulationStarted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerPropertyChanged@ScrollInputHelper@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnScrollViewerPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceContentSizeChanged@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSourceContentSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceElementChanged@ScrollInputHelper@@AEAAX_N@Z
    void OnSourceElementChanged(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceElementLoaded@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnSourceElementLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceElementPropertyChanged@ScrollInputHelper@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSourceElementPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceInfoChanged@ScrollInputHelper@@AEAAX_N00@Z
    void OnSourceInfoChanged(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourceSizeChanged@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSourceSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetElementChanged@ScrollInputHelper@@AEAAXXZ
    void OnTargetElementChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTargetElementLoaded@ScrollInputHelper@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnTargetElementLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessContentSizeChange@ScrollInputHelper@@AEAAXXZ
    void ProcessContentSizeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessScrollPresenterContentChange@ScrollInputHelper@@AEAAXXZ
    void ProcessScrollPresenterContentChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessScrollViewerContentChange@ScrollInputHelper@@AEAAXXZ
    void ProcessScrollViewerContentChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessScrollViewerZoomModeChange@ScrollInputHelper@@AEAAXXZ
    void ProcessScrollViewerZoomModeChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessSourceElementChange@ScrollInputHelper@@AEAAX_N@Z
    void ProcessSourceElementChange(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessTargetElementChange@ScrollInputHelper@@AEAAXXZ
    void ProcessTargetElementChange();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPresenter@ScrollInputHelper@@AEAAXAEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetScrollPresenter(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollViewer@ScrollInputHelper@@AEAAXAEBUScrollViewer@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetScrollViewer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartInternalExpressionAnimations@ScrollInputHelper@@AEAAXAEBUCompositionPropertySet@Composition@UI@Windows@winrt@@@Z
    void StartInternalExpressionAnimations(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopInternalExpressionAnimations@ScrollInputHelper@@AEAAXXZ
    void StopInternalExpressionAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookCompositionTargetRendering@ScrollInputHelper@@AEAAXXZ
    void UnhookCompositionTargetRendering();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookRichEditBoxTextChanged@ScrollInputHelper@@AEAAXXZ
    void UnhookRichEditBoxTextChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollPresenterContentPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void UnhookScrollPresenterContentPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollPresenterPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void UnhookScrollPresenterPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollViewerContentPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void UnhookScrollViewerContentPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollViewerDirectManipulationCompleted@ScrollInputHelper@@AEAAXXZ
    void UnhookScrollViewerDirectManipulationCompleted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollViewerDirectManipulationStarted@ScrollInputHelper@@AEAAXXZ
    void UnhookScrollViewerDirectManipulationStarted();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollViewerPropertyChanged@ScrollInputHelper@@AEAAXXZ
    void UnhookScrollViewerPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookSourceControlTemplateChanged@ScrollInputHelper@@AEAAXXZ
    void UnhookSourceControlTemplateChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookSourceElementLoaded@ScrollInputHelper@@AEAAXXZ
    void UnhookSourceElementLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookTargetElementLoaded@ScrollInputHelper@@AEAAXXZ
    void UnhookTargetElementLoaded();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentSize@ScrollInputHelper@@AEAAXXZ
    void UpdateContentSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateInternalExpressionAnimations@ScrollInputHelper@@AEAAX_N00@Z
    void UpdateInternalExpressionAnimations(bool, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsTargetElementInSource@ScrollInputHelper@@AEAAXXZ
    void UpdateIsTargetElementInSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationAlignments@ScrollInputHelper@@AEAAXXZ
    void UpdateManipulationAlignments();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateManipulationZoomMode@ScrollInputHelper@@AEAAXXZ
    void UpdateManipulationZoomMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOutOfBoundsPanSize@ScrollInputHelper@@AEAAXXZ
    void UpdateOutOfBoundsPanSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSource@ScrollInputHelper@@AEAAX_N@Z
    void UpdateSource(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateViewportSize@ScrollInputHelper@@AEAAXXZ
    void UpdateViewportSize();
};
