#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 12 member(s).
class ToggleSplitButton {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalIsChecked@ToggleSplitButton@@UEAA_NXZ
    virtual bool InternalIsChecked();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnClickPrimary@ToggleSplitButton@@UEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    virtual void OnClickPrimary(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreateAutomationPeer@ToggleSplitButton@@UEAA?AUAutomationPeer@Peers@Automation@Xaml@UI@Windows@winrt@@XZ
    virtual WindissectOpaque OnCreateAutomationPeer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ToggleSplitButton@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@ToggleSplitButton@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Toggle@ToggleSplitButton@@QEAAXXZ
    void Toggle();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ToggleSplitButton@@QEAA@XZ
    ToggleSplitButton();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnIsCheckedChanged@ToggleSplitButton@@AEAAXXZ
    void OnIsCheckedChanged();
};
