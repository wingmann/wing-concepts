/// @file   boolean_concepts.h
/// @author Alexander Shavrov (alexander.shavrov@outlook.com)
/// @brief  Concepts for boolean types.
/// @date   2022-10-19
///
/// @copyright Copyright (c) 2022
///
/// This file is distributed under the MIT License.
/// See LICENSE file for details.
///

#ifndef WINGMANN_CONCEPTS_BOOLEAN_CONCEPTS_H
#define WINGMANN_CONCEPTS_BOOLEAN_CONCEPTS_H

#include <concepts>

namespace wingmann::concepts::boolean {

template<typename T>
concept same_as_bool = std::same_as<T, bool>;

template<typename T>
concept not_same_as_bool = !same_as_bool<T>;

} // namespace wingmann::concepts::boolean

#endif // WINGMANN_CONCEPTS_BOOLEAN_CONCEPTS_H
