#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 56 member(s).
class TabView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromIndex@TabView@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque ContainerFromIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromItem@TabView@@QEAA?AUDependencyObject@Xaml@UI@Windows@winrt@@AEBUIInspectable@Foundation@56@@Z
    WindissectOpaque ContainerFromItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexFromContainer@TabView@@QEAAHAEBUDependencyObject@Xaml@UI@Windows@winrt@@@Z
    int IndexFromContainer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocus@TabView@@QEAA_N_N@Z
    bool MoveFocus(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TabView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseButtonOverlayModePropertyChanged@TabView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnCloseButtonOverlayModePropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TabView@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsChanged@TabView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void OnItemsChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TabView@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedIndexPropertyChanged@TabView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnSelectedIndexPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabWidthModePropertyChanged@TabView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnTabWidthModePropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCloseTab@TabView@@QEAAXAEBUTabViewItem@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void RequestCloseTab(WindissectOpaque const &, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabSeparatorOpacity@TabView@@QEAAXH@Z
    void SetTabSeparatorOpacity(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetTabSeparatorOpacity@TabView@@QEAAXHH@Z
    void SetTabSeparatorOpacity(int, int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TabView@@QEAA@XZ
    TabView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabContent@TabView@@QEAAXXZ
    void UpdateTabContent();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TabView@@UEAA@XZ
    virtual ~TabView();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BringSelectedTabIntoView@TabView@@AEAAXXZ
    void BringSelectedTabIntoView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindTabViewItemFromDragItem@TabView@@AEAA?AUTabViewItem@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    WindissectOpaque FindTabViewItemFromDragItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemCount@TabView@@AEAAHXZ
    int GetItemCount();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsFocusable@TabView@@CA_NAEBUDependencyObject@Xaml@UI@Windows@winrt@@_N@Z
    static bool IsFocusable(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveSelection@TabView@@AEAA_N_N@Z
    bool MoveSelection(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddButtonClick@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnAddButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAddButtonKeyDown@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnAddButtonKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCtrlF4Invoked@TabView@@AEAAXAEBUKeyboardAccelerator@Input@Xaml@UI@Windows@winrt@@AEBUKeyboardAcceleratorInvokedEventArgs@34567@@Z
    void OnCtrlF4Invoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCtrlShiftTabInvoked@TabView@@AEAAXAEBUKeyboardAccelerator@Input@Xaml@UI@Windows@winrt@@AEBUKeyboardAcceleratorInvokedEventArgs@34567@@Z
    void OnCtrlShiftTabInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCtrlTabInvoked@TabView@@AEAAXAEBUKeyboardAccelerator@Input@Xaml@UI@Windows@winrt@@AEBUKeyboardAcceleratorInvokedEventArgs@34567@@Z
    void OnCtrlTabInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsPresenterSizeChanged@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnItemsPresenterSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewDragItemsCompleted@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsCompletedEventArgs@Controls@Xaml@UI@45@@Z
    void OnListViewDragItemsCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewDragItemsStarting@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsStartingEventArgs@Controls@Xaml@UI@45@@Z
    void OnListViewDragItemsStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewDragOver@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragEventArgs@Xaml@UI@45@@Z
    void OnListViewDragOver(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewDraggingPropertyChanged@TabView@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnListViewDraggingPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewDrop@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragEventArgs@Xaml@UI@45@@Z
    void OnListViewDrop(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewGettingFocus@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUGettingFocusEventArgs@Input@Xaml@UI@45@@Z
    void OnListViewGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewLoaded@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnListViewLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListViewSelectionChanged@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnListViewSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollDecreaseClick@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnScrollDecreaseClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollIncreaseClick@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnScrollIncreaseClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerLoaded@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewerLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollViewerViewChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnScrollViewerViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabStripPointerEntered@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnTabStripPointerEntered(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabStripPointerExited@TabView@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnTabStripPointerExited(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestCloseCurrentTab@TabView@@AEAA_NXZ
    bool RequestCloseCurrentTab();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookEventsAndClearFields@TabView@@AEAAXXZ
    void UnhookEventsAndClearFields();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBottomBorderLineVisualStates@TabView@@AEAAXXZ
    void UpdateBottomBorderLineVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateListViewItemContainerTransitions@TabView@@AEAAXXZ
    void UpdateListViewItemContainerTransitions();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollViewerDecreaseAndIncreaseButtonsViewState@TabView@@AEAAXXZ
    void UpdateScrollViewerDecreaseAndIncreaseButtonsViewState();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedIndex@TabView@@AEAAXXZ
    void UpdateSelectedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItem@TabView@@AEAAXXZ
    void UpdateSelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabBottomBorderLineVisualStates@TabView@@AEAAXXZ
    void UpdateTabBottomBorderLineVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabWidths@TabView@@AEAAX_N0@Z
    void UpdateTabWidths(bool, bool);
};
