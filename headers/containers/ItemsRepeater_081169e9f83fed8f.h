#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 33 member(s).
class ItemsRepeater {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ArrangeOverride@ItemsRepeater@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque ArrangeOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ClearElementImpl@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void ClearElementImpl(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateAndInitializeVirtualizationInfo@ItemsRepeater@@SA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    static WindissectOpaque CreateAndInitializeVirtualizationInfo(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementFromIndexImpl@ItemsRepeater@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetElementFromIndexImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetElementIndexImpl@ItemsRepeater@@QEAAHAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    int GetElementIndexImpl(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetOrCreateElementImpl@ItemsRepeater@@QEAA?AUUIElement@Xaml@UI@Windows@winrt@@H@Z
    WindissectOpaque GetOrCreateElementImpl(int);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationInfo@ItemsRepeater@@SA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    static WindissectOpaque GetVirtualizationInfo(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVirtualizationInfoProperty@ItemsRepeater@@SA?AUDependencyProperty@Xaml@UI@Windows@winrt@@XZ
    static WindissectOpaque GetVirtualizationInfoProperty();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ItemTemplateShim@ItemsRepeater@@QEAA?AUIElementFactoryShim@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque ItemTemplateShim();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ItemsRepeater@@QEAA@XZ
    ItemsRepeater();
    // Category: Method | Source: PDB Internal
    // Symbol: ?MeasureOverride@ItemsRepeater@@QEAA?AUSize@Foundation@Windows@winrt@@AEBU2345@@Z
    WindissectOpaque MeasureOverride(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementClearing@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@@Z
    void OnElementClearing(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementIndexChanged@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@HH@Z
    void OnElementIndexChanged(WindissectOpaque const &, int, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnElementPrepared@ItemsRepeater@@QEAAXAEBUUIElement@Xaml@UI@Windows@winrt@@H@Z
    void OnElementPrepared(WindissectOpaque const &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnPropertyChanged@ItemsRepeater@@QEAAXAEBUDependencyPropertyChangedEventArgs@Xaml@UI@Windows@winrt@@@Z
    void OnPropertyChanged(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetVirtualizationInfo@ItemsRepeater@@SA?AU?$com_ptr@VVirtualizationInfo@@@winrt@@AEBUUIElement@Xaml@UI@Windows@3@@Z
    static WindissectOpaque TryGetVirtualizationInfo(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ItemsRepeater@@UEAA@XZ
    virtual ~ItemsRepeater();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLayoutContext@ItemsRepeater@@AEAA?AUVirtualizingLayoutContext@Controls@Xaml@UI@Microsoft@winrt@@XZ
    WindissectOpaque GetLayoutContext();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateArrangeForLayout@ItemsRepeater@@AEAAXAEBULayout@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void InvalidateArrangeForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvalidateMeasureForLayout@ItemsRepeater@@AEAAXAEBULayout@Controls@Xaml@UI@Microsoft@winrt@@AEBUIInspectable@Foundation@Windows@7@@Z
    void InvalidateMeasureForLayout(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsProcessingCollectionChange@ItemsRepeater@@AEBA_NXZ
    bool IsProcessingCollectionChange() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAnimatorChanged@ItemsRepeater@@AEAAXAEBUElementAnimator@Controls@Xaml@UI@Microsoft@winrt@@0@Z
    void OnAnimatorChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDataSourcePropertyChanged@ItemsRepeater@@AEAAXAEBUItemsSourceView@Controls@Xaml@UI@Microsoft@winrt@@0@Z
    void OnDataSourcePropertyChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemTemplateChanged@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnItemTemplateChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnItemsSourceViewChanged@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBUNotifyCollectionChangedEventArgs@Interop@Xaml@UI@45@@Z
    void OnItemsSourceViewChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutChanged@ItemsRepeater@@AEAAXAEBULayout@Controls@Xaml@UI@Microsoft@winrt@@0@Z
    void OnLayoutChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLayoutUpdated@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@0@Z
    void OnLayoutUpdated(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnLoaded@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnLoaded(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnUnloaded@ItemsRepeater@@AEAAXAEBUIInspectable@Foundation@Windows@winrt@@AEBURoutedEventArgs@Xaml@UI@45@@Z
    void OnUnloaded(WindissectOpaque const &, WindissectOpaque const &);
};
