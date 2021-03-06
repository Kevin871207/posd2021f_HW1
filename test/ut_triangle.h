#include "../src/two_dimensional_vector.h"
#include "../src/triangle.h"

TEST(CaseTriangle, Creation) {
  TwoDimensionalVector vec1(1, 2);
  TwoDimensionalVector vec2(3, 4);
  ASSERT_NO_THROW(Triangle t(vec1, vec2));
}

TEST(CaseTriangle, Area1) {
  TwoDimensionalVector vec1(1, 2);
  TwoDimensionalVector vec2(3, 4);
  Triangle t(vec1, vec2);
  ASSERT_NEAR(1, t.area(), 0.001);
}

TEST(CaseTriangle, Area2) {
  TwoDimensionalVector vec1(-1, -2);
  TwoDimensionalVector vec2(-3, -4);
  Triangle t(vec1, vec2);
  ASSERT_NEAR(1, t.area(), 0.001);
}

TEST(CaseTriangle, Perimeter) {
  TwoDimensionalVector vec1(1, 2);
  TwoDimensionalVector vec2(3, 4);
  Triangle t(vec1, vec2);
  ASSERT_NEAR(10.064, t.perimeter(), 0.001);
}

TEST(CaseTriangle, Info) {
  TwoDimensionalVector vec1(3, 12.432);
  TwoDimensionalVector vec2(17.578, -4.00);
  Triangle t(vec1, vec2);
  ASSERT_EQ("Triangle ([3.00,12.43] [17.58,-4.00])", t.info());
}

TEST(CaseTriangle, TwoVectorsAreParallelShouldThrowException1) {
  TwoDimensionalVector vec1(1, 2);
  TwoDimensionalVector vec2(3, 6);
  ASSERT_ANY_THROW(Triangle t(vec1, vec2););
}

TEST(CaseTriangle, TwoVectorsAreParallelShouldThrowException2) {
  TwoDimensionalVector vec1(0, 2);
  TwoDimensionalVector vec2(0, 6);
  ASSERT_ANY_THROW(Triangle t(vec1, vec2););
}

TEST(CaseTriangle, TwoVectorsAreParallelShouldThrowException3) {
  TwoDimensionalVector vec1(2, 0);
  TwoDimensionalVector vec2(3, 0);
  ASSERT_ANY_THROW(Triangle t(vec1, vec2););
}
