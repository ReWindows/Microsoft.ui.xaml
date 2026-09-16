#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 24 member(s).
class ScrollPresenterTestHooks {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreAnchorNotificationsRaised@ScrollPresenterTestHooks@@SA_NXZ
    static bool AreAnchorNotificationsRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreExpressionAnimationStatusNotificationsRaised@ScrollPresenterTestHooks@@SA_NXZ
    static bool AreExpressionAnimationStatusNotificationsRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AreInteractionSourcesNotificationsRaised@ScrollPresenterTestHooks@@SA_NXZ
    static bool AreInteractionSourcesNotificationsRaised();
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureGlobalTestHooks@ScrollPresenterTestHooks@@SA?AU?$com_ptr@VScrollPresenterTestHooks@@@winrt@@XZ
    static WindissectOpaque EnsureGlobalTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetGlobalTestHooks@ScrollPresenterTestHooks@@SA?AU?$com_ptr@VScrollPresenterTestHooks@@@winrt@@XZ
    static WindissectOpaque GetGlobalTestHooks();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOffsetsChangeVelocityParameters@ScrollPresenterTestHooks@@SAXAEAH00@Z
    static void GetOffsetsChangeVelocityParameters(int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVerticalSnapPointActualApplicableZone@ScrollPresenterTestHooks@@SA?AUfloat2@Numerics@Foundation@Windows@winrt@@AEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@6@AEBUScrollSnapPointBase@89Xaml@UI@Microsoft@6@@Z
    static WindissectOpaque GetVerticalSnapPointActualApplicableZone(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetZoomFactorChangeVelocityParameters@ScrollPresenterTestHooks@@SAXAEAH00@Z
    static void GetZoomFactorChangeVelocityParameters(int &, int &, int &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsAnimationsEnabledOverride@ScrollPresenterTestHooks@@SA?AU?$IReference@_N@Foundation@Windows@winrt@@XZ
    static WindissectOpaque IsAnimationsEnabledOverride();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsInteractionTrackerPointerWheelRedirectionEnabled@ScrollPresenterTestHooks@@SA_NXZ
    static bool IsInteractionTrackerPointerWheelRedirectionEnabled();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelDeltaForVelocityUnit@ScrollPresenterTestHooks@@SAHXZ
    static int MouseWheelDeltaForVelocityUnit();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelInertiaDecayRate@ScrollPresenterTestHooks@@SAMXZ
    static float MouseWheelInertiaDecayRate();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelInertiaDecayRate@ScrollPresenterTestHooks@@SAXM@Z
    static void MouseWheelInertiaDecayRate(float);
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelScrollChars@ScrollPresenterTestHooks@@SAHXZ
    static int MouseWheelScrollChars();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MouseWheelScrollLines@ScrollPresenterTestHooks@@SAHXZ
    static int MouseWheelScrollLines();
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyAnchorEvaluated@ScrollPresenterTestHooks@@SAXAEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUUIElement@56Windows@8@NN@Z
    static void NotifyAnchorEvaluated(WindissectOpaque const &, WindissectOpaque const &, double, double);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentLayoutOffsetXChanged@ScrollPresenterTestHooks@@SAXAEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    static void NotifyContentLayoutOffsetXChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyContentLayoutOffsetYChanged@ScrollPresenterTestHooks@@SAXAEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@@Z
    static void NotifyContentLayoutOffsetYChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?NotifyInteractionSourcesChanged@ScrollPresenterTestHooks@@SAXAEBUScrollPresenter@Primitives@Controls@Xaml@UI@Microsoft@winrt@@AEBUCompositionInteractionSourceCollection@Interactions@Composition@6Windows@8@@Z
    static void NotifyInteractionSourcesChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ScrollPresenterTestHooks@@QEAA@XZ
    ScrollPresenterTestHooks();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ScrollPresenterTestHooks@@UEAA@XZ
    virtual ~ScrollPresenterTestHooks();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TestHooksViewChangeResult@ScrollPresenterTestHooks@@CA?AW4ScrollPresenterViewChangeResult@Controls@Private@UI@Microsoft@winrt@@W42@@Z
    static int TestHooksViewChangeResult(int);
};
