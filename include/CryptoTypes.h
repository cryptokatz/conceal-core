// Copyright (c) 2011-2016 The Cryptonote developers
// Copyright (c) 2016-2018 krypt0x aka krypt0chaos
// Copyright (c) 2018 The Circle Foundation
//
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <cstdint>

namespace Crypto {

struct Hash {
  uint8_t data[32];
};

struct PublicKey {
  uint8_t data[32];
};

struct SecretKey {
  uint8_t data[32];
};

struct KeyDerivation {
  uint8_t data[32];
};

struct KeyImage {
  uint8_t data[32];
};

struct Signature {
  uint8_t data[64];
};

}