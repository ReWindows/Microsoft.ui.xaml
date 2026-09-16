#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 25 member(s).
class SelectionModel {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnchorIndex@SelectionModel@@QEAAXAEBUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void AnchorIndex(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnchorIndex@SelectionModel@@QEAA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque AnchorIndex();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelected@SelectionModel@@QEAA?AU?$IReference@_N@Foundation@Windows@winrt@@HH@Z
    WindissectOpaque IsSelected(int, int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSelectedAt@SelectionModel@@QEAA?AU?$IReference@_N@Foundation@Windows@winrt@@AEBUIndexPath@Controls@Xaml@UI@Microsoft@5@@Z
    WindissectOpaque IsSelectedAt(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ResolvePath@SelectionModel@@QEAA?AUIInspectable@Foundation@Windows@winrt@@AEBU2345@AEBUIndexPath@Controls@Xaml@UI@Microsoft@5@@Z
    WindissectOpaque ResolvePath(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedIndex@SelectionModel@@QEAA?AUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque SelectedIndex();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedIndices@SelectionModel@@QEAA?AU?$IVectorView@UIndexPath@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque SelectedIndices();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItem@SelectionModel@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque SelectedItem();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectedItems@SelectionModel@@QEAA?AU?$IVectorView@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque SelectedItems();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SelectionModel@@QEAA@XZ
    SelectionModel();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SingleSelect@SelectionModel@@QEAAX_N@Z
    void SingleSelect(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@SelectionModel@@QEAA?AUTypeName@Interop@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque Type();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectionModel@@UEAA@XZ
    virtual ~SelectionModel();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearSelection@SelectionModel@@AEAAX_N0@Z
    void ClearSelection(bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSelectionChanged@SelectionModel@@AEAAXXZ
    void OnSelectionChanged();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectImpl@SelectionModel@@AEAAXH_N@Z
    void SelectImpl(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRangeFromAnchorImpl@SelectionModel@@AEAAXH_N@Z
    void SelectRangeFromAnchorImpl(int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRangeFromAnchorWithGroupImpl@SelectionModel@@AEAAXHH_N@Z
    void SelectRangeFromAnchorWithGroupImpl(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectRangeImpl@SelectionModel@@AEAAXAEBUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@0_N@Z
    void SelectRangeImpl(WindissectOpaque const &, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectWithGroupImpl@SelectionModel@@AEAAXHH_N@Z
    void SelectWithGroupImpl(int, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?SelectWithPathImpl@SelectionModel@@AEAAXAEBUIndexPath@Controls@Xaml@UI@Microsoft@winrt@@_N1@Z
    void SelectWithPathImpl(WindissectOpaque const &, bool, bool);
};
