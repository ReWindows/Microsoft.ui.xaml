#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 5 member(s).
class BreadcrumbIterator {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BreadcrumbIterator@@QEAA@AEBUIInspectable@Foundation@Windows@winrt@@@Z
    BreadcrumbIterator(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Current@BreadcrumbIterator@@QEAA?AUIInspectable@Foundation@Windows@winrt@@XZ
    WindissectOpaque Current();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MoveNext@BreadcrumbIterator@@QEAA_NXZ
    bool MoveNext();
};
