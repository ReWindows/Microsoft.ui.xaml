#pragma once
#include "../windissect_forwards.h"

// Reconstructed from Microsoft.UI.Xaml.dll by Windissect. 223 member(s).
class winrt {
public:
    class apartment_context;
    class hresult;
    class hresult_access_denied;
    class hresult_canceled;
    class hresult_changed_state;
    class hresult_class_not_available;
    class hresult_class_not_registered;
    class hresult_error;
    class hresult_illegal_delegate_assignment;
    class hresult_illegal_method_call;
    class hresult_illegal_state_change;
    class hresult_invalid_argument;
    class hresult_no_interface;
    class hresult_not_implemented;
    class hresult_out_of_bounds;
    class hresult_wrong_thread;
    class hstring;
    class impl;
    class slim_lock_guard;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?box_value@winrt@@YA?AUIInspectable@Foundation@Windows@1@AEBUhstring@param@1@@Z
    WindissectOpaque box_value(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z
    void copy_from_abi(WindissectOpaque &, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_class_name@winrt@@YA?AUhstring@1@AEBUIInspectable@Foundation@Windows@1@@Z
    WindissectOpaque get_class_name(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_interfaces@winrt@@YA?AU?$com_array@Uguid@winrt@@@1@AEBUIInspectable@Foundation@Windows@1@@Z
    WindissectOpaque get_interfaces(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?throw_hresult@winrt@@YAXUhresult@1@@Z
    void throw_hresult(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?throw_last_error@winrt@@YAXXZ
    void throw_last_error();
    // Category: Method | Source: PDB Internal
    // Symbol: ?to_hresult@winrt@@YA?AUhresult@1@XZ
    WindissectOpaque to_hresult();
};
