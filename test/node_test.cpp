#include <gtest/gtest.h>
#include "Board/Graph/Tile.h"

TEST(TileTest, GetIDReturnsConstructedValue) {
  int expectedID = 42;
  Tile tile(expectedID);

  int actualID = tile.getId();

  ASSERT_EQ(expectedID, actualID);
}
