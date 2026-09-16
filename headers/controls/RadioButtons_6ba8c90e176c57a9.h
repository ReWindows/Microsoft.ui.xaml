#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 35 member(s).
class RadioButtons {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@RadioButtons@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@RadioButtons@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@RadioButtons@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RadioButtons@@QEAA@XZ
    RadioButtons();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RadioButtons@@UEAA@XZ
    virtual ~RadioButtons();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachToLayoutChanged@RadioButtons@@AEAAXXZ
    void AttachToLayoutChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DetatchFromLayoutChanged@RadioButtons@@AEAAXXZ
    void DetatchFromLayoutChanged();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDataAtIndex@RadioButtons@@AEAA?AUIInspectable@Foundation@Windows@winrt@@H_N@Z
    WindissectOpaque GetDataAtIndex(int, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFindNextElementOptions@RadioButtons@@AEAA?AUFindNextElementOptions@Input@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetFindNextElementOptions();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetItemsSource@RadioButtons@@AEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetItemsSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayout@RadioButtons@@AEAA?AU?$com_ptr@VColumnMajorUniformToLargestGridLayout@@@winrt@@XZ
    WindissectOpaque GetLayout();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HandleEdgeCaseFocus@RadioButtons@@AEAA_N_NAEBUIInspectable@Foundation@Windows@winrt@@@Z
    bool HandleEdgeCaseFocus(bool, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocus@RadioButtons@@AEAA_NH@Z
    bool MoveFocus(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAccessKeyInvoked@RadioButtons@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@AEBUAccessKeyInvokedEventArgs@Input@3456@@Z
    void OnAccessKeyInvoked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildChecked@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnChildChecked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildPreviewKeyDown@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnChildPreviewKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnChildUnchecked@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnChildUnchecked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnGettingFocus@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUGettingFocusEventArgs@Input@Xaml@UI@45@@Z
    void OnGettingFocus(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsEnabledChanged@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@Xaml@UI@45@@Z
    void OnIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@RadioButtons@@AEAAXAEBUColumnMajorUniformToLargestGridLayout@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@8@@Z
    void OnLayoutChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterCollectionChanged@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnRepeaterCollectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterElementClearing@RadioButtons@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementClearingEventArgs@34567@@Z
    void OnRepeaterElementClearing(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterElementIndexChanged@RadioButtons@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementIndexChangedEventArgs@34567@@Z
    void OnRepeaterElementIndexChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterElementPrepared@RadioButtons@@AEAAXAEBUItemsRepeater@Controls@Xaml@UI@Microsoft@winrt@@AEBUItemsRepeaterElementPreparedEventArgs@34567@@Z
    void OnRepeaterElementPrepared(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRepeaterLoaded@RadioButtons@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnRepeaterLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Select@RadioButtons@@AEAAXH@Z
    void Select(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemTemplate@RadioButtons@@AEAAXXZ
    void UpdateItemTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsSource@RadioButtons@@AEAAXXZ
    void UpdateItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedIndex@RadioButtons@@AEAAXXZ
    void UpdateSelectedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectedItem@RadioButtons@@AEAAXXZ
    void UpdateSelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateVisualStateForIsEnabledChange@RadioButtons@@AEAAXXZ
    void UpdateVisualStateForIsEnabledChange();
};
