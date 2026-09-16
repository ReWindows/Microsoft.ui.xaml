#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 49 member(s).
class ViewModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@ViewModel@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Append(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAssociatedNode@ViewModel@@QEAA?AUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@UIInspectable@Foundation@Windows@7@@Z
    WindissectOpaque GetAssociatedNode(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAt@ViewModel@@QEAA?AUIInspectable@Foundation@Windows@winrt@@I@Z
    WindissectOpaque GetAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@ViewModel@@QEAAIIU?$array_view@UIInspectable@Foundation@Windows@winrt@@@winrt@@@Z
    unsigned int GetMany(unsigned int, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNodeAt@ViewModel@@QEAA?AUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@I@Z
    WindissectOpaque GetNodeAt(unsigned int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@ViewModel@@QEAA?AU?$IVectorView@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@ViewModel@@QEAAXIAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void InsertAt(unsigned int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInSingleSelectionMode@ViewModel@@QEAA_NXZ
    bool IsInSingleSelectionMode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContainerOfSelectionChange@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBW4TreeNodeSelectionState@2@@Z
    void NotifyContainerOfSelectionChange(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PrepareView@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void PrepareView(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@ViewModel@@QEAAXI@Z
    void RemoveAt(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAtEnd@ViewModel@@QEAAXXZ
    void RemoveAtEnd();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectByIndex@ViewModel@@QEAAXHAEBW4TreeNodeSelectionState@TreeViewNode@@@Z
    void SelectByIndex(int, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectNode@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void SelectNode(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectSingleItem@ViewModel@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SelectSingleItem(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedNodeChildrenChanged@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void SelectedNodeChildrenChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetAt@ViewModel@@QEAAXIAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void SetAt(unsigned int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetOwners@ViewModel@@QEAAXAEBUTreeViewList@Controls@Xaml@UI@Microsoft@winrt@@AEBUTreeView@34567@@Z
    void SetOwners(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackItemSelected@ViewModel@@QEAAXUIInspectable@Foundation@Windows@winrt@@@Z
    void TrackItemSelected(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrackItemUnselected@ViewModel@@QEAAXUIInspectable@Foundation@Windows@winrt@@@Z
    void TrackItemUnselected(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeViewNodeHasChildrenPropertyChanged@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIDependencyPropertyChangedEventArgs@45Windows@7@@Z
    void TreeViewNodeHasChildrenPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeViewNodeIsExpandedPropertyChanged@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIDependencyPropertyChangedEventArgs@45Windows@7@@Z
    void TreeViewNodeIsExpandedPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeViewNodePropertyChanged@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIDependencyPropertyChangedEventArgs@45Windows@7@@Z
    void TreeViewNodePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TreeViewNodeVectorChanged@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void TreeViewNodeVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelection@ViewModel@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBW4TreeNodeSelectionState@2@@Z
    void UpdateSelection(WindissectOpaque const &, int const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ViewModel@@QEAA@XZ
    ViewModel();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ViewModel@@UEAA@XZ
    virtual ~ViewModel();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalTrackerHandleManager@ViewModel@@MEAAPEAUITrackerHandleManager@@XZ
    virtual ITrackerHandleManager * GetExternalTrackerHandleManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSender@ViewModel@@MEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetVectorEventSender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSource@ViewModel@@MEAAPEAV?$event_source@U?$VectorChangedEventHandler@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@@XZ
    virtual WindissectOpaque * GetVectorEventSource();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddNodeDescendantsToView@ViewModel@@AEAAHAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@IH@Z
    int AddNodeDescendantsToView(WindissectOpaque const &, unsigned int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BeginSelectionChanges@ViewModel@@AEAAXXZ
    void BeginSelectionChanges();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearEventTokenVectors@ViewModel@@AEAAXXZ
    void ClearEventTokenVectors();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CountDescendants@ViewModel@@AEAAHAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int CountDescendants(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EndSelectionChanges@ViewModel@@AEAAXXZ
    void EndSelectionChanges();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExpandedDescendantCount@ViewModel@@AEAAIAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    unsigned int GetExpandedDescendantCount(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextIndexInFlatTree@ViewModel@@AEAAHAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    int GetNextIndexInFlatTree(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRemovedChildTreeViewNodeByIndex@ViewModel@@AEAA?AUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBU234567@I@Z
    WindissectOpaque GetRemovedChildTreeViewNodeByIndex(WindissectOpaque const &, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOfNextSibling@ViewModel@@AEAAIAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    unsigned int IndexOfNextSibling(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNodeAndDescendantsFromView@ViewModel@@AEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RemoveNodeAndDescendantsFromView(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveNodesAndDescendentsWithFlatIndexRange@ViewModel@@AEAAXII@Z
    void RemoveNodesAndDescendentsWithFlatIndexRange(unsigned int, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectionStateBasedOnChildren@ViewModel@@AEAA?AW4TreeNodeSelectionState@TreeViewNode@@AEBU3Controls@Xaml@UI@Microsoft@winrt@@@Z
    int SelectionStateBasedOnChildren(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateNodeSelection@ViewModel@@AEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBW4TreeNodeSelectionState@2@@Z
    void UpdateNodeSelection(WindissectOpaque const &, int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionStateOfAncestors@ViewModel@@AEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void UpdateSelectionStateOfAncestors(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelectionStateOfDescendants@ViewModel@@AEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBW4TreeNodeSelectionState@2@@Z
    void UpdateSelectionStateOfDescendants(WindissectOpaque const &, int const &);
};
