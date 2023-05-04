#ifndef MATRIX_EXCEPTION_H
#define MATRIX_EXCEPTION_H

#include <iostream>
#include <string>

class MatrixException {
public:
    virtual void display_error_message() const = 0;
};

#endif