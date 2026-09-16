#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 13 member(s).
class SwipeItems {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Append@SwipeItems@@QEAAXAEBUSwipeItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void Append(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?First@SwipeItems@@QEAA?AU?$IIterator@USwipeItem@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@XZ
    WindissectOpaque First();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMany@SwipeItems@@QEAAIIU?$array_view@USwipeItem@Controls@Xaml@UI@Microsoft@winrt@@@winrt@@@Z
    unsigned int GetMany(unsigned int, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InsertAt@SwipeItems@@QEAAXIAEBUSwipeItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void InsertAt(unsigned int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SwipeItems@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReplaceAll@SwipeItems@@QEAAXU?$array_view@$$CBUSwipeItem@Controls@Xaml@UI@Microsoft@winrt@@@winrt@@@Z
    void ReplaceAll(WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwipeItems@@QEAA@XZ
    SwipeItems();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SwipeItems@@UEAA@XZ
    virtual ~SwipeItems();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Items@SwipeItems@@AEAAXAEBU?$IVector@USwipeItem@Controls@Xaml@UI@Microsoft@winrt@@@Collections@Foundation@Windows@winrt@@@Z
    void put_Items(WindissectOpaque const &);
};
