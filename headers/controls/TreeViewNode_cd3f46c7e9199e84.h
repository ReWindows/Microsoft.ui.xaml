#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 20 member(s).
class TreeViewNode {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ChildVectorChanged@TreeViewNode@@QEAAXAEBU?$IObservableVector@UTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@AEBUIInspectable@456@@Z
    void ChildVectorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemsSource@TreeViewNode@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void ItemsSource(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeViewNode@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewNode@@QEAA@XZ
    TreeViewNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@TreeViewNode@@QEAA?AUTypeName@Interop@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Type();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDepth@TreeViewNode@@QEAAXH@Z
    void UpdateDepth(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateHasChildren@TreeViewNode@@QEAAXXZ
    void UpdateHasChildren();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ParentImpl@TreeViewNode@@QEAA?AU1Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque get_ParentImpl();
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_ParentImpl@TreeViewNode@@QEAAXAEBU1Controls@Xaml@UI@Microsoft@winrt@@@Z
    void put_ParentImpl(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewNode@@UEAA@XZ
    virtual ~TreeViewNode();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AddToChildrenNodes@TreeViewNode@@AEAAXHH@Z
    void AddToChildrenNodes(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreChildrenNodesEqualToItemsSource@TreeViewNode@@AEAA_NXZ
    bool AreChildrenNodesEqualToItemsSource();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetContentAsString@TreeViewNode@@AEAA?AUhstring@winrt@@XZ
    WindissectOpaque GetContentAsString();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceChanged@TreeViewNode@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnItemsSourceChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveFromChildrenNodes@TreeViewNode@@AEAAXHH@Z
    void RemoveFromChildrenNodes(int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncChildrenNodesWithItemsSource@TreeViewNode@@AEAAXXZ
    void SyncChildrenNodesWithItemsSource();
};
