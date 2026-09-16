#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 31 member(s).
class ScrollBarController {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddScrollVelocityRequested@ScrollBarController@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@UScrollControllerAddScrollVelocityRequestedEventArgs@234567@@Foundation@Windows@3@@Z
    WindissectOpaque AddScrollVelocityRequested(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetScrollAnimation@ScrollBarController@@QEAA?AUCompositionAnimation@Composition@UI@Windows@winrt@@HAEBUfloat2@Numerics@Foundation@56@AEBU23456@@Z
    WindissectOpaque GetScrollAnimation(int, WindissectOpaque &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionInfoChanged@ScrollBarController@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@UIInspectable@Foundation@Windows@7@@Foundation@Windows@3@@Z
    WindissectOpaque InteractionInfoChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InteractionRequested@ScrollBarController@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@UScrollControllerInteractionRequestedEventArgs@234567@@Foundation@Windows@3@@Z
    WindissectOpaque InteractionRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyScrollCompleted@ScrollBarController@@QEAAXH@Z
    void NotifyScrollCompleted(int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollBarController@@QEAA@XZ
    ScrollBarController();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollByRequested@ScrollBarController@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@UScrollControllerScrollByRequestedEventArgs@234567@@Foundation@Windows@3@@Z
    WindissectOpaque ScrollByRequested(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollToRequested@ScrollBarController@@QEAA?AUevent_token@winrt@@AEBU?$TypedEventHandler@UIScrollController@Primitives@Controls@Xaml@UI@Microsoft@winrt@@UScrollControllerScrollToRequestedEventArgs@234567@@Foundation@Windows@3@@Z
    WindissectOpaque ScrollToRequested(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetExpressionAnimationSources@ScrollBarController@@QEAAXAEBUCompositionPropertySet@Composition@UI@Windows@winrt@@AEBUhstring@6@111@Z
    void SetExpressionAnimationSources(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollBar@ScrollBarController@@QEAAXAEBUScrollBar@Primitives@Controls@Xaml@UI@Windows@winrt@@@Z
    void SetScrollBar(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetScrollMode@ScrollBarController@@QEAAXAEBW4ScrollingScrollMode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetScrollMode(int const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValues@ScrollBarController@@QEAAXNNNN@Z
    void SetValues(double, double, double, double);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollBarController@@UEAA@XZ
    virtual ~ScrollBarController();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollBarEvent@ScrollBarController@@AEAAXXZ
    void HookScrollBarEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?HookScrollBarPropertyChanged@ScrollBarController@@AEAAXXZ
    void HookScrollBarPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScroll@ScrollBarController@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollEventArgs@Primitives@Controls@Xaml@UI@45@@Z
    void OnScroll(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollBarPropertyChanged@ScrollBarController@@AEAAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyProperty@3456@@Z
    void OnScrollBarPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseAddScrollVelocityRequested@ScrollBarController@@AEAA_NN@Z
    bool RaiseAddScrollVelocityRequested(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseInteractionInfoChanged@ScrollBarController@@AEAAXXZ
    void RaiseInteractionInfoChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseScrollByRequested@ScrollBarController@@AEAA_NN@Z
    bool RaiseScrollByRequested(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseScrollToRequested@ScrollBarController@@AEAA_NN@Z
    bool RaiseScrollToRequested(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollBarEvent@ScrollBarController@@AEAAXXZ
    void UnhookScrollBarEvent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnhookScrollBarPropertyChanged@ScrollBarController@@AEAAXXZ
    void UnhookScrollBarPropertyChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAreScrollControllerInteractionsAllowed@ScrollBarController@@AEAAXXZ
    void UpdateAreScrollControllerInteractionsAllowed();
};
