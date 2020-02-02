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
    Complex c; 

    complex_a.print();
    complex_b.print();
	c.print();
	
    c.add(complex_a, complex_b);
    c.print();

    c.subtract(complex_a, complex_b);
    c.print();

    return 0;
}
