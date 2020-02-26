#include <iostream> //iostream; input-output stream

using namespace std; //std; standard

int main(void)
{
    std::cout << "初めてのC++のプログラム。\n"; //cout; character out
    std::cout << "画面に出力しています。\n";

    cout << "18と63の和は" << 18 + 63 << "です。\n";

    int n; //int型(整数)
    double x, y; //double型(実数)
    
    // cout << "xとyの値:";
    // cin >> x >> y;

    // cout << "xの値は" << x << "です。\n";
    // cout << "yの値は" << y << "です。\n";
    // cout << "x+yの値は" << x + y << "です。\n"; 

    n = -3;

    if (n > 0)
        cout << "nは正の値で" << n << "です。\n";
    else
        cout << "nは負の値で" << n << "です。\n";

}