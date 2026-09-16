#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 10 member(s).
class MenuBar {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0MenuBar@@QEAA@XZ
    MenuBar();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@MenuBar@@QEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequestPassThroughElement@MenuBar@@QEAAXAEBUMenuBarItem@Controls@Xaml@UI@Microsoft@winrt@@@Z
    void RequestPassThroughElement(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MenuBar@@UEAA@XZ
    virtual ~MenuBar();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetUpTemplateParts@MenuBar@@AEAAXXZ
    void SetUpTemplateParts();
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateAutomationSizeAndPosition@MenuBar@@AEAAXXZ
    void UpdateAutomationSizeAndPosition();
};
