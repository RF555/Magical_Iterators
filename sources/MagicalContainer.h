#ifndef MAGICAL_CONTAINER_HPP
#define MAGICAL_CONTAINER_HPP

using namespace std;

class MagicalContainer {
private:
    int _size;

public:
    MagicalContainer();

    MagicalContainer(const MagicalContainer &_other);

    ~MagicalContainer();

    MagicalContainer &operator=(const MagicalContainer &_other);

    void addElement(int i);

    int size();

    void removeElement(int i);

    friend std::ostream &operator<<(ostream &output, MagicalContainer &_other);

};

class Iterator {
private:

public:
    Iterator();

    Iterator(MagicalContainer _container);

    Iterator(Iterator const &_other);

    ~Iterator();

    Iterator &operator=(const Iterator &_other);

    Iterator begin();

    Iterator end();

    /**
     * @brief Dereference operator.
     */
    MagicalContainer &operator*() const;

//    friend std::ostream &operator<<(ostream &output, Iterator &_other);

};

class AscendingIterator : public Iterator {
private:

public:
    AscendingIterator();

    AscendingIterator(MagicalContainer _container);

    AscendingIterator(AscendingIterator const &_other);

    ~AscendingIterator();

    AscendingIterator &operator=(const AscendingIterator &_other);

    AscendingIterator begin();

    AscendingIterator end();

    /**
     * @brief Dereference operator.
     */
    MagicalContainer &operator*() const;

    /**
     * @brief Pre-increment operator (++i).
     */
    AscendingIterator &operator++();

    /**
     * @brief Equality comparison.
     * @param _iter1 Reference to this AscendingIterator.
     * @param _iter2 Reference to the compared AscendingIterator.
     * @return True - if both _iter1 and _iter2 point to the same object.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
     */
    friend bool operator==(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

    /**
     * @brief Equality comparison.
     * @param _iter1 Reference to this AscendingIterator.
     * @param _iter2 Reference to the compared AscendingIterator.
     * @return False - if both _iter1 and _iter2 point to the same object.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
     */
    friend bool operator!=(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

    /**
     * @brief GT comparison operator.
     * @param _iter1 Reference to this AscendingIterator.
     * @param _iter2 Reference to the compared AscendingIterator.
     * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
     * @details Both objects must be of the same type.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
     */
    friend bool operator>(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

    /**
     * @brief LT comparison operator.
     * @param _iter1 Reference to this AscendingIterator.
     * @param _iter2 Reference to the compared AscendingIterator.
     * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
     * @details Both objects must be of the same type.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
     */
    friend bool operator<(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

//    bool operator!() const;

//    friend bool operator>=(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

//    friend bool operator<=(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

};

class SideCrossIterator : public Iterator {
private:

public:
    SideCrossIterator();

    SideCrossIterator(MagicalContainer _container);

    SideCrossIterator(SideCrossIterator const &_other);

    ~SideCrossIterator();

    SideCrossIterator &operator=(const SideCrossIterator &_other);

    SideCrossIterator begin();

    SideCrossIterator end();

    /**
     * @brief Dereference operator.
     */
    MagicalContainer &operator*() const;

    /**
     * @brief Pre-increment operator (++i).
     */
    SideCrossIterator &operator++();

    /**
     * @brief Equality comparison.
     * @param _iter1 Reference to this SideCrossIterator.
     * @param _iter2 Reference to the compared SideCrossIterator.
     * @return True - if both _iter1 and _iter2 point to the same object.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
     */
    friend bool operator==(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

    /**
     * @brief Equality comparison.
     * @param _iter1 Reference to this SideCrossIterator.
     * @param _iter2 Reference to the compared SideCrossIterator.
     * @return False - if both _iter1 and _iter2 point to the same object.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
     */
    friend bool operator!=(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

    /**
     * @brief GT comparison operator.
     * @param _iter1 Reference to this SideCrossIterator.
     * @param _iter2 Reference to the compared SideCrossIterator.
     * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
     * @details Both objects must be of the same type.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
     */
    friend bool operator>(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

    /**
     * @brief LT comparison operator.
     * @param _iter1 Reference to this SideCrossIterator.
     * @param _iter2 Reference to the compared SideCrossIterator.
     * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
     * @details Both objects must be of the same type.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
     */
    friend bool operator<(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

//    bool operator!() const;

//    friend bool operator>=(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

//    friend bool operator<=(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

};

class PrimeIterator : public Iterator {
private:

public:
    PrimeIterator();

    PrimeIterator(MagicalContainer _container);

    PrimeIterator(PrimeIterator const &_other);

    ~PrimeIterator();

    PrimeIterator &operator=(const PrimeIterator &_other);

    PrimeIterator begin();

    PrimeIterator end();

    /**
     * @brief Dereference operator.
     */
    MagicalContainer &operator*() const;

    /**
     * @brief Pre-increment operator (++i).
     */
    PrimeIterator &operator++();

    /**
     * @brief Equality comparison.
     * @param _iter1 Reference to this PrimeIterator.
     * @param _iter2 Reference to the compared PrimeIterator.
     * @return True - if both _iter1 and _iter2 point to the same object.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
     */
    friend bool operator==(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

    /**
     * @brief Equality comparison.
     * @param _iter1 Reference to this PrimeIterator.
     * @param _iter2 Reference to the compared PrimeIterator.
     * @return False - if both _iter1 and _iter2 point to the same object.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
     */
    friend bool operator!=(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

    /**
     * @brief GT comparison operator.
     * @param _iter1 Reference to this PrimeIterator.
     * @param _iter2 Reference to the compared PrimeIterator.
     * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
     * @details Both objects must be of the same type.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
     */
    friend bool operator>(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

    /**
     * @brief LT comparison operator.
     * @param _iter1 Reference to this PrimeIterator.
     * @param _iter2 Reference to the compared PrimeIterator.
     * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
     * @details Both objects must be of the same type.
     * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
     */
    friend bool operator<(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

//    bool operator!() const;

//    friend bool operator>=(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

//    friend bool operator<=(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

};


#endif // MAGICAL_CONTAINER_HPP
