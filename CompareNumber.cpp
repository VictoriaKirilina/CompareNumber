#include<iostream>
using namespace std;

int main ()
{
  setlocale (LC_ALL, "1251");   
    int a, b, c;
    
     cout << "Введите первое число: ";
     cin >> a;
     cout << "Введите второе число: ";
     cin >> b;
     cout << "Введите третье число: ";
     cin >> c;

    int min =  (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int mid = (a > b) ? ((a > c) ? ((b > c) ? b : c) : a) : ((b > c) ? ((a > c) ? a : c) : b);

     cout << "Результат: " << max << " " << mid << " " << min << endl;
    
    return 0;

}