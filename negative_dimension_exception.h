#ifndef NEGATIVE_DIMENSION_EXCEPTION_H
#define NEGATIVE_DIMENSION_EXCEPTION_H

#include "matrix_exception.h"

class NegativeDimensionException : public MatrixException {
public:
    void display_error_message() const override {
        std::cout << "Error: Number of rows or columns cannot be negative." << std::endl;
    }
};

#endif