// Copyright (c) 2019, QuantStack and Mamba Contributors
//
// Distributed under the terms of the BSD 3-Clause License.
//
// The full license is in the file LICENSE, distributed with this software.

#include <string>
#include <vector>

#include "mamba/api/configuration.hpp"
#include "mamba/core/query.hpp"

namespace mamba
{
    void repoquery(
        Configuration& config,
        QueryType type,
        QueryResultFormat format,
        bool use_local,
        const std::vector<std::string>& query
    );
}
