#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 3 member(s).
class SystemBackdropComponentInternal {
public:
    class BaseWindowHandler;
    class CompositionCapabilitiesChanged_revoker;
    class CoreWindowHandler;
    class ISystemBackdropController;
    class XamlWindowHandler;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildMicaEffectBrush@SystemBackdropComponentInternal@@YA?AUCompositionBrush@Composition@UI@Windows@winrt@@AEBUCompositor@3456@UColor@456@MM@Z
    WindissectOpaque BuildMicaEffectBrush(WindissectOpaque const &, WindissectOpaque, float, float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossFadeAnimation@SystemBackdropComponentInternal@@YA?AUScalarKeyFrameAnimation@Composition@UI@Windows@winrt@@AEBUCompositor@3456@@Z
    WindissectOpaque CreateCrossFadeAnimation(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateCrossFadeEffectBrush@SystemBackdropComponentInternal@@YA?AUCompositionBrush@Composition@UI@Windows@winrt@@AEBUCompositor@3456@AEBU23456@1@Z
    WindissectOpaque CreateCrossFadeEffectBrush(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
};
