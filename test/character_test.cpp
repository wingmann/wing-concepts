#include "wing_concepts/character.h"

#include <gtest/gtest.h>

using namespace wingmann::concepts::character;

auto is_character = [](character auto value)
{
    return true;
};

TEST(wing_concepts, character)
{
    using signed_char = signed char;
    using unsigned_char = unsigned char;

    EXPECT_TRUE(is_character(char{}));
    EXPECT_TRUE(is_character(signed_char{}));
    EXPECT_TRUE(is_character(unsigned_char{}));
    EXPECT_TRUE(is_character(wchar_t{}));
    EXPECT_TRUE(is_character(char8_t{}));
    EXPECT_TRUE(is_character(char16_t{}));
    EXPECT_TRUE(is_character(char32_t{}));
}
