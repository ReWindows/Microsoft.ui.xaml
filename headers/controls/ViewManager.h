#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 20 member(s).
class ViewManager {
public:
    class PinnedElementInfo;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElement@ViewManager@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    void ClearElement(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementToElementFactory@ViewManager@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void ClearElementToElementFactory(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElement@ViewManager@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H_N0@Z
    WindissectOpaque GetElement(int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@ViewManager@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnItemsSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanging@ViewManager@@QEAAXXZ
    void OnLayoutChanging();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RecycleWithoutOwner@ViewManager@@QEAAX_N@Z
    void RecycleWithoutOwner(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdatePin@ViewManager@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@_N@Z
    void UpdatePin(WindissectOpaque const &, bool);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewManager@@QEAA@PEAVItemsRepeater@@@Z
    ViewManager(ItemsRepeater *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewManager@@QEAA@XZ
    ~ViewManager();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementToAnimator@ViewManager@@AEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBU?$com_ptr@VVirtualizationInfo@@@6@@Z
    bool ClearElementToAnimator(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementToPinnedPool@ViewManager@@AEAA_NAEBUUIElement@Xaml@UI@Windows@winrt@@AEBU?$com_ptr@VVirtualizationInfo@@@6@_N@Z
    bool ClearElementToPinnedPool(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureFirstLastRealizedIndices@ViewManager@@AEAAXXZ
    void EnsureFirstLastRealizedIndices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindFocusCandidate@ViewManager@@AEAA?AUControl@Controls@Xaml@UI@Windows@winrt@@HAEAUUIElement@4567@@Z
    WindissectOpaque FindFocusCandidate(int, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromElementFactory@ViewManager@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementFromElementFactory(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromPinnedElements@ViewManager@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementFromPinnedElements(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromUniqueIdResetPool@ViewManager@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementFromUniqueIdResetPool(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementIfAlreadyHeldByLayout@ViewManager@@AEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementIfAlreadyHeldByLayout(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveFocusFromClearedIndex@ViewManager@@AEAAXH@Z
    void MoveFocusFromClearedIndex(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnFocusChanged@ViewManager@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnFocusChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateFocusedElement@ViewManager@@AEAAXXZ
    void UpdateFocusedElement();
};
