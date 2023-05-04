#ifndef SIZE_MISMATCH_EXCEPTION_H
#define SIZE_MISMATCH_EXCEPTION_H

#include "matrix_exception.h"

class SizeMismatchException : public MatrixException {
public:
    void display_error_message() const override {
        std::cout << "Error: Matrices have different sizes, operation not allowed." << std::endl;
    }
};

#endif