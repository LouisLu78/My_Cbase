#include <iostream>
#include <bitset>

using namespace std;

int fib(int n)
{
    if (n == 0 || n == 1){
        return 1;
    }
    else{
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    bitset<32>bitVec1(0xffffffff);
    cout << bitVec1 << " It totally contains " << bitVec1.count() <<" bits of 1." << endl;
    cout << endl;

    bitset<32>bitVec2;
    for (int i = 1; i <= 7; i++){
        bitVec2.set(fib(i));
    }
    cout << bitVec2 << " It totally contains " << bitVec2.count() <<" bits of 1." << endl;

    return 0;
}
