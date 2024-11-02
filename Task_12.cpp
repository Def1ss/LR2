double a, b, c;

double getsqrt(double x) {
    double l = 0, r = 1e9;
    for (int i = 0; i < 1000; i++) {
        double mid = (l + r) / 2;
        if (mid * mid > x) r = mid; else l = mid;
    }

    return l;
}

int main() {
    std::cout << "Введите a, b, c\n";
    std::cin >> a >> b >> c;

    double D = b * b - 4 * a * (c - 2 * a);
    if (D < 0) {
        std::cout << "Нет корней";
        return 0;
    }

    double d1 = ((-b - getsqrt(D)) / (2 * a)), d2 = ((-b + getsqrt(D)) / (2 * a));

    std::cout << "Корни :\n";

    if (D == 0) {
        double D2 = (d1 * d1) - 4;
        if (D2 >= 0) {
            if (D2 == 0) std::cout << d1 / 2 << '\n';
            else {
                std::cout << (d1 - getsqrt(D2)) / 2 << '\n';
                std::cout << (d1 + getsqrt(D2)) / 2 << '\n';
            }
        }
    } else {
        double D2 = (d1 * d1) - 4;
        if (D2 >= 0) {
            if (D2 == 0) std::cout << d1 / 2 << '\n';
            else {
                std::cout << (d1 - getsqrt(D2)) / 2 << '\n';
                std::cout << (d1 + getsqrt(D2)) / 2 << '\n';
            }
        }

        D2 = (d2 * d2) - 4;
        if (D2 >= 0) {
            if (D2 == 0) std::cout << d2 / 2 << '\n';
            else {
                std::cout << (d2 - getsqrt(D2)) / 2 << '\n';
                std::cout << (d2 + getsqrt(D2)) / 2 << '\n';
            }
        }
    }

    return 0;
}
