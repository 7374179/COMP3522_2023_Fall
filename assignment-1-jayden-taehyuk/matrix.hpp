//
// Created by taehyuk chung on 2023-09-23.
//

#ifndef LAB1TEMPLATE_MATRIX_HPP
#define LAB1TEMPLATE_MATRIX_HPP
class matrix{
public:
    double** mat;
    matrix();
    matrix(int n);
    matrix(int row, int column);
    matrix(const matrix& a){};

    int row;
    int column;
    int n;
    double value;

    void setValue(int row, int column, double value);
    double getValue(int row, int column);
    void clear();
};
#endif //LAB1TEMPLATE_MATRIX_HPP
