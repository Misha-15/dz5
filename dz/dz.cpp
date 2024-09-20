//1 задание
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "введите число: ";
    cin >> num;
    
    if (num % 2 == 0) {
        cout << "число четное" << '\n';
    } else {
        cout << "число нечетное" << '\n';
    }
    return 0;
}


//2 задание
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "ведите три числа: ";
    cin >> a >> b >> c;

    int min_num = a;
    if (b < min_num) min_num = b;
    if (c < min_num) min_num = c;

    cout << "наименьшее число: " << min_num << '\n';
    return 0;
}

//3 задание
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "введите число: ";
    cin >> num;

    if (num > 0) {
        cout << "число положительное" << '\n';
    }
    else if (num < 0) {
        cout << "число отрицательное" << '\n';
    }
    else {
        cout << "число равно нулю" << '\n';
    }
    return 0;
}

//4 задание
#include <iostream>
using namespace std;

int main() {
    double a, b;
    int choice;

    cout << "введите два числа: ";
    cin >> a >> b;

    cout << "меню: \n";
    cout << "\n1) a + b\n2) a - b\n3) a * b\n4) a / b\n5) a % b\n";
    cout << "віберите операцию (1-5): ";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "результат: " << a + b << '\n';
        break;
    case 2:
        cout << "результат: " << a - b << '\n';
        break;
    case 3:
        cout << "результат: " << a * b << '\n';
        break;
    case 4:
        if (b != 0) {
            cout << "результат: " << a / b << '\n';
        }
        else {
            cout << "ошибка: деление на ноль" << '\n';
        }
        break;
    case 5:
        if (b != 0) {
            cout << "результат: " << fmod(a, b) << '\n';
        }
        else {
            cout << "ошибкаж деление на ноль" << '\n';
        }
        break;
    default:
        cout << "неправильный выбор" << '\n';
    }
    return 0;
}

//5 задание
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cout << "ведите символ: ";
    cin >> ch;

    if (isdigit(ch)) {
        cout << "єто цифра" << '\n';
    }
    else if (isalpha(ch)) {
        cout << "это буква" << '\n';
    }
    else {
        cout << "это знак пунктуации" << '\n';
    }
    return 0;
}


//6 задание
#include <iostream>
using namespace std;

int main() {
    int num, N, M;
    cout << "введите число: ";
    cin >> num;
    cout << "введите границы диапазона (N и M): ";
    cin >> N >> M;

    if (num >= N && num <= M) {
        cout << "число принадлежит диапазону" << '\n';
    }
    else {
        cout << "число не принадлежит диапазону" << '\n';
    }
    return 0;
}


//7 задание
#include <iostream>
using namespace std;

int main() {
    int X, Y;
    cout << "введите число x: ";
    cin >> X;
    cout << "введите число y: ";
    cin >> Y;

    if (Y != 0 && X % Y == 0) {
        cout << "x кратно y" << '\n';
    }
    else {
        cout << "x не кратно y" << '\n';
    }
    return 0;
}


//8 задание
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "введите число: ";
    cin >> num;

    if (num % 3 == 0 && num % 5 == 0 && num % 7 == 0) {
        cout << "число кратно 3, 5 и 7 одновременно" << '\n';
    }
    else {
        cout << "число не кратно 3, 5 и 7 одновременно" << '\n';
    }
    return 0;
}


//9 задание
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "введите число: ";
    cin >> num;

    cout << "модуль числа: " << abs(num) << '\n';
    return 0;
}


//10 задание
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "введите число (не более 4 разрядов): ";
    cin >> num;

    if (num >= 1000 && num <= 9999) {
        cout << "4 цифры" << '\n';
    }
    else if (num >= 100 && num <= 999) {
        cout << "3 цифры" << '\n';
    }
    else if (num >= 10 && num <= 99) {
        cout << "2 цифры" << '\n';
    }
    else if (num >= 0 && num <= 9) {
        cout << "1 цифра" << '\n';
    }
    else if (num <= -1 && num >= -9) {
        cout << "1 цифра (отрицательное)" << '\n';
    }
    else if (num <= -10 && num >= -99) {
        cout << "2 цифры (отрицательное)" << '\n';
    }
    else if (num <= -100 && num >= -999) {
        cout << "3 цифры (отрицательное)" << '\n';
    }
    else if (num <= -1000 && num >= -9999) {
        cout << "4 цифры (отрицательное)" << '\n';
    }
    else {
        cout << "число вне допустимого диапазона" << '\n';
    }
    return 0;
}
