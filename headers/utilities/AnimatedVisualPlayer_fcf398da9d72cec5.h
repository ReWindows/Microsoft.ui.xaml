#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 24 member(s).
class AnimatedVisualPlayer {
public:
    class AnimationPlay;
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0AnimatedVisualPlayer@@QEAA@XZ
    AnimatedVisualPlayer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@AnimatedVisualPlayer@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@AnimatedVisualPlayer@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?PlayAsync@AnimatedVisualPlayer@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@NN_N@Z
    WindissectOpaque PlayAsync(double, double, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProgress@AnimatedVisualPlayer@@QEAAXN@Z
    void SetProgress(double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@AnimatedVisualPlayer@@QEAAXXZ
    void Stop();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1AnimatedVisualPlayer@@UEAA@XZ
    virtual ~AnimatedVisualPlayer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAnimations@AnimatedVisualPlayer@@AEAAXXZ
    void CreateAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?DestroyAnimations@AnimatedVisualPlayer@@AEAAXXZ
    void DestroyAnimations();
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadFallbackContent@AnimatedVisualPlayer@@AEAAXXZ
    void LoadFallbackContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAutoPlayPropertyChanged@AnimatedVisualPlayer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnAutoPlayPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnHiding@AnimatedVisualPlayer@@AEAAXXZ
    void OnHiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@AnimatedVisualPlayer@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSourcePropertyChanged@AnimatedVisualPlayer@@AEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnSourcePropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnhiding@AnimatedVisualPlayer@@AEAAXXZ
    void OnUnhiding();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@AnimatedVisualPlayer@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetFallbackContent@AnimatedVisualPlayer@@AEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void SetFallbackContent(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadContent@AnimatedVisualPlayer@@AEAAXXZ
    void UnloadContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UnloadFallbackContent@AnimatedVisualPlayer@@AEAAXXZ
    void UnloadFallbackContent();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateContent@AnimatedVisualPlayer@@AEAAXXZ
    void UpdateContent();
};
