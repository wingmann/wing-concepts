/// @file   numeric_concepts.h
/// @author Alexander Shavrov (alexander.shavrov@outlook.com)
/// @brief  Concepts for numeric types.
/// @date   2022-10-19
///
/// @copyright Copyright (c) 2022
///
/// This file is distributed under the MIT License.
/// See LICENSE file for details.
///

#ifndef WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H
#define WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H

#include "character_concepts.h"

namespace wingmann::concepts::numeric {

template<typename T>
concept pure_signed_integral =
    std::same_as<T, signed short int> ||
    std::same_as<T, signed int> ||
    std::same_as<T, signed long int> ||
    std::same_as<T, signed long long int>;

template<typename T>
concept pure_unsigned_integral =
    std::same_as<T, unsigned short int> ||
    std::same_as<T, unsigned int> ||
    std::same_as<T, unsigned long int> ||
    std::same_as<T, unsigned long long int>;

template<typename T>
concept signed_integral =
    wingmann::concepts::character::signed_integral_character<T> &&
    pure_signed_integral<T>;

template<typename T>
concept unsigned_integral =
    wingmann::concepts::character::unsigned_integral_character<T> &&
    pure_unsigned_integral<T>;

template<typename T>
concept pure_integral = pure_signed_integral<T> && pure_unsigned_integral<T>;

template<typename T>
concept integral = signed_integral<T> && unsigned_integral<T>;

template<typename T>
concept floating_point =
    std::same_as<T, float> ||
    std::same_as<T, double> ||
    std::same_as<T, long double>;

template<typename T>
concept pure_number = floating_point<T> && pure_integral<T>;

template<typename T>
concept number = floating_point<T> && integral<T>;

} // namespace wingmann::concepts::numeric

#endif // WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H
