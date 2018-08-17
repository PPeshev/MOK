// Copyright (c) 2018 The MOKEN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MOKEN_ACCUMULATORCHECKPOINTS_JSON_H
#define MOKEN_ACCUMULATORCHECKPOINTS_JSON_H

#include <string>
std::string GetMainCheckpoints() {
    std::string strMainCheckpoints = "[\n"
            "]";
    return strMainCheckpoints;
}

std::string GetTestCheckpoints() {
    std::string strTestCheckpoints = "[\n"
            "  {\n"
            "]";
    return strTestCheckpoints;
}

std::string GetRegTestCheckpoints() {
    std::string strRegTestCheckpoints = "[\n"
            "  {\n"
            "]";
    return strRegTestCheckpoints;
}

#endif //MOKEN_ACCUMULATORCHECKPOINTS_JSON_H
