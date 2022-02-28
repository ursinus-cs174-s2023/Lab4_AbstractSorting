#ifndef COMPARABLE_H
#define COMPARABLE_H

class Comparable {
    public:
        /**
         * @brief A method to help compare objects that
         * implement this abstract class
         * 
         * @param other Other object to compare
         * @return int 
         *         A negative number if this object is less than the other
         *         0 if this object is in the same ranked order
         *         A positive number if this object is greater than the other
         */
        virtual int compareTo(Comparable* other)=0; // Pure virtual
        virtual ~Comparable();
};

class CInt: public Comparable {
    private:
        int x;
    public:
        CInt(int x){this->x = x;}
        ~CInt(){}
        int compareTo(Comparable* other);
};

/**
 * @brief Return the index of the smallest object in the
 * array of Comparable object references
 * 
 * @param arr Array of object references
 * @param N Length of the Array
 * @return int Index of the object that's the smallest, according to
 *             the Comparable order
 */
int getMinIndex(Comparable** arr, int N);

#endif
