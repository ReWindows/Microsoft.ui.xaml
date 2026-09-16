#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 33 member(s).
class PipsPager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItem@PipsPager@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetSelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@PipsPager@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@PipsPager@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@PipsPager@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMaxVisiblePipsChanged@PipsPager@@QEAAXXZ
    void OnMaxVisiblePipsChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberOfPagesChanged@PipsPager@@QEAAXXZ
    void OnNumberOfPagesChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOrientationChanged@PipsPager@@QEAAXXZ
    void OnOrientationChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@PipsPager@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PipsPager@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedPageIndexChanged@PipsPager@@QEAAXH@Z
    void OnSelectedPageIndexChanged(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PipsPager@@QEAA@XZ
    PipsPager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSizeOfSetForElements@PipsPager@@QEAAXHH@Z
    void UpdateSizeOfSetForElements(int, int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PipsPager@@UEAA@XZ
    virtual ~PipsPager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyStyleToPipAndUpdateOrientation@PipsPager@@AEAAXAEBUFrameworkElement@Xaml@UI@Windows@winrt@@AEBUStyle@3456@@Z
    void ApplyStyleToPipAndUpdateOrientation(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateScrollViewerSize@PipsPager@@AEAANNNHH@Z
    double CalculateScrollViewerSize(double, double, int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDesiredPipSize@PipsPager@@AEAA?AUSize@Foundation@Windows@winrt@@AEBUStyle@Xaml@UI@45@@Z
    WindissectOpaque GetDesiredPipSize(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@PipsPager@@AEAAXUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@UItemsRepeaterElementPreparedEventArgs@34567@@Z
    void OnElementPrepared(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNextButtonClicked@PipsPager@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnNextButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPipsAreaBringIntoViewRequested@PipsPager@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUBringIntoViewRequestedEventArgs@Xaml@UI@45@@Z
    void OnPipsAreaBringIntoViewRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPipsAreaGettingFocus@PipsPager@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUGettingFocusEventArgs@Input@Xaml@UI@45@@Z
    void OnPipsAreaGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPreviousButtonClicked@PipsPager@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnPreviousButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerBringIntoViewRequested@PipsPager@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUBringIntoViewRequestedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewerBringIntoViewRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectedIndexChanged@PipsPager@@AEAAXXZ
    void RaiseSelectedIndexChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToCenterOfViewport@PipsPager@@AEAAXUUIElement@Xaml@UI@Windows@winrt@@H@Z
    void ScrollToCenterOfViewport(WindissectOpaque, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollViewerMaxSize@PipsPager@@AEAAXXZ
    void SetScrollViewerMaxSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationButtonVisualStates@PipsPager@@AEAAXXZ
    void UpdateNavigationButtonVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePipOrientation@PipsPager@@AEAAXAEBUControl@Controls@Xaml@UI@Windows@winrt@@@Z
    void UpdatePipOrientation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePipsItems@PipsPager@@AEAAXHH@Z
    void UpdatePipsItems(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedPip@PipsPager@@AEAAXH@Z
    void UpdateSelectedPip(int);
};
