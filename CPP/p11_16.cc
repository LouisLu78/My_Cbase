#include <iostream>
#include <iterator>
#include <string>
#include <vector>

using namespace std;

int main()
{
    istream_iterator<string> in_iter(cin);
    istream_iterator<string> eof;
    vector<string> svec(in_iter, eof);

    ostream_iterator<string> out_iter(cout, " ");
    copy(svec.begin(), svec.end(), out_iter);

    return 0;

}
