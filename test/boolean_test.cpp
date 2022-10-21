#include "wing_concepts/boolean_concepts.h"

#include <gtest/gtest.h>

using namespace wingmann::concepts::boolean;

auto is_boolean = [](boolean auto value)
{
    return true;
};

auto is_not_boolean = [](not_boolean auto value)
{
    return true;
};

TEST(wing_concepts, boolean)
{
    EXPECT_TRUE(is_boolean(bool{}));
}

TEST(wing_concepts, not_boolean)
{
    EXPECT_TRUE(is_not_boolean(int{}));
}
