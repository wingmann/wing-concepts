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

#include "__detail/__concepts_detail.h"

namespace wingmann::concepts::character {

template<typename T>
concept character = __detail::is_character_v<T>;

} // namespace wingmann::concepts::character

#endif // WINGMANN_CONCEPTS_CHARACTER_CONCEPTS_H
