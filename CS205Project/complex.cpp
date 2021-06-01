#include "complex.h"
#include <iostream>

Complex::Complex():real(0),imag(0)
{}
Complex::Complex(double real, double imag) :real(real),imag(imag)
{}
void Complex::reset(double real,double imag) {
    this->real=real;
    this->imag=imag;
}
//+
Complex Complex::operator+(const Complex &other) const {
    return Complex(this->real+other.real,this->imag+other.imag);
}
Complex Complex::operator+(double real) const {
    return Complex(this->real+real, this->imag);
}
Complex operator+(double real, const Complex &other) {
    return Complex(real+other.real, other.imag);
}
//-
Complex Complex::operator-(const Complex &other) const {
    return Complex(this->real-other.real,this->imag-other.imag);
}
Complex Complex::operator-(double real) const {
    return Complex(this->real-real,this->imag);
}
Complex operator-(double real, const Complex &other) {
    return Complex(real+other.real,other.imag);
}
//*
Complex Complex::operator*(const Complex &other) const {
    double result_real=this->real*other.real - this->imag*other.imag;
    double result_imag=this->real*other.imag + this->imag*other.real;
    return Complex(result_real,result_imag);
}
Complex Complex::operator*(double real) const {
    return Complex(this->real*real, this->imag*real);
}
Complex operator*(double real, const Complex &other) {
    return Complex(real*other.real, real*other.imag);
}
//~
Complex operator~(const Complex &other) {
    return Complex(other.real, -other.imag);
}
//== and !=
bool Complex::operator==(const Complex &other) const {
    return (this->real==other.real) && (this->imag==other.imag);
}

bool Complex::operator!=(const Complex &other) const {
    return (this->real!=other.real) || (this->imag!=other.imag);
}
//<< and >>
std::ostream &operator<<(std::ostream &os, const Complex &other) {
    if(other.real==0 || other.imag==0){
        if(other.real==0){
            if(other.imag!=0){
                os<<other.imag<<"i";
            }else{
                os<<0;
            }
        }else {
            os<<other.real;
        }
    }else {
        if(other.imag>0){
            os<<other.real<<" + "<<other.imag<<"i";
        } else {
            os<<other.real<<" - "<<-other.imag<<"i";

        }
    }
    return os;
}

std::istream &operator>>(std::istream &is, Complex& other) {
    double real,imag;
    std::cout<<"Enter a complex number:"<<std::endl;
    std::cout<<"Real: "<<std::endl;
    is>>real;
    std::cout<<"Imaginary: "<<std::endl;
    is>>imag;
    other.reset(real,imag);
    return is;
}





