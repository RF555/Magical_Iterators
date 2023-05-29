#ifndef MAGICAL_CONTAINER_HPP
#define MAGICAL_CONTAINER_HPP

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

namespace ariel {
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

//        class MagicalNode {
//            int _value;
//
//        public:
//            MagicalNode();
//
//            explicit MagicalNode(int value);
//
//            MagicalNode(MagicalNode const &_other);
//
//            ~MagicalNode();
//
//            MagicalNode &operator=(const MagicalNode &_other);
//
//        };


    private:
        /**
         * @class Abstract class representing iterators over the MagicalContainer's elements.
         * @details Iterator going over the elements by ascending order (low value to high value).
         * @details each implementation of this class would traversal over the elements in a different order.
         */
        class Iterator {
        private:

        public:
            Iterator();

            Iterator(MagicalContainer _container);

            Iterator(Iterator const &_other);

            ~Iterator();

            Iterator &operator=(const Iterator &_other);

            /**
             * @return Reference to the iterator pointing to the first element of the container.
             */
            virtual Iterator &begin() = 0;

            /**
             * @return Reference to the iterator pointing to the last element of the container.
             */
            virtual Iterator &end() = 0;

            /**
             * @brief Dereference operator.
             */
            Iterator &operator*() const;

            /**
             * @brief Pre-increment operator (++i).
             */
            virtual Iterator &operator++() = 0;

            /**
             * @brief Equality comparison.
             * @param _iter1 Reference to this Iterator.
             * @param _iter2 Reference to the compared Iterator.
             * @return True - if both _iter1 and _iter2 point to the same object.
             * @throws std::invalid_argument If _iter1 and _iter2 are not of the same implementation type of Iterator.
             */
            friend bool operator==(const Iterator &_iter1, const Iterator &_iter2);

            /**
             * @brief Equality comparison.
             * @param _iter1 Reference to this AscendingIterator.
             * @param _iter2 Reference to the compared AscendingIterator.
             * @return False - if both _iter1 and _iter2 point to the same object.
             * @throws std::invalid_argument If _iter1 and _iter2 are not of the same implementation type of Iterator.
             */
            friend bool operator!=(const Iterator &_iter1, const Iterator &_iter2);

            /**
             * @brief GT comparison operator.
             * @param _iter1 Reference to this AscendingIterator.
             * @param _iter2 Reference to the compared AscendingIterator.
             * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
             * @details Both objects must be of the same type.
             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
             */
            friend bool operator>(const Iterator &_iter1, const Iterator &_iter2);

            /**
             * @brief LT comparison operator.
             * @param _iter1 Reference to this AscendingIterator.
             * @param _iter2 Reference to the compared AscendingIterator.
             * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
             * @details Both objects must be of the same type.
             * @throws std::invalid_argument If _iter1 and _iter2 are not of the same implementation type of Iterator.
             */
            friend bool operator<(const Iterator &_iter1, const Iterator &_iter2);


//            bool operator!() const;
//
//            friend bool operator>=(const Iterator &_iter1, const Iterator &_iter2);
//
//            friend bool operator<=(const Iterator &_iter1, const Iterator &_iter2);


            friend std::ostream &operator<<(ostream &output, Iterator &_other);

        };

    public:

        /**
         * @details Iterating over the elements by ascending order (low value to high value).
         */
        class AscendingIterator : public Iterator {
        private:

        public:
            AscendingIterator();

            AscendingIterator(MagicalContainer _container);

            AscendingIterator(AscendingIterator const &_other);

            ~AscendingIterator();

            AscendingIterator &operator=(const AscendingIterator &_other);

            Iterator &begin() override;

            Iterator &end() override;

            Iterator &operator++() override;

//
//            /**
//             * @brief Equality comparison.
//             * @param _iter1 Reference to this AscendingIterator.
//             * @param _iter2 Reference to the compared AscendingIterator.
//             * @return True - if both _iter1 and _iter2 point to the same object.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
//             */
//            friend bool operator==(const AscendingIterator &_iter1, const AscendingIterator &_iter2);
//
//            /**
//             * @brief Equality comparison.
//             * @param _iter1 Reference to this AscendingIterator.
//             * @param _iter2 Reference to the compared AscendingIterator.
//             * @return False - if both _iter1 and _iter2 point to the same object.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
//             */
//            friend bool operator!=(const AscendingIterator &_iter1, const AscendingIterator &_iter2);
//
//            /**
//             * @brief GT comparison operator.
//             * @param _iter1 Reference to this AscendingIterator.
//             * @param _iter2 Reference to the compared AscendingIterator.
//             * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
//             * @details Both objects must be of the same type.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
//             */
//            friend bool operator>(const AscendingIterator &_iter1, const AscendingIterator &_iter2);
//
//            /**
//             * @brief LT comparison operator.
//             * @param _iter1 Reference to this AscendingIterator.
//             * @param _iter2 Reference to the compared AscendingIterator.
//             * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
//             * @details Both objects must be of the same type.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type AscendingIterator.
//             */
//            friend bool operator<(const AscendingIterator &_iter1, const AscendingIterator &_iter2);
//
//            bool operator!() const;
//
//            friend bool operator>=(const AscendingIterator &_iter1, const AscendingIterator &_iter2);
//
//            friend bool operator<=(const AscendingIterator &_iter1, const AscendingIterator &_iter2);

        };

