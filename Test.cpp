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

TEST_CASE("Adding and removing elements") {
    MagicalContainer container;
    for (int i = 0; i < 99; ++i) {
        CHECK(container.size() == i);
        container.addElement(i);
        CHECK(container.size() == i + 1);
    }
    for (int i = 0; i < 99; ++i) {
        CHECK(container.size() == 100 - i);
        container.removeElement(i);
        CHECK(container.size() == 99 - i);
    }
}

TEST_CASE("AscendingIterator") {
    MagicalContainer container;
    container.addElement(5);
    container.addElement(20);
    container.addElement(2);
    container.addElement(15);
    container.addElement(64);
    container.addElement(30);
    container.addElement(22);
    container.addElement(75);
    CHECK(container.size() == 8);

    MagicalContainer::AscendingIterator it(container);
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 5);
    ++it;
    CHECK(*it == 15);
    ++it;
    CHECK(*it == 20);
    ++it;
    CHECK(*it == 22);
    ++it;
    CHECK(*it == 30);
    ++it;
    CHECK(*it == 64);
    ++it;
    CHECK(*it == 75);
}

TEST_CASE("SideCrossIterator") {
    MagicalContainer container;
    container.addElement(5);
    container.addElement(20);
    container.addElement(2);
    container.addElement(15);
    container.addElement(64);
    container.addElement(30);
    container.addElement(22);
    container.addElement(75);
    CHECK(container.size() == 8);

    MagicalContainer::SideCrossIterator it(container);
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 75);
    ++it;
    CHECK(*it == 5);
    ++it;
    CHECK(*it == 64);
    ++it;
    CHECK(*it == 15);
    ++it;
    CHECK(*it == 30);
    ++it;
    CHECK(*it == 20);
    ++it;
    CHECK(*it == 22);
}

TEST_CASE("PrimeIterator") {
    MagicalContainer container;
    container.addElement(5);
    container.addElement(15);
    container.addElement(2);
    container.addElement(12);
    container.addElement(3);
    container.addElement(17);
    CHECK(container.size() == 6);

    MagicalContainer::PrimeIterator it(container);
    CHECK(*it == 2);
    ++it;
    CHECK(*it == 3);
    ++it;
    CHECK(*it == 5);
    ++it;
    CHECK(*it == 17);
}






