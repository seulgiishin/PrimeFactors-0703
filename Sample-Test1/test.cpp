#include "pch.h"
#include "../PrimeFactor_KATA/Primefactor.cpp"

#include <vector>
using namespace std;

class PrimeFixture :public testing::Test {
public:
	Primefactor pf;
	vector<int> expected;
};

TEST_F(PrimeFixture, Of1) {
	expected = {};
	EXPECT_EQ(expected, pf.of(1));
}


TEST_F(PrimeFixture, Of2) {
	expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}