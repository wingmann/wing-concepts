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

#include <concepts>

namespace wingmann::concepts::numeric {

namespace __detail {

template<typename T, typename ... Types>
constexpr bool is_any_of_v = std::disjunction_v<std::is_same<T, Types>...>;

template<typename T>
constexpr bool is_integral_v = is_any_of_v<
    std::remove_cv_t<T>,
    signed char,
    unsigned char,
    short,
    unsigned short,
    int,
    unsigned int,
    long,
    unsigned long,
    long long,
    unsigned long long>;

template<typename T>
constexpr bool is_floating_point_v = is_any_of_v<
    std::remove_cv_t<T>,
    float,
    double,
    long double>;

} // namespace __detail

template<typename T>
concept integral = __detail::is_integral_v<T>;

template<typename T>
concept signed_integral = integral<T> && static_cast<T>(-1) < static_cast<T>(0);

template<typename T>
concept unsigned_integral = integral<T> && !signed_integral<T>;

template<typename T>
concept floating_point = __detail::is_floating_point_v<T>;

template<typename T>
concept number = floating_point<T> || integral<T>;

} // namespace wingmann::concepts::numeric

#endif // WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H
