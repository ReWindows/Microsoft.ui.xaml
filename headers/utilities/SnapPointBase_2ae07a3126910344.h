#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 9 member(s).
class SnapPointBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateExpressionAnimationForImpulse@SnapPointBase@@QEBAXAEBUExpressionAnimation@Composition@UI@Windows@winrt@@_N@Z
    void UpdateExpressionAnimationForImpulse(WindissectOpaque const &, bool) const;
protected:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsInertiaFromImpulseExpression@SnapPointBase@@IEBA?AUhstring@winrt@@AEBU23@@Z
    WindissectOpaque GetIsInertiaFromImpulseExpression(WindissectOpaque const &) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTargetExpression@SnapPointBase@@IEBA?AUhstring@winrt@@AEBU23@@Z
    WindissectOpaque GetTargetExpression(WindissectOpaque const &) const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SnapPointBase@@IEAA@XZ
    SnapPointBase();
};
