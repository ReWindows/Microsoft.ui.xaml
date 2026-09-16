#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 18 member(s).
class ScrollPresenterAutomationPeer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Scroll@ScrollPresenterAutomationPeer@@QEAAXAEBW4ScrollAmount@Automation@Xaml@UI@Windows@winrt@@0@Z
    void Scroll(int const &, int const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollPresenterAutomationPeer@@QEAA@AEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    ScrollPresenterAutomationPeer(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollPercent@ScrollPresenterAutomationPeer@@QEAAXNN@Z
    void SetScrollPercent(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateScrollPatternProperties@ScrollPresenterAutomationPeer@@QEAAXXZ
    void UpdateScrollPatternProperties();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollPresenterAutomationPeer@@UEAA@XZ
    virtual ~ScrollPresenterAutomationPeer();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollPercent@ScrollPresenterAutomationPeer@@CANNNN@Z
    static double GetScrollPercent(double, double, double);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollPresenter@ScrollPresenterAutomationPeer@@AEAA?AUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetScrollPresenter();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetViewPercent@ScrollPresenterAutomationPeer@@CANNN@Z
    static double GetViewPercent(double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalScrollPercentImpl@ScrollPresenterAutomationPeer@@AEAANXZ
    double get_HorizontalScrollPercentImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontalViewSizeImpl@ScrollPresenterAutomationPeer@@AEAANXZ
    double get_HorizontalViewSizeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_HorizontallyScrollableImpl@ScrollPresenterAutomationPeer@@AEAA_NXZ
    bool get_HorizontallyScrollableImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalScrollPercentImpl@ScrollPresenterAutomationPeer@@AEAANXZ
    double get_VerticalScrollPercentImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticalViewSizeImpl@ScrollPresenterAutomationPeer@@AEAANXZ
    double get_VerticalViewSizeImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_VerticallyScrollableImpl@ScrollPresenterAutomationPeer@@AEAA_NXZ
    bool get_VerticallyScrollableImpl();
};
