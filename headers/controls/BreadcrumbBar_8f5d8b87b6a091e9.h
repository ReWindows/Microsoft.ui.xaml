#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 33 member(s).
class BreadcrumbBar {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BreadcrumbBar@@QEAA@XZ
    BreadcrumbBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HiddenElements@BreadcrumbBar@@QEBA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque HiddenElements() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@BreadcrumbBar@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@BreadcrumbBar@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseItemClickedEvent@BreadcrumbBar@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@I@Z
    void RaiseItemClickedEvent(WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReIndexVisibleElementsForAccessibility@BreadcrumbBar@@QEBAXXZ
    void ReIndexVisibleElementsForAccessibility() const;
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BreadcrumbBar@@UEAA@XZ
    virtual ~BreadcrumbBar();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceUpdateLastElement@BreadcrumbBar@@AEAAXXZ
    void ForceUpdateLastElement();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFindNextElementOptions@BreadcrumbBar@@AEAA?AUFindNextElementOptions@Input@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetFindNextElementOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHiddenElementsList@BreadcrumbBar@@AEBA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@I@Z
    WindissectOpaque GetHiddenElementsList(unsigned int) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEdgeCaseFocus@BreadcrumbBar@@AEAA_N_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool HandleEdgeCaseFocus(bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocus@BreadcrumbBar@@AEAA_NH@Z
    bool MoveFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusNext@BreadcrumbBar@@AEAA_NXZ
    bool MoveFocusNext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusPrevious@BreadcrumbBar@@AEAA_NXZ
    bool MoveFocusPrevious();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccessKeyInvoked@BreadcrumbBar@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBUAccessKeyInvokedEventArgs@Input@3456@@Z
    void OnAccessKeyInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBreadcrumbBarItemsRepeaterLoaded@BreadcrumbBar@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnBreadcrumbBarItemsRepeaterLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBreadcrumbBarItemsSourceCollectionChanged@BreadcrumbBar@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnBreadcrumbBarItemsSourceCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildPreviewKeyDown@BreadcrumbBar@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnChildPreviewKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementClearingEvent@BreadcrumbBar@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementClearingEventArgs@34567@@Z
    void OnElementClearingEvent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementIndexChangedEvent@BreadcrumbBar@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementIndexChangedEventArgs@34567@@Z
    void OnElementIndexChangedEvent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPreparedEvent@BreadcrumbBar@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementPreparedEventArgs@34567@@Z
    void OnElementPreparedEvent(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlowDirectionChanged@BreadcrumbBar@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnFlowDirectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@BreadcrumbBar@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUGettingFocusEventArgs@Input@Xaml@UI@45@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetLastBreadcrumbBarItem@BreadcrumbBar@@AEAAXXZ
    void ResetLastBreadcrumbBarItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBreadcrumbBarItemsFlowDirection@BreadcrumbBar@@AEAAXXZ
    void UpdateBreadcrumbBarItemsFlowDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateEllipsisBreadcrumbBarItemDropDownItemTemplate@BreadcrumbBar@@AEAAXXZ
    void UpdateEllipsisBreadcrumbBarItemDropDownItemTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemTemplate@BreadcrumbBar@@AEAAXXZ
    void UpdateItemTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsRepeaterItemsSource@BreadcrumbBar@@AEAAXXZ
    void UpdateItemsRepeaterItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLastElement@BreadcrumbBar@@AEAAXAEBUBreadcrumbBarItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateLastElement(WindissectOpaque const &);
};
