#include "MagicalContainer.hpp"

namespace ariel {

    int MagicalContainer::MagicalNode::getValue() const { return 0; }

    bool MagicalContainer::MagicalNode::isPrime() const { return false; }

    long MagicalContainer::MagicalNode::getLocation() const { return 0; }

    long MagicalContainer::MagicalNode::getNextPrime() const { return 0; }

    void MagicalContainer::MagicalNode::setLocation(long location) {}

    void MagicalContainer::MagicalNode::setNextPrime(long nextPrime) {}

    MagicalContainer::MagicalNode::MagicalNode(int val) {}

    MagicalContainer::MagicalNode::~MagicalNode() = default;

    MagicalContainer::MagicalNode::MagicalNode(const MagicalContainer::MagicalNode &_other) {}

    MagicalContainer::MagicalNode::MagicalNode(MagicalContainer::MagicalNode &&_other) noexcept {}

    MagicalContainer::MagicalNode &
    MagicalContainer::MagicalNode::operator=(const MagicalContainer::MagicalNode &_other) {
        return *this;
    }

    bool operator>(const MagicalContainer::MagicalNode &_node1,
                   const MagicalContainer::MagicalNode &_node2) { return false; }

    bool operator==(const MagicalContainer::MagicalNode &_node1,
                    const MagicalContainer::MagicalNode &_node2) { return false; }

    bool operator!=(const MagicalContainer::MagicalNode &_node1,
                    const MagicalContainer::MagicalNode &_node2) { return false; }

    MagicalContainer::MagicalNode &
    MagicalContainer::MagicalNode::operator=(MagicalContainer::MagicalNode &&_other) noexcept {
        return *this;
    }

    bool isPrime(int num) { return false; }

    void MagicalContainer::updatePrimes() {}

    MagicalContainer::MagicalContainer() {}

    MagicalContainer::MagicalContainer(const MagicalContainer &_other) {}

    MagicalContainer::~MagicalContainer() {}

    MagicalContainer &MagicalContainer::operator=(const MagicalContainer &_other) {
        return *this;
    }

    void MagicalContainer::addElement(int element) {}

    long MagicalContainer::size() const { return 0; }

    void MagicalContainer::removeElement(int element) {}

    std::ostream &operator<<(ostream &output, MagicalContainer &_other) {
        return output;
    }

    MagicalContainer::Iterator::Iterator() {}

    MagicalContainer::Iterator::Iterator(const MagicalContainer& _container) {}

    MagicalContainer::Iterator::Iterator(const MagicalContainer::Iterator &_other) = default;

    MagicalContainer::MagicalContainer(MagicalContainer &&_other) noexcept {}

    MagicalContainer::Iterator::~Iterator() = default;

    MagicalContainer::Iterator &
    MagicalContainer::Iterator::operator=(const MagicalContainer::Iterator &_other) = default;

    MagicalContainer &MagicalContainer::operator=(MagicalContainer &&_other) noexcept {
        return *this;
    }

    MagicalContainer::Iterator::Iterator(MagicalContainer::Iterator &&_other) noexcept {}

    MagicalContainer::Iterator &MagicalContainer::Iterator::operator=(MagicalContainer::Iterator &&_other) noexcept {
        return *this;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::begin() {
        return *this;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::end() {
        return *this;
    }

    int MagicalContainer::Iterator::operator*() const {
        return 0;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::operator++() {
        return *this;
    }

    bool operator==(const MagicalContainer::Iterator &_iter1, const MagicalContainer::Iterator &_iter2) {
        return false;
    }

    bool operator!=(const MagicalContainer::Iterator &_iter1, const MagicalContainer::Iterator &_iter2) {
        return false;
    }

    bool operator>(const MagicalContainer::Iterator &_iter1, const MagicalContainer::Iterator &_iter2) {
        return false;
    }

    bool operator<(const MagicalContainer::Iterator &_iter1, const MagicalContainer::Iterator &_iter2) {
        return false;
    }

    std::ostream &operator<<(ostream &output, MagicalContainer::Iterator &_other) {
        return output;
    }

    MagicalContainer::AscendingIterator::AscendingIterator() = default;

    MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer &_container) : Iterator(_container) {}

    MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer::AscendingIterator &_other) {}

    MagicalContainer::AscendingIterator::~AscendingIterator() = default;

    MagicalContainer::AscendingIterator &
    MagicalContainer::AscendingIterator::operator=(MagicalContainer::AscendingIterator &&_other) noexcept {
        return *this;
    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer::AscendingIterator &&_other) noexcept {}

    MagicalContainer::AscendingIterator &
    MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &_other) {
        return *this;
    }

    MagicalContainer::Iterator &MagicalContainer::AscendingIterator::begin() {
        return Iterator::begin();
    }

    MagicalContainer::Iterator &MagicalContainer::AscendingIterator::end() {
        return Iterator::end();
    }

    MagicalContainer::Iterator &MagicalContainer::AscendingIterator::operator++() {
        return Iterator::operator++();
    }

    MagicalContainer::SideCrossIterator::SideCrossIterator() = default;

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &_container) {}

    MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer::SideCrossIterator &_other) {}

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer::SideCrossIterator &&_other) noexcept {}

    MagicalContainer::SideCrossIterator::~SideCrossIterator() = default;

    MagicalContainer::SideCrossIterator &
    MagicalContainer::SideCrossIterator::operator=(const MagicalContainer::SideCrossIterator &_other) {
        return *this;
    }

    MagicalContainer::SideCrossIterator &
    MagicalContainer::SideCrossIterator::operator=(MagicalContainer::SideCrossIterator &&_other) noexcept {
        return *this;
    }

    MagicalContainer::Iterator &MagicalContainer::SideCrossIterator::begin() {
        return Iterator::begin();
    }

    MagicalContainer::Iterator &MagicalContainer::SideCrossIterator::end() {
        return Iterator::end();
    }

    MagicalContainer::Iterator &MagicalContainer::SideCrossIterator::operator++() {
        return Iterator::operator++();
    }

    MagicalContainer::PrimeIterator::PrimeIterator() = default;

    MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer &_container) : Iterator(_container) {}

    MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer::PrimeIterator &_other) {}

    MagicalContainer::PrimeIterator::~PrimeIterator() = default;

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer::PrimeIterator &&_other) noexcept {}

    MagicalContainer::PrimeIterator &
    MagicalContainer::PrimeIterator::operator=(MagicalContainer::PrimeIterator &&_other) noexcept {
        return *this;
    }

    MagicalContainer::PrimeIterator &
    MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &_other) {
        return *this;
    }

    MagicalContainer::Iterator &MagicalContainer::PrimeIterator::begin() {
        return Iterator::begin();
    }

    MagicalContainer::Iterator &MagicalContainer::PrimeIterator::end() {
        return Iterator::end();
    }

    MagicalContainer::Iterator &MagicalContainer::PrimeIterator::operator++() {
        return Iterator::operator++();
    }


}