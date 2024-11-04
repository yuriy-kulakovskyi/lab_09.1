#include <gtest/gtest.h>
#include "../include/dod.h"
#include "../include/sum.h"
#include "../include/var.h"

using namespace nsDod;
using namespace nsSum;
using namespace nsVar;


TEST(ArctgTest, BasicAssertions) {
  x = 1.0;
  eps = 1e-6;
  sum();
  EXPECT_NEAR(S, 0.7853981633974483, eps);

  x = 0.5;
  eps = 1e-6;
  sum();
  EXPECT_NEAR(S, 0.4636476090008061, eps);
}