#ifndef INVALID_INDEX_EXCEPTION_H
#define INVALID_INDEX_EXCEPTION_H

#include "matrix_exception.h"

class InvalidIndexException : public MatrixException {
public:
    void display_error_message() const override {
        std::cout << "Error: Invalid index for accessing matrix element." << std::endl;
    }
};

#endif