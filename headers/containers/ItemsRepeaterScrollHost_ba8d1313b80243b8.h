#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 19 member(s).
class ItemsRepeaterScrollHost {
public:
    class BringIntoViewState;
    class CandidateInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ItemsRepeaterScrollHost@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRelativeViewport@ItemsRepeaterScrollHost@@QEAA?AURect@Foundation@Windows@winrt@@AEBUUIElement@Xaml@UI@45@@Z
    WindissectOpaque GetRelativeViewport(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsRepeaterScrollHost@@QEAA@XZ
    ItemsRepeaterScrollHost();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RegisterAnchorCandidate@ItemsRepeaterScrollHost@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void RegisterAnchorCandidate(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollViewer@ItemsRepeaterScrollHost@@QEAAXAEBU0Controls@Xaml@UI@Windows@winrt@@@Z
    void ScrollViewer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ScrollViewer@ItemsRepeaterScrollHost@@QEAA?AU0Controls@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque ScrollViewer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnregisterAnchorCandidate@ItemsRepeaterScrollHost@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void UnregisterAnchorCandidate(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsRepeaterScrollHost@@UEAA@XZ
    virtual ~ItemsRepeaterScrollHost();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ApplyPendingChangeView@ItemsRepeaterScrollHost@@AEAAXAEBUScrollViewer@Controls@Xaml@UI@Windows@winrt@@@Z
    void ApplyPendingChangeView(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAnchorElement@ItemsRepeaterScrollHost@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@PEAURect@Foundation@56@@Z
    WindissectOpaque GetAnchorElement(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?HasPendingBringIntoView@ItemsRepeaterScrollHost@@AEBA_NXZ
    bool HasPendingBringIntoView() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerSizeChanged@ItemsRepeaterScrollHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSizeChangedEventArgs@Xaml@UI@45@@Z
    void OnScrollViewerSizeChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanged@ItemsRepeaterScrollHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollViewerViewChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnScrollViewerViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnScrollViewerViewChanging@ItemsRepeaterScrollHost@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUScrollViewerViewChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnScrollViewerViewChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackElement@ItemsRepeaterScrollHost@@AEAANAEBUUIElement@Xaml@UI@Windows@winrt@@URect@Foundation@56@AEBUScrollViewer@Controls@3456@@Z
    double TrackElement(WindissectOpaque const &, WindissectOpaque, WindissectOpaque const &);
};
