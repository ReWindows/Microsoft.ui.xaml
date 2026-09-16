#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class MonochromaticOverlayPresenter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MonochromaticOverlayPresenter@@QEAA@XZ
    MonochromaticOverlayPresenter();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@MonochromaticOverlayPresenter@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MonochromaticOverlayPresenter@@UEAA@XZ
    virtual ~MonochromaticOverlayPresenter();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateBrush@MonochromaticOverlayPresenter@@AEAAXXZ
    void InvalidateBrush();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateBrush@MonochromaticOverlayPresenter@@AEAAXXZ
    void UpdateBrush();
};
