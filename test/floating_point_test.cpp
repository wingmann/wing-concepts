#include "wing_concepts/numeric.h"

#include <gtest/gtest.h>

using namespace wingmann::concepts::numeric;

auto is_numeric_floating_point = [](floating_point auto value)
{
    return true;
};

TEST(wing_concepts, numeric_floating_point)
{
    using long_double = long double;

    EXPECT_TRUE(is_numeric_floating_point(float{}));
    EXPECT_TRUE(is_numeric_floating_point(double{}));
    EXPECT_TRUE(is_numeric_floating_point(long_double{}));
}
