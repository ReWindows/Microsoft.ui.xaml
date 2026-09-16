#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 66 member(s).
class NavigationViewItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSelectionIndicator@NavigationViewItem@@QEBA?AUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetSelectionIndicator() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasChildren@NavigationViewItem@@QEAA_NXZ
    bool HasChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPotentialChildren@NavigationViewItem@@QEAA_NXZ
    bool HasPotentialChildren();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsRepeaterVisible@NavigationViewItem@@QEBA_NXZ
    bool IsRepeaterVisible() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItem@@QEAA@XZ
    NavigationViewItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItem@@UEAAXXZ
    virtual void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContentChanged@NavigationViewItem@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    virtual void OnContentChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@NavigationViewItem@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnExpandCollapseChevronTapped@NavigationViewItem@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTappedRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnExpandCollapseChevronTapped(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGotFocus@NavigationViewItem@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnGotFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsExpandedPropertyChanged@NavigationViewItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnIsExpandedPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@NavigationViewItem@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLostFocus@NavigationViewItem@@UEAAXAEBURoutedEventArgs@Xaml@UI@Windows@winrt@@@Z
    virtual void OnLostFocus(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuItemsPropertyChanged@NavigationViewItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnMenuItemsPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PropagateDepthToChildren@NavigationViewItem@@QEAAXH@Z
    void PropagateDepthToChildren(int);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@NavigationViewItem@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldRepeaterShowInFlyout@NavigationViewItem@@QEBA_NXZ
    bool ShouldRepeaterShowInFlyout() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShowHideChildren@NavigationViewItem@@QEAAXXZ
    void ShowHideChildren();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItem@@UEAA@XZ
    virtual ~NavigationViewItem();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresenter@NavigationViewItem@@AEBAPEAVNavigationViewItemPresenter@@XZ
    NavigationViewItemPresenter * GetPresenter() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetPresenterOrItem@NavigationViewItem@@AEBA?BUUIElement@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetPresenterOrItem() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookInputEvents@NavigationViewItem@@AEAAXAEBUIControlProtected@Controls@Xaml@UI@Windows@winrt@@@Z
    void HookInputEvents(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IgnorePointerId@NavigationViewItem@@AEAA_NAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    bool IgnorePointerId(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOnLeftNav@NavigationViewItem@@AEBA_NXZ
    bool IsOnLeftNav() const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsOutOfControlBounds@NavigationViewItem@@AEAA_NAEBUPoint@Foundation@Windows@winrt@@@Z
    bool IsOutOfControlBounds(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadElementsForDisplayingChildren@NavigationViewItem@@AEAAXXZ
    void LoadElementsForDisplayingChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadMenuItemsHost@NavigationViewItem@@AEAAXXZ
    void LoadMenuItemsHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFlyoutClosing@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUFlyoutBaseClosingEventArgs@Primitives@Controls@Xaml@UI@45@@Z
    void OnFlyoutClosing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@Xaml@UI@45@@Z
    void OnIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceViewChanged@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnItemsSourceViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnMenuItemsVectorChanged@NavigationViewItem@@AEAAXAEBU?$IObservableVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIVectorChangedEventArgs@3456@@Z
    void OnMenuItemsVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBaseDepthChanged@NavigationViewItem@@EEAAXXZ
    virtual void OnNavigationViewItemBaseDepthChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBaseIsSelectedChanged@NavigationViewItem@@EEAAXXZ
    virtual void OnNavigationViewItemBaseIsSelectedChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNavigationViewItemBasePositionChanged@NavigationViewItem@@EEAAXXZ
    virtual void OnNavigationViewItemBasePositionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerCanceled@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerCanceled(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerCaptureLost@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerCaptureLost(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerEntered@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerExited@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerMoved@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerMoved(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerPressed@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPresenterPointerReleased@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPresenterPointerReleased(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSplitViewPropertyChanged@NavigationViewItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnSplitViewPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepNavigationViewItem@NavigationViewItem@@AEAAXAEBUSplitView@Controls@Xaml@UI@Windows@winrt@@@Z
    void PrepNavigationViewItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerCanceled@NavigationViewItem@@AEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void ProcessPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ProcessPointerOver@NavigationViewItem@@AEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void ProcessPointerOver(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReparentRepeater@NavigationViewItem@@AEAAXXZ
    void ReparentRepeater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldEnableToolTip@NavigationViewItem@@AEBA_NXZ
    bool ShouldEnableToolTip() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?SuggestedToolTipChanged@NavigationViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SuggestedToolTipChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookEventsAndClearFields@NavigationViewItem@@AEAAXXZ
    void UnhookEventsAndClearFields();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookInputEvents@NavigationViewItem@@AEAAXXZ
    void UnhookInputEvents();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompactPaneLength@NavigationViewItem@@AEAAXXZ
    void UpdateCompactPaneLength();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateIsClosedCompact@NavigationViewItem@@AEAAXXZ
    void UpdateIsClosedCompact();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemIndentation@NavigationViewItem@@AEAAXXZ
    void UpdateItemIndentation();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNavigationViewItemToolTip@NavigationViewItem@@AEAAXXZ
    void UpdateNavigationViewItemToolTip();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateRepeaterItemsSource@NavigationViewItem@@AEAAXXZ
    void UpdateRepeaterItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualState@NavigationViewItem@@AEAAX_N@Z
    void UpdateVisualState(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForChevron@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForChevron();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForIconAndContent@NavigationViewItem@@AEAAX_N0@Z
    void UpdateVisualStateForIconAndContent(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForInfoBadge@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForInfoBadge();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForNavigationViewPositionChange@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForNavigationViewPositionChange();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForPointer@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForPointer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForToolTip@NavigationViewItem@@AEAAXXZ
    void UpdateVisualStateForToolTip();
};
