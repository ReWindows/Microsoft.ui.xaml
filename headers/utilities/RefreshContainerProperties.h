#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 7 member(s).
class RefreshContainerProperties {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureProperties@RefreshContainerProperties@@SAXXZ
    static void EnsureProperties();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPullDirectionPropertyChanged@RefreshContainerProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnPullDirectionPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnVisualizerPropertyChanged@RefreshContainerProperties@@SAXAEBUDependencyObject@Xaml@UI@Windows@winrt@@AEBUDependencyPropertyChangedEventArgs@3456@@Z
    static void OnVisualizerPropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PullDirection@RefreshContainerProperties@@QEAA?AW4RefreshPullDirection@Controls@Xaml@UI@Microsoft@winrt@@XZ
    int PullDirection();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visualizer@RefreshContainerProperties@@QEAAXAEBURefreshVisualizer@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void Visualizer(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Visualizer@RefreshContainerProperties@@QEAA?AURefreshVisualizer@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque Visualizer();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RefreshContainerProperties@@QEAA@XZ
    ~RefreshContainerProperties();
};
