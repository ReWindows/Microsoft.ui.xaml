#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 35 member(s).
class TabViewItem {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetParentTabView@TabViewItem@@QEAA?AUTabView@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetParentTabView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TabViewItem@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@TabViewItem@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnKeyDown@TabViewItem@@QEAAXAEBUKeyRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnKeyDown(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@TabViewItem@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerCanceled@TabViewItem@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPointerCanceled(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerEntered@TabViewItem@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPointerEntered(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerExited@TabViewItem@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPointerExited(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@TabViewItem@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPointerPressed(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerReleased@TabViewItem@@QEAAXAEBUPointerRoutedEventArgs@Input@Xaml@UI@Windows@winrt@@@Z
    void OnPointerReleased(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParentTabView@TabViewItem@@QEAAXAEBUTabView@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetParentTabView(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartBringTabIntoView@TabViewItem@@QEAAXXZ
    void StartBringTabIntoView();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TabViewItem@@QEAA@XZ
    TabViewItem();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TabViewItem@@UEAA@XZ
    virtual ~TabViewItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HideLeftAdjacentTabSeparator@TabViewItem@@AEAAXXZ
    void HideLeftAdjacentTabSeparator();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCloseButtonClick@TabViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnCloseButtonClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnForegroundPropertyChanged@TabViewItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnForegroundPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHeaderChanged@TabViewItem@@AEAAXXZ
    void OnHeaderChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIconSourceChanged@TabViewItem@@AEAAXXZ
    void OnIconSourceChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsSelectedPropertyChanged@TabViewItem@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnIsSelectedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSizeChanged@TabViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabDragCompleted@TabViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTabViewTabDragCompletedEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnTabDragCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnTabDragStarting@TabViewItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTabViewTabDragStartingEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void OnTabDragStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestClose@TabViewItem@@AEAAXXZ
    void RequestClose();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RestoreLeftAdjacentTabSeparatorVisibility@TabViewItem@@AEAAXXZ
    void RestoreLeftAdjacentTabSeparatorVisibility();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCloseButton@TabViewItem@@AEAAXXZ
    void UpdateCloseButton();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateForeground@TabViewItem@@AEAAXXZ
    void UpdateForeground();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedBackgroundPathTranslateTransform@TabViewItem@@AEAAXXZ
    void UpdateSelectedBackgroundPathTranslateTransform();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateShadow@TabViewItem@@AEAAXXZ
    void UpdateShadow();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTabGeometry@TabViewItem@@AEAAXXZ
    void UpdateTabGeometry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateWidthModeVisualState@TabViewItem@@AEAAXXZ
    void UpdateWidthModeVisualState();
};
