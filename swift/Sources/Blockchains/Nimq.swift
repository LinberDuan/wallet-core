// Copyright © 2017-2019 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

import Foundation

public typealias TWNimiqSigningInput = TW_Nimiq_Proto_SigningInput
public typealias TWNimiqSigningOutput = TW_Nimiq_Proto_SigningOutput

extension NimiqAddress: Address {
    public var data: Data {
        return keyHash
    }
}
