#pragma once

#include <functional>
#include <string>
#include <unordered_map>

namespace behavior
{
enum status_t : char;

/**
 * An oracle is a class in charge of introspecting into a game entity in a particular way.
 * The base class has trivial functionality, but provides a mechanism for aggregating oracle
 * instances regardless of type.
 * Specialized oracles, such as a character_oracle_t, provide some number of predicates to retrieve
 * information about the referenced entity.
 */
class oracle_t
{
};

status_t return_running( const oracle_t * );

extern std::unordered_map<std::string, std::function<status_t( const oracle_t * )>> predicate_map;

} // namespace behavior

