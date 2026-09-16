#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 12 member(s).
class SwipeItem {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?GenerateControl@SwipeItem@@QEAAXAEBUAppBarButton@Controls@Xaml@UI@Windows@winrt@@AEBUStyle@4567@@Z
    void GenerateControl(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeSwipe@SwipeItem@@QEAAXAEBUSwipeControl@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void InvokeSwipe(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@SwipeItem@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SwipeItem@@QEAA@XZ
    SwipeItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AttachEventHandlers@SwipeItem@@AEAAXAEBUAppBarButton@Controls@Xaml@UI@Windows@winrt@@@Z
    void AttachEventHandlers(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCommandChanged@SwipeItem@@AEAAXAEBUICommand@Input@Xaml@UI@Windows@winrt@@0@Z
    void OnCommandChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTapped@SwipeItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUTappedRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnItemTapped(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPointerPressed@SwipeItem@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUPointerRoutedEventArgs@Input@Xaml@UI@45@@Z
    void OnPointerPressed(WindissectOpaque const &, WindissectOpaque const &);
};
