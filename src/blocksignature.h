// Copyright (c) 2016-2018 The PIVX developers
// Copyright (c) 2018 The MOKEN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MOKEN_BLOCKSIGNATURE_H
#define MOKEN_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //MOKEN_BLOCKSIGNATURE_H
