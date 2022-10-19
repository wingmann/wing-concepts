/// @file   numeric_concepts.h
/// @author Alexander Shavrov (alexander.shavrov@outlook.com)
/// @brief  Concepts for numeric types.
/// @date   2022-10-17
///
/// @copyright Copyright (c) 2022
///
/// This file is distributed under the MIT License.
/// See LICENSE file for details.
///

#ifndef WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H
#define WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H

#include <concepts>

namespace wingmann::concepts::numeric {

template<typename T>
concept integral_number = std::integral<T> && (!std::same_as<T, bool>);

template<typename T>
concept pure_integral =
    integral_number<T> &&
    (!std::same_as<T, char>) &&
    (!std::same_as<T, wchar_t>) &&
    (!std::same_as<T, char8_t>) &&
    (!std::same_as<T, char16_t>) &&
    (!std::same_as<T, char32_t>);

template<typename T>
concept number = std::floating_point<T> || integral_number<T>;

template<typename T>
concept pure_number = std::floating_point<T> || pure_integral<T>;

} // namespace wingmann::concepts::numeric

#endif // WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H
