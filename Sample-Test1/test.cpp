#include "pch.h"
#include "../PrimeFactor_KATA/Primefactor.cpp"

#include <vector>
using namespace std;

TEST(PrimeFactors, Of1) {
	Primefactor pf;
	vector<int> expected = {};
	EXPECT_EQ(expected, pf.of(1));
}


TEST(PrimeFactors, Of2) {
	Primefactor pf;
	vector<int> expected = {2};
	EXPECT_EQ(expected, pf.of(2));
}