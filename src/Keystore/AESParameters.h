// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Data.h"

#include <nlohmann/json.hpp>

namespace TW {
namespace Keystore {

// AES128 parameters.
struct AESParameters {
    static const std::size_t blockSize = 128 / 8;

    Data iv;

    /// Initializes `AESParameters` with a random `iv` for AES 128.
    AESParameters();

    /// Initializes `AESParameters` with a JSON object.
    AESParameters(const nlohmann::json& json);

    /// Saves `this` as a JSON object.
    nlohmann::json json() const;
};

}} // namespace
