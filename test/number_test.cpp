#include "wing_concepts/numeric_concepts.h"

#include <gtest/gtest.h>

using namespace wingmann::concepts::numeric;

auto is_numeric_number = [](number auto value)
{
    return true;
};

TEST(wing_concepts, numeric_number)
{
    using long_double = long double;

    EXPECT_TRUE(is_numeric_number(std::int8_t{}));
    EXPECT_TRUE(is_numeric_number(std::uint8_t{}));
    EXPECT_TRUE(is_numeric_number(std::int16_t{}));
    EXPECT_TRUE(is_numeric_number(std::uint16_t{}));
    EXPECT_TRUE(is_numeric_number(std::int32_t{}));
    EXPECT_TRUE(is_numeric_number(std::uint32_t{}));
    EXPECT_TRUE(is_numeric_number(std::int64_t{}));
    EXPECT_TRUE(is_numeric_number(std::uint64_t{}));
    EXPECT_TRUE(is_numeric_number(float{}));
    EXPECT_TRUE(is_numeric_number(double{}));
    EXPECT_TRUE(is_numeric_number(long_double{}));
}
