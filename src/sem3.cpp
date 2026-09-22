#include <iostream>
#include <map>
using namespace std;

// Способ 1: Алгоритм Евклида
int gcdEuclid(int m, int n) {
    while (n != 0) {
        int r = m % n;
        m = n;
        n = r;
    }
    return m;
}

// Способ 2: Метод последовательного перебора
int gcdBruteForce(int m, int n) {
    int t = (m < n) ? m : n;
    while (m % t != 0 || n % t != 0) {
        t--;
    }
    return t;
}

// Способ 3: «Школьный» метод (разложение на простые множители)
map<int, int> factorize(int x) {
    map<int, int> factors;
    for (int d = 2; d * d <= x; d++) {
        while (x % d == 0) {
            factors[d]++;
            x /= d;
        }
    }
    if (x > 1) factors[x]++;
    return factors;
}

int gcdSchool(int m, int n) {
    map<int, int> fm = factorize(m);
    map<int, int> fn = factorize(n);

    int result = 1;
    for (auto& [prime, degM] : fm) {
        if (fn.count(prime)) {
            int degN = fn[prime];
            int commonDeg = min(degM, degN);
            for (int i = 0; i < commonDeg; i++) result *= prime;
        }
    }
    return result;
}

int main() {
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;

    cout << "Евклид:    " << gcdEuclid(m, n) << endl;
    cout << "Перебор:   " << gcdBruteForce(m, n) << endl;
    cout << "Школьный:  " << gcdSchool(m, n) << endl;

    return 0;
}

