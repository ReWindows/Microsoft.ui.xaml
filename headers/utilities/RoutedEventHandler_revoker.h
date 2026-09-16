#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 4 member(s).
class RoutedEventHandler_revoker {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RoutedEventHandler_revoker@@QEAA@AEBUUIElement@Xaml@UI@Windows@winrt@@URoutedEvent@2345@UIInspectable@Foundation@45@@Z
    RoutedEventHandler_revoker(WindissectOpaque const &, WindissectOpaque, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?revoke@RoutedEventHandler_revoker@@QEAAXXZ
    void revoke();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RoutedEventHandler_revoker@@QEAA@XZ
    ~RoutedEventHandler_revoker();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?move_from@RoutedEventHandler_revoker@@AEAAXAEAU1@@Z
    void move_from(RoutedEventHandler_revoker &);
};
