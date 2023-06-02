#include "MagicalContainer.hpp"

namespace ariel {

    int MagicalContainer::MagicalNode::getValue() const {
        return 0;
    }

    bool MagicalContainer::MagicalNode::isPrime() const {
        return false;
    }

    long MagicalContainer::MagicalNode::getLocation() const {
        return 0;
    }

    long MagicalContainer::MagicalNode::getNextPrime() const {
        return 0;
    }

    void MagicalContainer::MagicalNode::setLocation(long location) {

    }

    void MagicalContainer::MagicalNode::setNextPrime(long nextPrime) {

    }

    MagicalContainer::MagicalNode::MagicalNode(int val) {

    }

    bool operator>(const MagicalContainer::MagicalNode &_node1, const MagicalContainer::MagicalNode &_node2) {
        return false;
    }

    bool operator==(const MagicalContainer::MagicalNode &_node1, const MagicalContainer::MagicalNode &_node2) {
        return false;
    }

    bool operator!=(const MagicalContainer::MagicalNode &_node1, const MagicalContainer::MagicalNode &_node2) {
        return false;
    }

    bool MagicalContainer::is_prime(int num) {
        return false;
    }

    void MagicalContainer::updatePrimes() {

    }

    MagicalContainer::MagicalContainer() {

    }

    MagicalContainer::MagicalContainer(const MagicalContainer &_other) {

    }

    MagicalContainer::~MagicalContainer() {

    }

    MagicalContainer &MagicalContainer::operator=(const MagicalContainer &_other) {
        return <#initializer#>;
    }

    void MagicalContainer::addElement(int element) {

    }

    long MagicalContainer::size() const {
        return 0;
    }

    void MagicalContainer::removeElement(int element) {

    }

    std::ostream &operator<<(ostream &output, MagicalContainer &_other) {
        return <#initializer#>;
    }

    MagicalContainer::Iterator::Iterator() {

    }

    MagicalContainer::Iterator::Iterator(MagicalContainer _container) {

    }

    MagicalContainer::Iterator::Iterator(const MagicalContainer::Iterator &_other) {

    }

    MagicalContainer::Iterator::~Iterator() {

    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::operator=(const MagicalContainer::Iterator &_other) {
        return <#initializer#>;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::begin() {
        return <#initializer#>;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::end() {
        return <#initializer#>;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::operator*() const {
        return <#initializer#>;
    }

    MagicalContainer::Iterator &MagicalContainer::Iterator::operator++() {
        return <#initializer#>;
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
        return <#initializer#>;
    }

    MagicalContainer::AscendingIterator::AscendingIterator() {

    }

    MagicalContainer::AscendingIterator::AscendingIterator(MagicalContainer _container) : Iterator(_container) {

    }

    MagicalContainer::AscendingIterator::AscendingIterator(const MagicalContainer::AscendingIterator &_other) {

    }

    MagicalContainer::AscendingIterator::~AscendingIterator() {

    }

    MagicalContainer::AscendingIterator &
    MagicalContainer::AscendingIterator::operator=(const MagicalContainer::AscendingIterator &_other) {
        return <#initializer#>;
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

    MagicalContainer::SideCrossIterator::SideCrossIterator() {

    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(MagicalContainer &_container) {

    }

    MagicalContainer::SideCrossIterator::SideCrossIterator(const MagicalContainer::SideCrossIterator &_other) {

    }

    MagicalContainer::SideCrossIterator::~SideCrossIterator() {

    }

    MagicalContainer::SideCrossIterator &
    MagicalContainer::SideCrossIterator::operator=(const MagicalContainer::SideCrossIterator &_other) {
        return <#initializer#>;
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

    MagicalContainer::PrimeIterator::PrimeIterator() {

    }

    MagicalContainer::PrimeIterator::PrimeIterator(MagicalContainer _container) : Iterator(_container) {

    }

    MagicalContainer::PrimeIterator::PrimeIterator(const MagicalContainer::PrimeIterator &_other) {

    }

    MagicalContainer::PrimeIterator::~PrimeIterator() {

    }

    MagicalContainer::PrimeIterator &
    MagicalContainer::PrimeIterator::operator=(const MagicalContainer::PrimeIterator &_other) {
        return <#initializer#>;
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