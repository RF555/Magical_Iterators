#include "doctest.h"

#define private public

#include "sources/MagicalContainer.hpp"

#undef private

using namespace std;
using namespace ariel;

TEST_CASE("Test isPrime()") {
    int primes[] = {2, 3, 4, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43,
                    47, 53, 59, 61, 67, 71, 173, 281, 541, 1069, 2129, 7919};
    for (auto num: primes) {
        CHECK(MagicalContainer::is_prime(num));
    }
}









