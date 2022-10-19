/// @file   sorting_concepts.h
/// @author Alexander Shavrov (alexander.shavrov@outlook.com)
/// @brief  Concepts for sorting algorithms.
/// @date   2022-10-19
///
/// @copyright Copyright (c) 2022
///
/// This file is distributed under the MIT License.
/// See LICENSE file for details.
///

#ifndef WINGMANN_CONCEPTS_SORTING_CONCEPTS_H
#define WINGMANN_CONCEPTS_SORTING_CONCEPTS_H

#include <concepts>

namespace wingmann::concepts::sorting {

template<typename T>
concept totally_ordered_swappable = std::totally_ordered<T> && std::swappable<T>;

} // namespace wingmann::concepts::sorting

#endif // WINGMANN_CONCEPTS_SORTING_CONCEPTS_H
