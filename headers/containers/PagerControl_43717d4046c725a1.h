#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 33 member(s).
class PagerControl {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@PagerControl@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@PagerControl@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDisplayModeChanged@PagerControl@@QEAAXXZ
    void OnDisplayModeChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNumberOfPagesChanged@PagerControl@@QEAAXH@Z
    void OnNumberOfPagesChanged(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@PagerControl@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectedPageIndexChange@PagerControl@@QEAAXH@Z
    void OnSelectedPageIndexChange(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0PagerControl@@QEAA@XZ
    PagerControl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDisplayModeAutoState@PagerControl@@QEAAXXZ
    void UpdateDisplayModeAutoState();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1PagerControl@@UEAA@XZ
    virtual ~PagerControl();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendButtonToNumberPanelList@PagerControl@@AEAAXHH@Z
    void AppendButtonToNumberPanelList(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AppendEllipsisIconToNumberPanelList@PagerControl@@AEAAXXZ
    void AppendEllipsisIconToNumberPanelList();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ComboBoxSelectionChanged@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void ComboBoxSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FillComboBoxCollectionToSize@PagerControl@@AEAAXH@Z
    void FillComboBoxCollectionToSize(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FirstButtonClicked@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void FirstButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LastButtonClicked@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void LastButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveIdentifierToElement@PagerControl@@AEAAXH@Z
    void MoveIdentifierToElement(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NextButtonClicked@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void NextButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NumberBoxValueChanged@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNumberBoxValueChangedEventArgs@Controls@Xaml@UI@Microsoft@5@@Z
    void NumberBoxValueChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnRootGridKeyDown@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUKeyRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnRootGridKeyDown(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PreviousButtonClicked@PagerControl@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void PreviousButtonClicked(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectedIndexChanged@PagerControl@@AEAAXXZ
    void RaiseSelectedIndexChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberOfPanelCollectionInfiniteItems@PagerControl@@AEAAXXZ
    void UpdateNumberOfPanelCollectionInfiniteItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberPanel@PagerControl@@AEAAXH@Z
    void UpdateNumberPanel(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberPanelCollectionAllItems@PagerControl@@AEAAXH@Z
    void UpdateNumberPanelCollectionAllItems(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberPanelCollectionCenterWithEllipsis@PagerControl@@AEAAXHH@Z
    void UpdateNumberPanelCollectionCenterWithEllipsis(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberPanelCollectionEndWithEllipsis@PagerControl@@AEAAXHH@Z
    void UpdateNumberPanelCollectionEndWithEllipsis(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNumberPanelCollectionStartWithEllipsis@PagerControl@@AEAAXHH@Z
    void UpdateNumberPanelCollectionStartWithEllipsis(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateOnEdgeButtonVisualStates@PagerControl@@AEAAXXZ
    void UpdateOnEdgeButtonVisualStates();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateTemplateSettingElementLists@PagerControl@@AEAAXXZ
    void UpdateTemplateSettingElementLists();
};
