#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 13 member(s).
class SelectedItemsVector {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@SelectedItemsVector@@QEAAXAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void Append(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Clear@SelectedItemsVector@@QEAAXXZ
    void Clear();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetView@SelectedItemsVector@@QEAA?AU?$IVectorView@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque GetView();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@SelectedItemsVector@@QEAAXIAEBUIInspectable@Foundation@Windows@winrt@@@Z
    void InsertAt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveAt@SelectedItemsVector@@QEAAXI@Z
    void RemoveAt(unsigned int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SelectedItemsVector@@UEAA@XZ
    virtual ~SelectedItemsVector();
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExternalTrackerHandleManager@SelectedItemsVector@@MEAAPEAUITrackerHandleManager@@XZ
    virtual ITrackerHandleManager * GetExternalTrackerHandleManager();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSender@SelectedItemsVector@@MEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    virtual WindissectOpaque GetVectorEventSender();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVectorEventSource@SelectedItemsVector@@MEAAPEAV?$event_source@U?$VectorChangedEventHandler@UIInspectable@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@@@XZ
    virtual WindissectOpaque * GetVectorEventSource();
};
