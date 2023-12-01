

#include <iostream>
#include <math.h>
#include <time.h>
double isPossitive(double a) { //проверка, что число больше 0
    while (a < 0) 
    {
        std::cout << "Enter positive number" << std::endl;
        std::cin >> a;
    }
    if (a > 0)
        return a;
}

/*task1*/
void task1() 
{

    std::cout << "Enter first trapezoid base" << std::endl; //вводим 1 основание
    double b1 = 0.0;
    std::cin >> b1;
    b1 = isPossitive(b1);
    
    std::cout << "Enter second trapezoid base" << std::endl;//вводим 2 основание
    double b2 = 0.0;
    std::cin >> b2;
    b2 = isPossitive(b2);
    std::cout << "Enter height" << std::endl;
    double h = 0.0;
    std::cin >> h;
    h = isPossitive(h); // если все числа нормальные вставляем их в формулу

    std::cout << "trapezoid area is " << (b1 + b2) * 0.5 * h << std::endl;
}
 /*task3*/
void task3()
{
    double k1 = 0.0;
    double k2 = 0.0;
    double g = 0.0;
    std::cout << "Enter first side of triangle" << std::endl; 
    std::cin >> k1;
    k1 = isPossitive(k1);
    std::cout << "Enter second side of triangle " << std::endl;
    std::cin >> k2;
    k2 = isPossitive(k2);
    std::cout << "triangle area is " << k1 * k2 * 0.5 << std::endl;
    std::cout << "hypotenuse is " << sqrt(k1 * k1 + k2 * k2);

}
/*task5*/
void task5()
{
    double x = 0.0;
    double y = 0.0;
    double r = 0.0;
    double corner = 0.0;
    std::cout << "Enter X coordinate " << std::endl;
    std::cin >> x;
    std::cout << "Enter Y coordinate " << std::endl;
    std::cin >> y;
    std::cout << "Radius in new coodinate system is " << sqrt(x * x + y * y) << "Corner is " << atan(y / x) << std::endl;
}
/*task 7*/
void task7()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;
    double x1 = 0.0;
    double x2 = 0.0;
    std::cout << "Enter digit a in equation" << std::endl;
    std::cin >> a;
    std::cout << "Enter digit b in equation" << std::endl;
    std::cin >> b;
    std::cout << "Enter digit c in equation" << std::endl;
    std::cin >> c; //рассматриваем все варианты, где коэффициенты принимают разные значения
    if (a == 0.0 && b == 0.0 && c == 0.0)
        std::cout << "amount of solutions is infinitive" << std::endl;
    else if (a == 0.0 && b != 0.0 && c != 0.0)
        std::cout << "solution is " << -(c * b) << std::endl;
    else if (a == 0.0 && b == 0.0 && c != 0.0)
        std::cout << "no solutions " << std::endl;
    else if (a == 0 && c == 0.0 && b != 0.0)
        std::cout << "solution is 0" << std::endl;
    else if (b == 0 && c == 0.0 && a != 0.0)
        std::cout << "solution is 0" << std::endl;
    else if (c == 0.0 && a != 0.0 && b != 0.0)
        std::cout << "solution are 0 and " << -(b / a) << std::endl;
    else if (b == 0 && a != 0 && c != 0)
    {
        if ((-(c / a)) < 0.0)
            std::cout << "no solutions " << std::endl;
        else
        {
            x1 = sqrt((-(c / a)));
            x2 = -(sqrt((-(c / a))));
            std::cout << "solutions are " << x1 << " and " << x2 << std::endl;
        }
    }
    else if(a != 0.0 && b != 0.0 && c != 0.0) // переходим к классическому квадратному уравнению
    {
        double disc = (b * b) - 4.0 * a * c;
        std::cout << "discriminant is " << disc << std::endl;

        if (disc < 0.0)
            std::cout << "no solution" << std::endl;
        else if (disc == 0.0)
            std::cout << "solution is " << -b / (2.0 * a) << std::endl;
        else
        {
            x1 = (-b - sqrt(disc)) / (2.0 * a);
            x2 = (-b + sqrt(disc)) / (2.0 * a);
            std::cout << "solutions are " << x1 << " and " << x2 << std::endl;
        }

    }

}
/*task9*/
void task9() 
{
    int sec = 0;
    std::cout << "Enter second " << std::endl;
    std::cin >> sec;
    sec = isPossitive(sec);
    sec = sec % (24 * 3600); // убираем лишние дни 
    int hours = sec / 3600; 
    int minutes = sec % 3600 / 60;
    std::cout << "amount of minutes is " << minutes << " amount of hours is " << hours << std::endl;

}
/*task11*/
void task11()
{
   double money = 0.0;
   std::cout << "Enter sum " << std::endl;
   std::cin >> money;
   money = isPossitive(money);
   if (money > 1000.0)
       std::cout << "total sum is " << money - money * 0.1 << std::endl;
   else
       std::cout << "total sum is " << money << std::endl;

}
/*task 13*/
void task13()
{
    srand(time(NULL));
    int user_number = 0;
    int f_random_number = 1 + rand() % 9;
    int s_random_number = 1 + rand() % 9;
    int random_mult = f_random_number * s_random_number;
    std::cout << "Try to guess number " << f_random_number << s_random_number << std::endl;
    std::cin >> user_number;
    if(user_number == random_mult)
        std::cout << "You're right!" << std::endl;
    else
        std::cout << "You're wrong :(" << std::endl;

}
/*task15*/
void task15() 
{
    int month = 0;
    std::cout << "Enter month " << std::endl;
    std::cin >> month;
    enum Monthes{
        JANUARY = 1,
        FEBRUARY,
        MARCH, 
        APRIL, 
        MAY, 
        JUNE, 
        JULY, 
        AUGUST, 
        SEPTEMBER, 
        OCTOBER, 
        NOVEMBER, 
        DECEMBER
    };
    switch (month)
    {
    case JANUARY:
        std::cout << "january, winter";
        break;
    case FEBRUARY:
        std::cout << "february, winter";
        break;
    case MARCH:
        std::cout << "march, spring";
        break;
    case APRIL:
        std::cout << "april, spring";
        break;
    case MAY:
       std::cout << "may, spring";
        break;
    case JUNE:
        std::cout << "june, summer";
    case JULY:
        std::cout << "july, summer";
        break;
    case AUGUST:
        std::cout << "august, summer";
        break;
    case SEPTEMBER:
        std::cout << "september, autumn";
        break;
    case OCTOBER:
        std::cout << "october, autumn";
        break;
    case NOVEMBER:
        std::cout << "november, autumn";
        break;
    case DECEMBER:
        std::cout << "december, winter";
        break;
    default:
        std::cout << "Unkhown month" << std::endl;
        break;
    }
}
/*task 17*/
void task17()
{
    int number = 0;
    std::cout << "Enter number " << std::endl;
    std::cin >> number;
    while (number < 1 or number > 99) // проверка диапазона
    {
        std::cout << "Enter number from 1 to 99 " << std::endl;
        std::cin >> number;
    }
    if (number % 10 == 1)
        std::cout << number << "a копейка" << std::endl;
    else if (number >= 5 and number <= 19 || number % 10 >= 5 and number % 10 <= 9)
        std::cout << number << "k копеек" << std::endl;
    else if (number % 10 >= 2 and number % 10 <= 4)
        std::cout << number << "i копейки" << std::endl;
}
/*task19*/
void task19()
{
    const int b = 3;
    int number = 0;
    int mult = 1;
    int sum = 0;
    std::cout << "Enter number " << std::endl;
    std::cin >> number;
    number = isPossitive(number);
    while(number / 100 == 0 or number / 100 > 9) // проверка диапазона
    {
        std::cout << "Enter number from 100 to 999 " << std::endl;
        std::cin >> number;
    }
    for(int i = 0; i < 3; i ++)
    {
        sum += number % 10;
        mult *= number % 10;
        number /= 10;
    }
    if (mult > b)
        std::cout << "Multiplication of digits is higher than b" << std::endl;
    if (sum % 7 == 0)
        std::cout << "the sum of the digits is a multiple of 7 " << std::endl;

}

int main()
{
    //task1();
    //task3();
    //task5();
    //task7();
    //task9();
    //task11();
    //task13();
    //task15();
    //task17();
    task19();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
