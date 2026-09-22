#include <iostream>
using namespace std;

int main() {
    int a = 17;
    int b = 5;

    cout << "a = " << a << ", b = " << b << endl;
    cout << "Сумма: " << a + b << endl;
    cout << "Разность: " << a - b << endl;
    cout << "Произведение: " << a * b << endl;
    cout << "Частное (целочисленное): " << a / b << endl;
    cout << "Остаток от деления: " << a % b << endl;

    return 0;
}
/*#include <iostream>
using namespace std;

int main() {
    double d1 = 7.0;
    double d2 = 2.0;
    cout << "Деление double: " << d1 << " / " << d2 << " = " << d1 / d2 << endl;
    cout << "Целочисленное деление: (int)7 / (int)2 = " << (int)7 / (int)2 << endl;
    cout << "Вещественное деление: 7.0 / 2.0 = " << 7.0 / 2.0 << endl;
    cout << "Целочисленное деление: 7 / 2 = " << 7 / 2 << endl;

    return 0;
}
    */
/*#include <iostream>
using namespace std;

int main() {
    int x = 10;
    cout << "Начальное значение x = " << x << endl;

    x += 5;
    cout << "После x += 5:  x = " << x << endl;

    x -= 3;
    cout << "После x -= 3:  x = " << x << endl;

    x *= 2;
    cout << "После x *= 2:  x = " << x << endl;

    x /= 4;
    cout << "После x /= 4:  x = " << x << endl;

    x %= 3;
    cout << "После x %= 3:  x = " << x << endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 5;
    // Префиксный инкремент: сначала увеличиваем a на 1, потом присваиваем результат
    int c = ++a;
    // Постфиксный инкремент: сначала присваиваем текущее значение b, потом увеличиваем b
    int d = b++;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    for (int n = 10; n > 0; n--) {
        cout << n << " ";
    }
    return 0;
}*/
/*#include <iostream>
using namespace std;

int main() {
    int a = 8, b = 12, c = 20;

    cout << "a = " << a << ", b = " << b << ", c = " << c << endl;
    cout << "(a < b)    = " << (a < b) << endl;
    cout << "(a == c)   = " << (a == c) << endl;
    cout << "(b * 2 >= c) = " << (b * 2 >= c) << endl;
    cout << "(c - a != b) = " << (c - a != b) << endl;
    cout << "(a + b <= c) = " << (a + b <= c) << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    cout << boolalpha;

    cout << "(a < b) && (b < c) : " << ((a < b) && (b < c)) << endl;
    cout << "(a > b) || (b < c) : " << ((a > b) || (b < c)) << endl;
    cout << "!((a + b) == c) : " << (!((a + b) == c)) << endl;
    cout << "(a == 5) && (b != 10) || (c == 15) : " << ((a == 5) && (b != 10) || (c == 15)) << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int max_val = (a > b) ? a : b;
    cout << max_val << endl;

    return 0;
}*/
/*#include <iostream>
#include <string>

using namespace std;

int main() {
    int age=20;
    string status = (age >= 18) ? "Совершеннолетний" : "Несовершеннолетний";
    cout << status << endl;
    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    // Оператор «запятая» выполняет выражения слева направо:
    // 1. Сначала переменной 'a' присваивается 5
    // 2. Затем переменной 'b' присваивается 7
    // 3. Вычисляется последнее выражение (a + b = 12), и его результат сохраняется в 'c'
    c = (a = 5, b = 7, a + b);

    cout << "a = " << a << endl; 
    cout << "b = " << b << endl; 
    cout << "c = " << c << endl; 

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    cout << "sizeof(char): " << sizeof(char) << " bytes\n";
    cout << "sizeof(char16_t): " << sizeof(char16_t) << " bytes\n";
    cout << "sizeof(char32_t): " << sizeof(char32_t) << " bytes\n";
    cout << "sizeof(wchar_t): " << sizeof(wchar_t) << " bytes\n";

    cout << "sizeof(signed char): " << sizeof(signed char) << " bytes\n";
    cout << "sizeof(signed short int): " << sizeof(signed short int) << " bytes\n";
    cout << "sizeof(signed int): " << sizeof(signed int) << " bytes\n";
    cout << "sizeof(signed long int): " << sizeof(signed long int) << " bytes\n";
    cout << "sizeof(signed long long int): " << sizeof(signed long long int) << " bytes\n";

    cout << "sizeof(unsigned char): " << sizeof(unsigned char) << " bytes\n";
    cout << "sizeof(unsigned short int): " << sizeof(unsigned short int) << " bytes\n";
    cout << "sizeof(unsigned int): " << sizeof(unsigned int) << " bytes\n";
    cout << "sizeof(unsigned long int): " << sizeof(unsigned long int) << " bytes\n";
    cout << "sizeof(unsigned long long int): " << sizeof(unsigned long long int) << " bytes\n";

    cout << "sizeof(float): " << sizeof(float) << " bytes\n";
    cout << "sizeof(double): " << sizeof(double) << " bytes\n";
    cout << "sizeof(long double): " << sizeof(long double) << " bytes\n";

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int i = 0;
    double d = 0.0;
    char c = 'a';
    bool l = true;

    cout << "sizeof(i): " << sizeof(i) << " bytes\n";
    cout << "sizeof(d): " << sizeof(d) << " bytes\n";
    cout << "sizeof(c): " << sizeof(c) << " bytes\n";
    cout << "sizeof(l): " << sizeof(l) << " bytes\n";

    int a = 5, b = 10;
    cout << "sizeof(a + b): " << sizeof(a + b) << " bytes\n";

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    double pi = 3.14159;

    int pi_int = (int)pi;
    int pi_int2 = int(pi);

    cout <<"(int)pi = "<< pi_int << endl;
    cout <<"int(pi) = "<< pi_int2 << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    float f = 9.99;
    int i = (int)f;
    char c = (char)i;

    cout << "float: " << f << endl;
    cout << "int: " << i << endl;
    cout << "char: " << int(c) << endl;

    return 0;
}
*/
/*#include <iostream>

using namespace std;

int main() {
    int var = 42;

    cout << "var = " << var << endl;
    cout << "&var = " << &var << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int x = 5, y = 10, z = 0;

    z = (x += 3) * (y -= 2) + (++x) - (y--);

    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int a = 2, b = 3, c = 4;

    // Выражение со скобками по приоритетам:
    int result = (a + (b * c)) - ((a / b) % c);

    cout << "Result: " << result << endl;

    return 0;
}*/
/*#include <iostream>
#include <climits>

using namespace std;

int main() {
    signed char sc = SCHAR_MAX;
    unsigned char uc = UCHAR_MAX;
    short s = SHRT_MAX;
    unsigned short us = USHRT_MAX;
    int i = INT_MAX;
    unsigned int ui = UINT_MAX;
    long l = LONG_MAX;
    unsigned long ul = ULONG_MAX;
    long long ll = LLONG_MAX;
    unsigned long long ull = ULLONG_MAX;

    cout << "signed char: " << (int)sc << endl;
    cout << "unsigned char: " << (int)uc << endl;
    cout << "short: " << s << endl;
    cout << "unsigned short: " << us << endl;
    cout << "int: " << i << endl;
    cout << "unsigned int: " << ui << endl;
    cout << "long: " << l << endl;
    cout << "unsigned long: " << ul << endl;
    cout << "long long: " << ll << endl;
    cout << "unsigned long long: " << ull << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    float f = 1.0f / 3.0f;
    double d = 1.0 / 3.0;
    long double ld = 1.0L / 3.0L;

    cout << fixed;
    cout.precision(15);

    cout << "float:       " << f << endl;
    cout << "double:      " << d << endl;
    cout << "long double: " << ld << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    char ch = 'A';
    char16_t u16 = u'B';
    char32_t u32 = U'C';
    wchar_t w = L'D';
    bool flag = true;

    cout << boolalpha;
    cout << "flag: " << flag << " (числовой код: " << (int)flag << ")" << endl;

    cout << "char: " << ch << " (числовой код: " << (int)ch << ")" << endl;
    cout << "char16_t числовой код: " << (int)u16 << endl;
    cout << "char32_t числовой код: " << (int)u32 << endl;
    cout << "wchar_t числовой код: " << (int)w << endl;

    return 0;
}*/
/*#include <iostream>

using namespace std;

int main() {
    int userInt;
    double userDouble;
    char userChar;

    cout << "Enter integer, double, and character: ";
    cin >> userInt >> userDouble >> userChar;

    int convertedDouble = (int)userDouble;
    int charCode = (int)userChar;

    int sum = userInt + convertedDouble;
    int diff = userInt - charCode;
    bool isGreater = userInt > convertedDouble;
    bool logicalExpr = (userInt > 10) && (charCode < 100);

    cout << boolalpha;
    cout << "Sum (int + converted double): " << sum << endl;
    cout << "Difference (int - char code): " << diff << endl;
    cout << "Is int > converted double? " << isGreater << endl;
    cout << "(int > 10) && (char code < 100): " << logicalExpr << endl;

    cout << "sizeof(int): " << sizeof(userInt) << " bytes" << endl;
    cout << "sizeof(double): " << sizeof(userDouble) << " bytes" << endl;
    cout << "sizeof(char): " << sizeof(userChar) << " bytes" << endl;

    return 0;
}*/