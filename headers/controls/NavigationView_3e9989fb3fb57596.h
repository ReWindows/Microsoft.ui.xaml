#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 197 member(s).
class NavigationView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndAttachHeaderAnimation@NavigationView@@SAXAEBUVisual@Composition@UI@Windows@winrt@@@Z
    static void CreateAndAttachHeaderAnimation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindSelectionIndicator@NavigationView@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    WindissectOpaque FindSelectionIndicator(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexPathForContainer@NavigationView@@QEAA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@AEBUNavigationViewItemBase@34567@@Z
    WindissectOpaque GetIndexPathForContainer(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentItemsRepeaterForContainer@NavigationView@@QEAA?AUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUNavigationViewItemBase@34567@@Z
    WindissectOpaque GetParentItemsRepeaterForContainer(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentRootItemsRepeaterForContainer@NavigationView@@QEAA?AUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUNavigationViewItemBase@34567@@Z
    WindissectOpaque GetParentRootItemsRepeaterForContainer(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedContainer@NavigationView@@QEAA?AUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetSelectedContainer();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFullScreenOrTabletMode@NavigationView@@QEAA_NXZ
    bool IsFullScreenOrTabletMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@NavigationView@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MenuItemFromContainer@NavigationView@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUDependencyObject@Xaml@UI@45@@Z
    WindissectOpaque MenuItemFromContainer(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationView@@QEAA@XZ
    NavigationView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@NavigationView@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@NavigationView@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@NavigationView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemInvoked@NavigationView@@QEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void OnNavigationViewItemInvoked(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@NavigationView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterElementClearing@NavigationView@@QEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementClearingEventArgs@34567@@Z
    void OnRepeaterElementClearing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterElementPrepared@NavigationView@@QEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementPreparedEventArgs@34567@@Z
    void OnRepeaterElementPrepared(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterLoaded@NavigationView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnRepeaterLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsInvoked@NavigationView@@QEAAXXZ
    void OnSettingsInvoked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTopNavDataSourceChanged@NavigationView@@QEAAXAEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@Windows@winrt@@@Z
    void OnTopNavDataSourceChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@NavigationView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TopNavigationViewItemContentChanged@NavigationView@@QEAAXXZ
    void TopNavigationViewItemContentChanged();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationView@@UEAA@XZ
    virtual ~NavigationView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnimateSelectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void AnimateSelectionChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyCustomMenuItemContainerStyling@NavigationView@@AEAAXAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeater@34567@H@Z
    void ApplyCustomMenuItemContainerStyling(WindissectOpaque const &, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeTopNavItems@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void ArrangeTopNavItems(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttemptClosePaneLightly@NavigationView@@AEAA_NXZ
    bool AttemptClosePaneLightly();
    // Category: Method | Source: PDB Internal
    // Symbol: ?BumperNavigation@NavigationView@@AEAA_NH@Z
    bool BumperNavigation(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeIsExpandedNavigationViewItem@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void ChangeIsExpandedNavigationViewItem(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelectStatusForItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@_N@Z
    void ChangeSelectStatusForItem(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChangeSelection@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void ChangeSelection(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearAllNavigationViewItemRevokers@NavigationView@@AEAAXXZ
    void ClearAllNavigationViewItemRevokers();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearNavigationViewItemRevokers@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void ClearNavigationViewItemRevokers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseFlyoutIfRequired@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void CloseFlyoutIfRequired(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePane@NavigationView@@AEAAXXZ
    void ClosePane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClosePaneIfNeccessaryAfterItemIsClicked@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void ClosePaneIfNeccessaryAfterItemIsClicked(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CloseTopNavigationViewFlyout@NavigationView@@AEAAXXZ
    void CloseTopNavigationViewFlyout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseMenuItemsInRepeater@NavigationView@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void CollapseMenuItemsInRepeater(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollapseTopLevelMenuItems@NavigationView@@AEAAXW4NavigationViewPaneDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void CollapseTopLevelMenuItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndHookEventsToSettings@NavigationView@@AEAAXXZ
    void CreateAndHookEventsToSettings();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateNavigationTransitionInfo@NavigationView@@AEAA?AUNavigationTransitionInfo@Animation@Media@Xaml@UI@Windows@winrt@@W4NavigationRecommendedTransitionDirection@@@Z
    WindissectOpaque CreateNavigationTransitionInfo(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesNavigationViewItemHaveChildren@NavigationView@@AEAA_NAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    bool DoesNavigationViewItemHaveChildren(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?DoesRepeaterHaveRealizedContainers@NavigationView@@AEAA_NAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@@Z
    bool DoesRepeaterHaveRealizedContainers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindLowestLevelContainerToDisplaySelectionIndicator@NavigationView@@AEAA?AUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque FindLowestLevelContainerToDisplaySelectionIndicator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusNextDownItem@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@AEBUKeyRoutedEventArgs@Input@45Windows@7@@Z
    void FocusNextDownItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FocusNextUpItem@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@AEBUKeyRoutedEventArgs@Input@45Windows@7@@Z
    void FocusNextUpItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildren@NavigationView@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@5@@Z
    WindissectOpaque GetChildren(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenForItemInIndexPath@NavigationView@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUIndexPath@Controls@Xaml@UI@Microsoft@5@_N@Z
    WindissectOpaque GetChildrenForItemInIndexPath(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildrenForItemInIndexPath@NavigationView@@AEAA?AUIInspectable@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@AEBUIndexPath@Controls@78Microsoft@5@_N@Z
    WindissectOpaque GetChildrenForItemInIndexPath(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerCountInRepeater@NavigationView@@AEAAHAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int GetContainerCountInRepeater(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForIndex@NavigationView@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@H_N@Z
    WindissectOpaque GetContainerForIndex(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForIndexPath@NavigationView@@AEAA?AUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@AEBUIndexPath@34567@_N@Z
    WindissectOpaque GetContainerForIndexPath(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContainerForIndexPath@NavigationView@@AEAA?AUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@AEBUUIElement@45Windows@7@AEBUIndexPath@34567@_N@Z
    WindissectOpaque GetContainerForIndexPath(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexFromItem@NavigationView@@AEAAHAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    int GetIndexFromItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexPathOfItem@NavigationView@@AEAA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    WindissectOpaque GetIndexPathOfItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemFromIndex@NavigationView@@CA?AUIInspectable@Foundation@Windows@winrt@@AEBUItemsRepeater@Controls@Xaml@UI@Microsoft@5@H@Z
    static WindissectOpaque GetItemFromIndex(WindissectOpaque const &, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneToggleButtonHeight@NavigationView@@AEAANXZ
    double GetPaneToggleButtonHeight();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPaneToggleButtonWidth@NavigationView@@AEAANXZ
    double GetPaneToggleButtonWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentNavigationViewItemForContainer@NavigationView@@AEAA?AUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@AEBUNavigationViewItemBase@34567@@Z
    WindissectOpaque GetParentNavigationViewItemForContainer(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRecommendedTransitionDirection@NavigationView@@AEAA?AW4NavigationRecommendedTransitionDirection@@AEBUDependencyObject@Xaml@UI@Windows@winrt@@0@Z
    int GetRecommendedTransitionDirection(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectedItemIndex@NavigationView@@AEAAHXZ
    int GetSelectedItemIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTemplateSettings@NavigationView@@AEAAPEAVNavigationViewTemplateSettings@@XZ
    NavigationViewTemplateSettings * GetTemplateSettings();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTopNavigationViewActualWidth@NavigationView@@AEAAMXZ
    float GetTopNavigationViewActualWidth();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVisualStateDisplayMode@NavigationView@@AEAA?AW4NavigationViewVisualStateDisplayMode@@AEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int GetVisualStateDisplayMode(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleKeyEventForNavigationViewItem@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@AEBUKeyRoutedEventArgs@Input@45Windows@7@@Z
    void HandleKeyEventForNavigationViewItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTopNavigationMeasureOverride@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void HandleTopNavigationMeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleTopNavigationMeasureOverrideOverflow@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void HandleTopNavigationMeasureOverrideOverflow(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasTopNavigationViewItemNotInPrimaryList@NavigationView@@AEAA_NXZ
    bool HasTopNavigationViewItemNotInPrimaryList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateTopNavPrimaryLayout@NavigationView@@AEAAXXZ
    void InvalidateTopNavPrimaryLayout();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsContainerTheSelectedItemInTheSelectionModel@NavigationView@@AEAA_NAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@@Z
    bool IsContainerTheSelectedItemInTheSelectionModel(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsLightDismissible@NavigationView@@AEAA_NXZ
    bool IsLightDismissible();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsNavigationViewListSingleSelectionFollowsFocus@NavigationView@@AEAA_NXZ
    bool IsNavigationViewListSingleSelectionFollowsFocus();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOverlay@NavigationView@@AEAA_NXZ
    bool IsOverlay();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootGridOfFlyout@NavigationView@@AEAA_NAEBUDependencyObject@Xaml@UI@Windows@winrt@@@Z
    bool IsRootGridOfFlyout(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRootItemsRepeater@NavigationView@@AEAA_NAEBUDependencyObject@Xaml@UI@Windows@winrt@@@Z
    bool IsRootItemsRepeater(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectionSuppressed@NavigationView@@AEAA_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool IsSelectionSuppressed(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingsItem@NavigationView@@AEAA_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool IsSettingsItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopLevelItem@NavigationView@@AEAA_NAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@@Z
    bool IsTopLevelItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopNavigationView@NavigationView@@AEAA_NXZ
    bool IsTopNavigationView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsTopPrimaryListVisible@NavigationView@@AEAA_NXZ
    bool IsTopPrimaryListVisible();
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyboardFocusFirstItemFromItem@NavigationView@@AEAAXAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void KeyboardFocusFirstItemFromItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?KeyboardFocusLastItemFromItem@NavigationView@@AEAAXAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void KeyboardFocusLastItemFromItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureTopNavMenuItemsHostDesiredWidth@NavigationView@@AEAAMAEBUSize@Foundation@Windows@winrt@@@Z
    float MeasureTopNavMenuItemsHostDesiredWidth(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureTopNavigationViewDesiredWidth@NavigationView@@AEAAMAEBUSize@Foundation@Windows@winrt@@@Z
    float MeasureTopNavigationViewDesiredWidth(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NavigationViewItemBaseOrSettingsContentFromData@NavigationView@@AEAA?AUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    WindissectOpaque NavigationViewItemBaseOrSettingsContentFromData(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NeedRearrangeOfTopElementsAfterOverflowSelectionChanged@NavigationView@@AEAA_NH@Z
    bool NeedRearrangeOfTopElementsAfterOverflowSelectionChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccessKeyInvoked@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUAccessKeyInvokedEventArgs@Input@Xaml@UI@45@@Z
    void OnAccessKeyInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimationComplete@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUCompositionBatchCompletedEventArgs@Composition@UI@45@@Z
    void OnAnimationComplete(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoSuggestBoxQuerySubmitted@NavigationView@@AEAAXAEBUAutoSuggestBox@Controls@Xaml@UI@Windows@winrt@@AEBUAutoSuggestBoxQuerySubmittedEventArgs@34567@@Z
    void OnAutoSuggestBoxQuerySubmitted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnBackButtonClicked@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnBackButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutClosing@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUFlyoutBaseClosingEventArgs@Primitives@Controls@Xaml@UI@45@@Z
    void OnFlyoutClosing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFooterItemsSourceCollectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnFooterItemsSourceCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsPaneOpenChanged@NavigationView@@AEAAXXZ
    void OnIsPaneOpenChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsContainerSizeChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnItemsContainerSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdated@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnLayoutUpdated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuItemsSourceCollectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnMenuItemsSourceCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemExpandedPropertyChanged@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnNavigationViewItemExpandedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemIsSelectedPropertyChanged@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnNavigationViewItemIsSelectedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemKeyDown@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnNavigationViewItemKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemOnGotFocus@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnNavigationViewItemOnGotFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemTapped@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTappedRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnNavigationViewItemTapped(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnOverflowItemsSourceCollectionChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnOverflowItemsSourceCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneSearchButtonClick@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnPaneSearchButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneTitleHolderSizeChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnPaneTitleHolderSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPaneToggleButtonClick@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnPaneToggleButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterGettingFocus@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUGettingFocusEventArgs@Input@Xaml@UI@45@@Z
    void OnRepeaterGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedItemPropertyChanged@NavigationView@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnSelectedItemPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionModelChildrenRequested@NavigationView@@AEAAXAEBUSelectionModel@Controls@Xaml@UI@Microsoft@winrt@@AEBUSelectionModelChildrenRequestedEventArgs@34567@@Z
    void OnSelectionModelChildrenRequested(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionModelSelectionChanged@NavigationView@@AEAAXAEBUSelectionModel@Controls@Xaml@UI@Microsoft@winrt@@AEBUSelectionModelSelectionChangedEventArgs@34567@@Z
    void OnSelectionModelSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewClosedCompactChanged@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSplitViewClosedCompactChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneClosed@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnSplitViewPaneClosed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneClosing@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUSplitViewPaneClosingEventArgs@Controls@3456@@Z
    void OnSplitViewPaneClosing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneOpened@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnSplitViewPaneOpened(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPaneOpening@NavigationView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnSplitViewPaneOpening(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarIsVisibleChanged@NavigationView@@AEAAXAEBUCoreApplicationViewTitleBar@Core@ApplicationModel@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    void OnTitleBarIsVisibleChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTitleBarMetricsChanged@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnTitleBarMetricsChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OpenPane@NavigationView@@AEAAXXZ
    void OpenPane();
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayIndicatorAnimations@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@MMUSize@Foundation@56@1_N@Z
    void PlayIndicatorAnimations(WindissectOpaque const &, float, float, WindissectOpaque, WindissectOpaque, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayIndicatorNonSameLevelAnimations@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N1@Z
    void PlayIndicatorNonSameLevelAnimations(WindissectOpaque const &, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayIndicatorNonSameLevelTopPrimaryAnimation@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    void PlayIndicatorNonSameLevelTopPrimaryAnimation(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseCollapsedEvent@NavigationView@@AEAAXAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RaiseCollapsedEvent(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseDisplayModeChanged@NavigationView@@AEAAXAEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RaiseDisplayModeChanged(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseExpandingEvent@NavigationView@@AEAAXAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RaiseExpandingEvent(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseItemInvoked@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@_NAEBUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@5@W4NavigationRecommendedTransitionDirection@@@Z
    void RaiseItemInvoked(WindissectOpaque const &, bool, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseItemInvokedForNavigationViewItem@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RaiseItemInvokedForNavigationViewItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChangedEvent@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@_NW4NavigationRecommendedTransitionDirection@@@Z
    void RaiseSelectionChangedEvent(WindissectOpaque const &, bool, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleContainer@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void RecycleContainer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetAndRearrangeTopNavItems@NavigationView@@AEAAXAEBUSize@Foundation@Windows@winrt@@@Z
    void ResetAndRearrangeTopNavItems(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResetElementAnimationProperties@NavigationView@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@M@Z
    void ResetElementAnimationProperties(WindissectOpaque const &, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolveContainerForItem@NavigationView@@AEAA?AUNavigationViewItemBase@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@H@Z
    WindissectOpaque ResolveContainerForItem(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RevokeNavigationViewItemRevokers@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RevokeNavigationViewItemRevokers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchEntireTreeForContainer@NavigationView@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@AEBUItemsRepeater@Controls@34Microsoft@6@AEBUIInspectable@Foundation@56@@Z
    WindissectOpaque SearchEntireTreeForContainer(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchEntireTreeForIndexPath@NavigationView@@AEAA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeater@34567@AEBUIInspectable@Foundation@Windows@7@_N@Z
    WindissectOpaque SearchEntireTreeForIndexPath(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SearchEntireTreeForIndexPath@NavigationView@@AEAA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@AEBUNavigationViewItem@34567@AEBUIInspectable@Foundation@Windows@7@AEBU234567@@Z
    WindissectOpaque SearchEntireTreeForIndexPath(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectOverflowItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUIndexPath@Controls@Xaml@UI@Microsoft@5@@Z
    void SelectOverflowItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSelectableItemWithOffset@NavigationView@@AEAA_NHHAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@H@Z
    bool SelectSelectableItemWithOffset(int, int, WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectandMoveOverflowItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUIndexPath@Controls@Xaml@UI@Microsoft@5@_N@Z
    void SelectandMoveOverflowItem(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDisplayMode@NavigationView@@AEAAXAEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void SetDisplayMode(int const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDropShadow@NavigationView@@AEAAXXZ
    void SetDropShadow();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetNavigationViewItemRevokers@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetNavigationViewItemRevokers(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOverflowButtonVisibility@NavigationView@@AEAAXAEBW4Visibility@Xaml@UI@Windows@winrt@@@Z
    void SetOverflowButtonVisibility(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPaneToggleButtonAutomationName@NavigationView@@AEAAXXZ
    void SetPaneToggleButtonAutomationName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShadowCasterEaseOutStoryboard_Completed@NavigationView@@AEAAXAEBUGrid@Controls@Xaml@UI@Windows@winrt@@@Z
    void ShadowCasterEaseOutStoryboard_Completed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowBackButton@NavigationView@@AEAA_NXZ
    bool ShouldShowBackButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowBackOrCloseButton@NavigationView@@AEAA_NXZ
    bool ShouldShowBackOrCloseButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldShowCloseButton@NavigationView@@AEAA_NXZ
    bool ShouldShowCloseButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHideChildrenItemsRepeater@NavigationView@@AEAAXAEBUNavigationViewItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void ShowHideChildrenItemsRepeater(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShrinkTopNavigationSize@NavigationView@@AEAAXMAEBUSize@Foundation@Windows@winrt@@@Z
    void ShrinkTopNavigationSize(float, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SwapPaneHeaderContent@NavigationView@@AEAAXV?$tracker_ref@UContentControl@Controls@Xaml@UI@Windows@winrt@@$0A@PEAUIUnknown@@@@0AEBUhstring@winrt@@@Z
    void SwapPaneHeaderContent(WindissectOpaque, WindissectOpaque, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UndoSelectionAndRevertSelectionTo@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void UndoSelectionAndRevertSelectionTo(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookEventsAndClearFields@NavigationView@@AEAAX_N@Z
    void UnhookEventsAndClearFields(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnselectPrevItem@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void UnselectPrevItem(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnsetDropShadow@NavigationView@@AEAAXXZ
    void UnsetDropShadow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAdaptiveLayout@NavigationView@@AEAAXN_N@Z
    void UpdateAdaptiveLayout(double, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBackAndCloseButtonsVisibility@NavigationView@@AEAAXXZ
    void UpdateBackAndCloseButtonsVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContentBindingsForPaneDisplayMode@NavigationView@@AEAAXXZ
    void UpdateContentBindingsForPaneDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFooterRepeaterItemsSource@NavigationView@@AEAAX_N0@Z
    void UpdateFooterRepeaterItemsSource(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderVisibility@NavigationView@@AEAAXW4NavigationViewDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateHeaderVisibility(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHeaderVisibility@NavigationView@@AEAAXXZ
    void UpdateHeaderVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsChildSelectedForIndexPath@NavigationView@@AEAAXAEBUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void UpdateIsChildSelectedForIndexPath(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClosedCompact@NavigationView@@AEAAXXZ
    void UpdateIsClosedCompact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateLeftNavigationOnlyVisualState@NavigationView@@AEAAX_N@Z
    void UpdateLeftNavigationOnlyVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationViewItemsFactory@NavigationView@@AEAAXXZ
    void UpdateNavigationViewItemsFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOpenPaneWidth@NavigationView@@AEAAXN@Z
    void UpdateOpenPaneWidth(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneButtonsWidths@NavigationView@@AEAAXXZ
    void UpdatePaneButtonsWidths();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneDisplayMode@NavigationView@@AEAAXXZ
    void UpdatePaneDisplayMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneDisplayMode@NavigationView@@AEAAXW4NavigationViewPaneDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@0@Z
    void UpdatePaneDisplayMode(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneLayout@NavigationView@@AEAAXXZ
    void UpdatePaneLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneOverlayGroup@NavigationView@@AEAAXXZ
    void UpdatePaneOverlayGroup();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneShadow@NavigationView@@AEAAXXZ
    void UpdatePaneShadow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneTabFocusNavigation@NavigationView@@AEAAXXZ
    void UpdatePaneTabFocusNavigation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneTitleFrameworkElementParents@NavigationView@@AEAAXXZ
    void UpdatePaneTitleFrameworkElementParents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneTitleMargins@NavigationView@@AEAAXXZ
    void UpdatePaneTitleMargins();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneToggleButtonVisibility@NavigationView@@AEAAXXZ
    void UpdatePaneToggleButtonVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneToggleSize@NavigationView@@AEAAXXZ
    void UpdatePaneToggleSize();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePaneVisibility@NavigationView@@AEAAXXZ
    void UpdatePaneVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRepeaterItemsSource@NavigationView@@AEAAX_N@Z
    void UpdateRepeaterItemsSource(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItemFromMenuItems@NavigationView@@AEAA_NAEBU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@_N@Z
    bool UpdateSelectedItemFromMenuItems(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionForMenuItems@NavigationView@@AEAAXXZ
    void UpdateSelectionForMenuItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionModelSelection@NavigationView@@AEAAXAEBUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateSelectionModelSelection(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSettingsItemToolTip@NavigationView@@AEAAXXZ
    void UpdateSettingsItemToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSingleSelectionFollowsFocusTemplateSetting@NavigationView@@AEAAXXZ
    void UpdateSingleSelectionFollowsFocusTemplateSetting();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTitleBarPadding@NavigationView@@AEAAXXZ
    void UpdateTitleBarPadding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopNavOverflowRepeaterItemsSource@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void UpdateTopNavOverflowRepeaterItemsSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopNavRepeatersItemSource@NavigationView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void UpdateTopNavRepeatersItemSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTopNavigationWidthCache@NavigationView@@AEAAXXZ
    void UpdateTopNavigationWidthCache();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationView@@AEAAX_N@Z
    void UpdateVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForDisplayModeGroup@NavigationView@@AEAAXAEBW4NavigationViewDisplayMode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateVisualStateForDisplayModeGroup(int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForOverflowButton@NavigationView@@AEAAXXZ
    void UpdateVisualStateForOverflowButton();
};
