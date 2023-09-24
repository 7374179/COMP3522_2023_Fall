//
// Created by taehyuk chung on 2023-09-23.
//

#include "matrix.hpp"

matrix::matrix(){
    mat=new double*[1];
    mat[0]=new double[1];
    mat[0][0]= 0.0;
}

matrix::matrix(int n):n(n){
    mat=new double*[n];
    for(int i=0; i<n;i++){
        mat[i]=new double[n]();
    }
}

matrix::matrix(int row, int column): row(row), column(column){
    mat=new double*[row];
    for(int i=0;i<row;i++){
        mat[i]=new double[column]();
    }
}

matrix(const matrix& a){};

//int row;
//int column;
//double value;

void matrix::setValue(int row, int column, double value){
    this->row = row;
    this->column = column;
    this->value = value;
}
double matrix::getValue(int row, int column){
    return value;
}

void clear(){

}
