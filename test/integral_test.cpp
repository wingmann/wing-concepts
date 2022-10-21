#include "wing_concepts/numeric_concepts.h"

#include <gtest/gtest.h>

using namespace wingmann::concepts::numeric;

auto is_numeric_integral = [](integral auto value)
{
    return true;
};

auto is_numeric_signed_integral = [](signed_integral auto value)
{
    return true;
};

auto is_numeric_unsigned_integral = [](unsigned_integral auto value)
{
    return true;
};

TEST(wing_concepts, numeric_integral)
{
    EXPECT_TRUE(is_numeric_integral(std::int8_t{}));
    EXPECT_TRUE(is_numeric_integral(std::uint8_t{}));
    EXPECT_TRUE(is_numeric_integral(std::int16_t{}));
    EXPECT_TRUE(is_numeric_integral(std::uint16_t{}));
    EXPECT_TRUE(is_numeric_integral(std::int32_t{}));
    EXPECT_TRUE(is_numeric_integral(std::uint32_t{}));
    EXPECT_TRUE(is_numeric_integral(std::int64_t{}));
    EXPECT_TRUE(is_numeric_integral(std::uint64_t{}));
}

TEST(wing_concepts, numeric_signed_integral)
{
    EXPECT_TRUE(is_numeric_signed_integral(std::int8_t{}));
    EXPECT_TRUE(is_numeric_signed_integral(std::int16_t{}));
    EXPECT_TRUE(is_numeric_signed_integral(std::int32_t{}));
    EXPECT_TRUE(is_numeric_signed_integral(std::int64_t{}));
}

TEST(wing_concepts, numeric_unsigned_integral)
{
    EXPECT_TRUE(is_numeric_unsigned_integral(std::uint8_t{}));
    EXPECT_TRUE(is_numeric_unsigned_integral(std::uint16_t{}));
    EXPECT_TRUE(is_numeric_unsigned_integral(std::uint32_t{}));
    EXPECT_TRUE(is_numeric_unsigned_integral(std::uint64_t{}));
}
