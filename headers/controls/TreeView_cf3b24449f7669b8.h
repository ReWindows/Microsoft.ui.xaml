#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 24 member(s).
class TreeView {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ContainerFromNode@TreeView@@QEBA?AUDependencyObject@Xaml@UI@Windows@winrt@@AEBUTreeViewNode@Controls@34Microsoft@6@@Z
    WindissectOpaque ContainerFromNode(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?NodeFromContainer@TreeView@@QEBA?AUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUDependencyObject@45Windows@7@@Z
    WindissectOpaque NodeFromContainer(WindissectOpaque const &) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnApplyTemplate@TreeView@@QEAAXXZ
    void OnApplyTemplate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnContainerContentChanging@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUContainerContentChangingEventArgs@Controls@Xaml@UI@45@@Z
    void OnContainerContentChanging(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemClick@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUItemClickEventArgs@Controls@Xaml@UI@45@@Z
    void OnItemClick(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListControlDragItemsCompleted@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsCompletedEventArgs@Controls@Xaml@UI@45@@Z
    void OnListControlDragItemsCompleted(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListControlDragItemsStarting@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUDragItemsStartingEventArgs@Controls@Xaml@UI@45@@Z
    void OnListControlDragItemsStarting(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnListControlSelectionChanged@TreeView@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUSelectionChangedEventArgs@Controls@Xaml@UI@45@@Z
    void OnListControlSelectionChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNodeCollapsed@TreeView@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void OnNodeCollapsed(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnNodeExpanding@TreeView@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void OnNodeExpanding(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@TreeView@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RaiseSelectionChanged@TreeView@@QEAAXU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@0@Z
    void RaiseSelectionChanged(WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectAll@TreeView@@QEAAXXZ
    void SelectAll();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItems@TreeView@@QEAA?AU?$IVector@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque SelectedItems();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedNode@TreeView@@QEAA?AUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque SelectedNode();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedNodes@TreeView@@QEAA?AU?$IVector@UTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque SelectedNodes();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeView@@QEAA@XZ
    TreeView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateItemsSelectionMode@TreeView@@QEAAX_N@Z
    void UpdateItemsSelectionMode(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSelection@TreeView@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void UpdateSelection(WindissectOpaque const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeView@@UEAA@XZ
    virtual ~TreeView();
};
