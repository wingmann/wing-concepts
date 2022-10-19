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

namespace __detail {

template <typename T, typename ... Types>
constexpr bool is_any_of_v = std::disjunction_v<std::is_same<T, Types>...>;

template<typename T>
constexpr bool is_character_v = is_any_of_v<
    std::remove_cv_t<T>,
    char,
    wchar_t,
    char8_t,
    char16_t,
    char32_t>;

} // namespace __detail

template<typename T>
concept character = __detail::is_character_v<T>;

} // namespace wingmann::concepts::character

#endif // WINGMANN_CONCEPTS_CHARACTER_CONCEPTS_H
