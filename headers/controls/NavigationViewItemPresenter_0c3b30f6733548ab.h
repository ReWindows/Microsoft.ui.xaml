#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 14 member(s).
class NavigationViewItemPresenter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GoToElementStateCore@NavigationViewItemPresenter@@QEAA_NAEBUhstring@winrt@@_N@Z
    bool GoToElementStateCore(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadChevron@NavigationViewItemPresenter@@QEAAXXZ
    void LoadChevron();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0NavigationViewItemPresenter@@QEAA@XZ
    NavigationViewItemPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@NavigationViewItemPresenter@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RotateExpandCollapseChevron@NavigationViewItemPresenter@@QEAAX_N@Z
    void RotateExpandCollapseChevron(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateClosedCompactVisualState@NavigationViewItemPresenter@@QEAAX_N0@Z
    void UpdateClosedCompactVisualState(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateCompactPaneLength@NavigationViewItemPresenter@@QEAAXN_N@Z
    void UpdateCompactPaneLength(double, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1NavigationViewItemPresenter@@UEAA@XZ
    virtual ~NavigationViewItemPresenter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNavigationViewItem@NavigationViewItemPresenter@@AEAAPEAVNavigationViewItem@@XZ
    NavigationViewItem * GetNavigationViewItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateMargin@NavigationViewItemPresenter@@AEAAXXZ
    void UpdateMargin();
};
