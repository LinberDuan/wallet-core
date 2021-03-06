// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../PublicKey.h"
#include "../Ethereum/Address.h"
#include <array>
#include <stdint.h>
#include <vector>

namespace TW {
namespace Wanchain {
class Address: public Ethereum::Address {
public:
    using Ethereum::Address::Address;

    /// Returns a string representation of the address.
    std::string string() const;
};
}} // namespace

/// Wrapper for C interface.
struct TWWanchainAddress {
    TW::Wanchain::Address impl;
};
