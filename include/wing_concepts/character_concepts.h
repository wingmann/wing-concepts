/// @file   character_concepts.h
/// @author Alexander Shavrov (alexander.shavrov@outlook.com)
/// @brief  Concepts for character types.
/// @date   2022-10-19
///
/// @copyright Copyright (c) 2022
///
/// This file is distributed under the MIT License.
/// See LICENSE file for details.
///

#ifndef WINGMANN_CONCEPTS_CHARACTER_CONCEPTS_H
#define WINGMANN_CONCEPTS_CHARACTER_CONCEPTS_H

#include <concepts>

namespace wingmann::concepts::character {

template<typename T>
concept signed_integral_character = std::same_as<T, signed char>;

template<typename T>
concept unsigned_integral_character = std::same_as<T, unsigned char>;

template<typename T>
concept integral_character = signed_integral_character<T> && unsigned_integral_character<T>;

template<typename T>
concept not_integral_character =
    std::same_as<T, char> ||
    std::same_as<T, wchar_t> ||
    std::same_as<T, char8_t> ||
    std::same_as<T, char16_t> ||
    std::same_as<T, char32_t>;

template<typename T>
concept character = integral_character<T> && not_integral_character<T>;

} // namespace wingmann::concepts::character

#endif // WINGMANN_CONCEPTS_CHARACTER_CONCEPTS_H
