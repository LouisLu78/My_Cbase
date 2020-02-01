# include <iostream>

using namespace std;

class Complex
{
private:

    double realPart;
    double imaginaryPart;

public:

    Complex(double re = 1.0, double im = 1.0)
    {
        realPart = re;
        imaginaryPart = im;
    }   

    void add(Complex a, Complex b)
    {
        
       realPart = a.realPart + b.realPart;
       imaginaryPart = a.imaginaryPart + b.imaginaryPart;
        

    }

    void subtract(Complex a, Complex b)
    {
        
        realPart = a.realPart - b.realPart;
        imaginaryPart = a.imaginaryPart - b.imaginaryPart;
        
    }

    void print()
    {
        cout << "(" << realPart << " , " << imaginaryPart << ")" <<endl;
    }
};

int main()
{
    Complex complex_a(3.5, 2.7);
    Complex complex_b(2.6, 8.1);

    complex_a.print();
    complex_b.print();

    Complex complex_add;
    complex_add.add(complex_a, complex_b);
    complex_add.print();

    Complex complex_sub;
    complex_sub.subtract(complex_a, complex_b);
    complex_sub.print();

    return 0;
}
