#include <iostream>
#include "recmatrix.h"
#include "sqmatrix.h"

#include "negative_dimension_exception.h"
#include "invalid_index_exception.h"
#include "size_mismatch_exception.h"

int main() {
    // Создание матрицы 3х3 с начальными значениями 0
    try
    {
        RectangularMatrix matrix1(3, 3);

        matrix1[0][0] = 2;
        matrix1[0][1] = 4;
        matrix1[0][2] = 8;
        matrix1[1][0] = 10;
        matrix1[1][1] = 2;
        matrix1[1][2] = 4;
        matrix1[2][0] = 8;
        matrix1[2][1] = 10;
        matrix1[2][2] = 10;

        // Создание матрицы 3х3 с начальными значениями 1
        RectangularMatrix matrix2(3, 3);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrix2[i][j] = 1;
            }
        }

        // Создание матрицы 3х2 с начальными значениями 2
        RectangularMatrix matrix3(3, 2);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 2; j++) {
                matrix3[i][j] = 2;
            }
        }

        // Вывод матриц на экран
        std::cout << "Matrix 1:" << std::endl;
        std::cout << matrix1 << std::endl;
        std::cout << "Matrix 2:" << std::endl;
        std::cout << matrix2 << std::endl;
        std::cout << "Matrix 3:" << std::endl;
        std::cout << matrix3 << std::endl;

        // Создание SquareMatrix
        SquareMatrix sq_matrix1(3);
        sq_matrix1[0][0] = 2;
        sq_matrix1[0][1] = 4;
        sq_matrix1[0][2] = 8;
        sq_matrix1[1][0] = 10;
        sq_matrix1[1][1] = 2;
        sq_matrix1[1][2] = 4;
        sq_matrix1[2][0] = 8;
        sq_matrix1[2][1] = 10;
        sq_matrix1[2][2] = 10;

        SquareMatrix sq_matrix2(3);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                sq_matrix2[i][j] = 1;
            }
        }

        // Вывод SquareMatrix на экран
        std::cout << "SquareMatrix 1:" << std::endl;
        std::cout << sq_matrix1 << std::endl;
        std::cout << "SquareMatrix 2:" << std::endl;
        std::cout << sq_matrix2 << std::endl;

        // Операции с SquareMatrix
        std::cout << "SquareMatrix 1 + SquareMatrix 2:" << std::endl;
        SquareMatrix sq_matrix_sum = sq_matrix1 + sq_matrix2;
        std::cout << sq_matrix_sum << std::endl;

        SquareMatrix sqres;
        sqres = sq_matrix1 + sq_matrix2;
        std::cout << "((!!!))" << std::endl;
        std::cout << sqres << std::endl;
        
        std::cout << "SquareMatrix 1 - SquareMatrix 2:" << std::endl;
        SquareMatrix sq_matrix_diff = sq_matrix1 - sq_matrix2;
        std::cout << sq_matrix_diff << std::endl;

        std::cout << "SquareMatrix 1 * SquareMatrix 2:" << std::endl;
        SquareMatrix sq_matrix_prod = sq_matrix1 * sq_matrix2;
        std::cout << sq_matrix_prod << std::endl;

        std::cout << "SquareMatrix 1 * 2 (scalar):" << std::endl;
        SquareMatrix sq_matrix_scalar_prod = sq_matrix1 * 2;
        std::cout << sq_matrix_scalar_prod << std::endl;

        std::cout << "Determinant of SquareMatrix 1: " << std::endl;
        double sq_matrix1_det = sq_matrix1.determinant();
        std::cout << sq_matrix1_det << std::endl;

        std::cout << "Cofactor of SquareMatrix 1 (1, 1): " << std::endl;
        double sq_matrix1_cofactor = sq_matrix1.cofactor(1, 1);
        std::cout << sq_matrix1_cofactor << std::endl;

            // Создание SquareMatrix 4x4
        SquareMatrix sq_matrix4x4_1(5);
        sq_matrix4x4_1[0][0] = 2;
        sq_matrix4x4_1[0][1] = 6;
        sq_matrix4x4_1[0][2] = 8;
        sq_matrix4x4_1[0][3] = 3;
        sq_matrix4x4_1[0][4] = 5;
        sq_matrix4x4_1[1][0] = 11;
        sq_matrix4x4_1[1][1] = 28;
        sq_matrix4x4_1[1][2] = 8;
        sq_matrix4x4_1[1][3] = 11;
        sq_matrix4x4_1[1][4] = 9;
        sq_matrix4x4_1[2][0] = 4;
        sq_matrix4x4_1[2][1] = 16;
        sq_matrix4x4_1[2][2] = 20;
        sq_matrix4x4_1[2][3] = 5;
        sq_matrix4x4_1[2][4] = 25;
        sq_matrix4x4_1[3][0] = 14;
        sq_matrix4x4_1[3][1] = 12;
        sq_matrix4x4_1[3][2] = 3;
        sq_matrix4x4_1[3][3] = 41;
        sq_matrix4x4_1[3][4] = 37;
        sq_matrix4x4_1[4][0] = 105;
        sq_matrix4x4_1[4][1] = 22;
        sq_matrix4x4_1[4][2] = 77;
        sq_matrix4x4_1[4][3] = 61;
        sq_matrix4x4_1[4][4] = 96;

        SquareMatrix sq_matrix4x4_2(4);
        sq_matrix4x4_2[0][0] = 1;
        sq_matrix4x4_2[0][1] = 2;
        sq_matrix4x4_2[0][2] = 5;
        sq_matrix4x4_2[0][3] = 3;
        sq_matrix4x4_2[1][0] = 4;
        sq_matrix4x4_2[1][1] = 1;
        sq_matrix4x4_2[1][2] = 8;
        sq_matrix4x4_2[1][3] = 7;
        sq_matrix4x4_2[2][0] = 2;
        sq_matrix4x4_2[2][1] = 6;
        sq_matrix4x4_2[2][2] = 4;
        sq_matrix4x4_2[2][3] = 1;
        sq_matrix4x4_2[3][0] = 7;
        sq_matrix4x4_2[3][1] = 3;
        sq_matrix4x4_2[3][2] = 2;
        sq_matrix4x4_2[3][3] = 8;

        // Вывод SquareMatrix на экран
        std::cout << "SquareMatrix 4x4 1:" << std::endl;
        std::cout << sq_matrix4x4_1 << std::endl;
        std::cout << "SquareMatrix 4x4 2:" << std::endl;
        std::cout << sq_matrix4x4_2 << std::endl;

        // // Операции с SquareMatrix
        // std::cout << "SquareMatrix 4x4 1 * SquareMatrix 4x4 2:" << std::endl;
        // SquareMatrix sq_matrix_prod_4x4 = sq_matrix4x4_1 * sq_matrix4x4_2;
        // std::cout << sq_matrix_prod_4x4 << std::endl;

        std::cout << "SquareMatrix 4x4 1:" << std::endl;
        std::cout << sq_matrix4x4_1 << std::endl;

        std::cout << "Inverse of SquareMatrix 4:" << std::endl;
        SquareMatrix sq_matrix_inv = sq_matrix4x4_1.inverse();
        std::cout << sq_matrix_inv << std::endl;
    }
    catch (const NegativeDimensionException& e) {
        e.display_error_message();
    }
    catch (const InvalidIndexException& e) {
        e.display_error_message();
    }
    catch (const SizeMismatchException& e) {
        e.display_error_message();
    }
    
    

    return 0;
}