        /**
         * @details Iterating over the elements in cross order.
         * @details i.e. crossing from low value to high value elements:\n
         * 1. Lowest value element\n
         * 2. Highest value element\n
         * 3. Second lowest value element\n
         * 4. Second highest value element\n
         * 5. Third lowest value element\n
         * .\n
         * .\n
         * .
         */
        class SideCrossIterator : public Iterator {
        private:

        public:
            SideCrossIterator();

            SideCrossIterator(MagicalContainer _container);

            SideCrossIterator(SideCrossIterator const &_other);

            ~SideCrossIterator();

            SideCrossIterator &operator=(const SideCrossIterator &_other);

            Iterator &begin() override;

            Iterator &end() override;

            Iterator &operator++() override;

//
//            /**
//             * @brief Equality comparison.
//             * @param _iter1 Reference to this SideCrossIterator.
//             * @param _iter2 Reference to the compared SideCrossIterator.
//             * @return True - if both _iter1 and _iter2 point to the same object.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
//             */
//            friend bool operator==(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);
//
//            /**
//             * @brief Equality comparison.
//             * @param _iter1 Reference to this SideCrossIterator.
//             * @param _iter2 Reference to the compared SideCrossIterator.
//             * @return False - if both _iter1 and _iter2 point to the same object.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
//             */
//            friend bool operator!=(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);
//
//            /**
//             * @brief GT comparison operator.
//             * @param _iter1 Reference to this SideCrossIterator.
//             * @param _iter2 Reference to the compared SideCrossIterator.
//             * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
//             * @details Both objects must be of the same type.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
//             */
//            friend bool operator>(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);
//
//            /**
//             * @brief LT comparison operator.
//             * @param _iter1 Reference to this SideCrossIterator.
//             * @param _iter2 Reference to the compared SideCrossIterator.
//             * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
//             * @details Both objects must be of the same type.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type SideCrossIterator.
//             */
//            friend bool operator<(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);
//
//            bool operator!() const;
//
//            friend bool operator>=(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);
//
//            friend bool operator<=(const SideCrossIterator &_iter1, const SideCrossIterator &_iter2);

        };

        /**
         * @details Iterating over only the elements with prime value, by ascending order (low value to high value).
         */
        class PrimeIterator : public Iterator {
        private:

        public:
            PrimeIterator();

            PrimeIterator(MagicalContainer _container);

            PrimeIterator(PrimeIterator const &_other);

            ~PrimeIterator();

            PrimeIterator &operator=(const PrimeIterator &_other);

            Iterator &begin() override;

            Iterator &end() override;

            Iterator &operator++() override;

//
//            /**
//             * @brief Equality comparison.
//             * @param _iter1 Reference to this PrimeIterator.
//             * @param _iter2 Reference to the compared PrimeIterator.
//             * @return True - if both _iter1 and _iter2 point to the same object.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
//             */
//            friend bool operator==(const PrimeIterator &_iter1, const PrimeIterator &_iter2);
//
//            /**
//             * @brief Equality comparison.
//             * @param _iter1 Reference to this PrimeIterator.
//             * @param _iter2 Reference to the compared PrimeIterator.
//             * @return False - if both _iter1 and _iter2 point to the same object.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
//             */
//            friend bool operator!=(const PrimeIterator &_iter1, const PrimeIterator &_iter2);
//
//            /**
//             * @brief GT comparison operator.
//             * @param _iter1 Reference to this PrimeIterator.
//             * @param _iter2 Reference to the compared PrimeIterator.
//             * @return True - if the location of _iter1 is grater then the location of _iter2. False - else.
//             * @details Both objects must be of the same type.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
//             */
//            friend bool operator>(const PrimeIterator &_iter1, const PrimeIterator &_iter2);
//
//            /**
//             * @brief LT comparison operator.
//             * @param _iter1 Reference to this PrimeIterator.
//             * @param _iter2 Reference to the compared PrimeIterator.
//             * @return True - if the location of _iter1 is lower then the location of _iter2. False - else.
//             * @details Both objects must be of the same type.
//             * @throws std::invalid_argument If either _iter1 OR _iter2 are not of type PrimeIterator.
//             */
//            friend bool operator<(const PrimeIterator &_iter1, const PrimeIterator &_iter2);
//
//            bool operator!() const;
//
//            friend bool operator>=(const PrimeIterator &_iter1, const PrimeIterator &_iter2);
//
//            friend bool operator<=(const PrimeIterator &_iter1, const PrimeIterator &_iter2);

        };

    };

}
#endif // MAGICAL_CONTAINER_HPP
