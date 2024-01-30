#include <iostream>
#include <cmath>

using namespace std;

int main()

{
    setlocale(LC_ALL, "RUS");
    int choice, num1, num2;
    double result;

    while (true)
    {
        cout << "Выберите операцию:\n";
        cout << "1. Сложение\n";
        cout << "2. Вычитание\n";
        cout << "3. Частное\n";
        cout << "4. Произведение\n";
        cout << "5. Возведение в степень\n";
        cout << "6. Нахождение квадратного корня\n";
        cout << "7. Нахождение 1% от числа\n";
        cout << "8. Найти факториал числа\n";
        cout << "9. Выйти из программы\n";
        cin >> choice;

        if (choice == 9)
        {
            break;
        }

        switch (choice)
        {
        case 1:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 + num2;
            break;
        case 2:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 - num2;
            break;
        case 3:
            cout << "Введите делимое: ";
            cin >> num1;
            cout << "Введите делитель: ";
            cin >> num2;
            if (num2 != 0)
            {
                result = static_cast<double>(num1) / num2;
            }
            else
            {
                cout << "Деление на ноль невозможно";
                continue;
            }
            break;
        case 4:
            cout << "Введите первое число: ";
            cin >> num1;
            cout << "Введите второе число: ";
            cin >> num2;
            result = num1 * num2;
            break;
        case 5:
            cout << "Введите основание: ";
            cin >> num1;
            cout << "Введите степень: ";
            cin >> num2;
            result = pow(num1, num2);
            break;
        case 6:
            cout << "Введите число: ";
            cin >> num1;
            result = sqrt(num1);
            break;
        case 7:
            cout << "Введите число: ";
            cin >> num1;
            result = num1 * 0.01;
            break;
        case 8:
            cout << "Введите число: ";
            cin >> num1;
            result = 1;
            for (int i = 1; i <= num1; ++i)
            {
                result *= i;
            }
            break;
        default:
            cout << "Неправильный выбор операции";
            continue;
        }

        cout << "Результат: " << result << endl;
    }

    return 0;
}