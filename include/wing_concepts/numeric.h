/// @file   numeric.h
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

#include "__detail/concept_detail.h"

namespace wingmann::concepts::numeric {

template<typename T>
concept integral = __detail::is_integral_v<T>;

template<typename T>
concept signed_integral = integral<T> && static_cast<T>(-1) < static_cast<T>(0);

template<typename T>
concept unsigned_integral = integral<T> && static_cast<T>(-1) > static_cast<T>(0);

template<typename T>
concept floating_point = __detail::is_floating_point_v<T>;

template<typename T>
concept number = floating_point<T> || integral<T>;

} // namespace wingmann::concepts::numeric

#endif // WINGMANN_CONCEPTS_NUMERIC_CONCEPTS_H
