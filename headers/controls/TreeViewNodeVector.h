#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 18 member(s).
class TreeViewNodeVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@TreeViewNodeVector@@QEAAXAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void Append(WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@TreeViewNodeVector@@QEAAX_N0@Z
    void Clear(bool, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@TreeViewNodeVector@@QEAA?AU?$IVectorView@UTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetView();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetWritableParentItemsSource@TreeViewNodeVector@@QEAA?AUIBindableVector@Interop@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque GetWritableParentItemsSource();
    // Category: Method | Source: PDB Internal
    // Symbol: ?IndexOf@TreeViewNodeVector@@QEAA_NAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@AEAI@Z
    bool IndexOf(WindissectOpaque const &, unsigned int &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@TreeViewNodeVector@@QEAAXIAEBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@_N@Z
    void InsertAt(unsigned int, WindissectOpaque const &, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@TreeViewNodeVector@@QEAAXI_N0@Z
    void RemoveAt(unsigned int, bool, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAll@TreeViewNodeVector@@QEAAXU?$array_view@$$CBUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@winrt@@_N@Z
    void ReplaceAll(WindissectOpaque, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetParent@TreeViewNodeVector@@QEAAXUTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void SetParent(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0TreeViewNodeVector@@QEAA@XZ
    TreeViewNodeVector();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1TreeViewNodeVector@@UEAA@XZ
    virtual ~TreeViewNodeVector();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalTrackerHandleManager@TreeViewNodeVector@@MEAAPEAUITrackerHandleManager@@XZ
    virtual ITrackerHandleManager * GetExternalTrackerHandleManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSender@TreeViewNodeVector@@MEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetVectorEventSender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSource@TreeViewNodeVector@@MEAAPEAV?$event_source@U?$VectorChangedEventHandler@UTreeViewNode@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@@@XZ
    virtual WindissectOpaque * GetVectorEventSource();
};
