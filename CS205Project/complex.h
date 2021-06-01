#ifndef EXERCISE11_COMPLEX_H
#define EXERCISE11_COMPLEX_H
#include <ostream>

class Complex{
private:
    double real;
    double imag;
public:
    Complex();
    Complex(double real,double imag);
    void reset(double real,double imag);
    //+
    Complex operator + (const Complex& other) const ;
    Complex operator + (double real) const ;
    friend Complex operator + (double real, const Complex& other) ;
    //-
    Complex operator - (const Complex& other) const ;
    Complex operator - (double real) const ;
    friend Complex operator - (double real, const Complex& other) ;
    //*
    Complex operator * (const Complex& other) const ;
    Complex operator * (double real) const ;
    friend Complex operator * (double real, const Complex& other) ;
    //~
    friend Complex operator ~ (const Complex& other);
    //== and !=
    bool operator == (const Complex& other) const;
    bool operator != (const Complex& other) const;
    //<< and >>
    friend std::ostream& operator << (std::ostream& os, const Complex& other);
    friend std::istream& operator >> (std::istream& is, Complex& other);
};

#endif //EXERCISE11_COMPLEX_H
