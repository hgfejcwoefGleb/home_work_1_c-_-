
#include <iostream>
#define _USE_MATH_DEFINES 
#include <math.h>

/* Task 2*/
double task2() {
	double r; //r - радиус
	std::cout << "Ведите радиус ";
	std::cin >> r;
	while (r <= 0) {
		std::cout << "Радиус должен быть положительным, введите значение еще раз ";
		std::cin >> r;
	}
	std::cout << "Длина окружности = " << 2 * M_PI * r << std::endl;
	std::cout << "Площадь круга = " << M_PI * r * r << std::endl;
	return 0;
}

/* Task 4 */
int task4() {
	int n, count = 0; //n - вводимое четырехзначное число, count - счетчик суммы цифр
	std::cout << "Введите десятичное четырёхзначное число ";
	std::cin >> n;
	for (int i = 0; i < 4; ++i) {
		count += n % 10;
		n /= 10;
	}
	std::cout << "Сумма цифр = " << count << std::endl;
	return 0;
}

/* Task 6 */
double task6() {
	double r, angle; //r - переменная радиуса, angle - переменная угла
	std::cout << "Введите радиус в полярной системе координат ";
	std::cin >> r;
	while (r <= 0) {
		std::cout << "Некорректный радиус, введите положительное число ";
		std::cin >> r;
	}
	std::cout << "Введите угол в полярной системе координат ";
	std::cin >> angle;
	std::cout << "Координата x в декартовой системе координат = " << r * cos(angle) << std::endl;
	std::cout << "Координата y в декартовой системе координат = " << r * sin(angle) << std::endl;
	return 0;
}

/* Task 8 */
double task8() {
	double a, b, c; // a, b, c - стороны треугольника
	std::cout << "Введите стороны треугольника через пробел ";
	std::cin >> a >> b >> c;
	while ((a + b < c or a + c < b or c + b < a) or a <= 0 or b <= 0 or c <= 0){
		std::cout << "Введите корректные числа (любые две стороны должны быть больше третьей, и все значения положительные) ";
		std::cin >> a >> b >> c;
	}
	double med_a = 0.5 * sqrt(2 * b * b + 2 * c * c - a * a); // медиана к стороне а
	double med_b = 0.5 * sqrt(2 * a * a + 2 * c * c - b * b); // медиана к стороне b
	double med_c = 0.5 * sqrt(2 * b * b + 2 * a * a - c * c); // медиана к стороне с
	double med_2a = 0.5 * sqrt(2 * med_b * med_b + 2 * med_c * med_c - med_a * med_a);
	double med_2b = 0.5 * sqrt(2 * med_a * med_a + 2 * med_c * med_c - med_b * med_b);
	double med_2c = 0.5 * sqrt(2 * med_b * med_b + 2 * med_a * med_a - med_c * med_c);
	std::cout << "Медианы получившегося треугольника: " << med_2a << " " << med_2b << " " << med_2c << std::endl;
	return 0;
}

/* Task 10 */
int task10() {
	int a, b, c; // a, b, c - стороны треугольника
	std::cout << "Введите стороны треугольника через пробел ";
	std::cin >> a >> b >> c;
	while ((a + b < c or a + c < b or c + b < a) or a <= 0 or b <= 0 or c <= 0) {
		std::cout << "Введите корректные числа (любые две стороны должны быть больше третьей, и все значения положительные) ";
		std::cin >> a >> b >> c;
	}
	if (a == b or b == c or a == c) {
		std::cout << "Треугольник равнобедренный" << std::endl;
	}
	else {
		std::cout << "Треугольник не равнобедренный" << std::endl;
	}
	return 0;
}

/* Task 12 */
int task12() {
	int height, weight; //height - переменная роста, weight - переменная веса
	std::cout << "Введите свой рост ";
	std::cin >> height;
	while (height <= 0) {
		std::cout << "Рост должен быть положительным, введите еще раз ";
		std::cin >> height;
	}
	std::cout << "Введите свой вес ";
	std::cin >> weight;
	while (weight <= 0) {
		std::cout << "Вес должен быть положительным, введите еще раз ";
		std::cin >> weight;
	}
	if (weight < height - 100) {
		std::cout << "Вам необходимо поправиться" << std::endl;
	}
	else if (weight > height - 100) {
		std::cout << "Вам необходимо похудеть" << std::endl;
	}
	else {
		std::cout << "У вас идеальный вес!" << std::endl;
	}
	return 0;
}

/* Task 14 */
int task14() {
	int time, day; //time - продолжительность разговора, day - день недели
	std::cout << "Стоимость переговоров 6р за 1 минуту, в субботу и в воскресенье предоставляется скидка в 20%!" << std::endl;
	std::cout << "Ведите продолжительность вашего разговора в минутах ";
	std::cin >> time;
	while (time <= 0) {
		std::cout << "Некорректное время, введите положительное число ";
		std::cin >> time;
	}
	std::cout << "Введите день недели ваших пероговоров (используйте цифры от 1 до 7) ";
	std::cin >> day;
	while (day < 1 or day > 7) {
		std::cout << "Некорректное число, используйте цифры от 1 до 7 ";
		std::cin >> day;
	}
	if (day == 6 or day == 7) {
		std::cout << "Стоимость ваших переговоров со скидкой составит " << time * 4.8 << " р" << std::endl;
	}
	else {
		std::cout << "Стоимость ваших переговоров составит " << time * 6 << " р" << std::endl;
	}
	return 0;
}

/* Task 16 */
int task16() {
	int n; //n - вводимое шестизначное число
	std::cout << "Введите шестизначное число ";
	std::cin >> n;
	while (n > 999999 or n < 100000) {
		std::cout << "Введено некорректное число, введите именно шестизначное число ";
		std::cin >> n;
	}
	if ((n / 100000 + n / 10000 % 10 + n / 1000 % 10) == (n % 10 + n / 10 % 10 + n / 100 % 10)) {
		std::cout << "Число счастливое!" << std::endl;
	}
	else {
		std::cout << "Число не является счастливым" << std::endl;
	}
	return 0;
}

/* Task 18 */
int task18() {
	int n, new_n = 0; //n - вводимое четырехзначное число, new_n - перевернутое число, проверяемое на палиндром
	std::cout << "Введите четырехзначное число ";
	std::cin >> n;
	while (n <= 0) {
		std::cout << "Некорректное число, введите положительное число ";
		std::cin >> n;
	}
	int k = n;
	while (n > 0) {
		new_n = new_n * 10 + n % 10;
		n /= 10;
	}
	if (new_n == k) {
		std::cout << "Число является палиндромом!" << std::endl;
	}
	else {
		std::cout << "Число не является палиндромом" << std::endl;
	}
	return 0;
}

/* Task 20 */
int task20() {
	double a, b, c, d; // a,b - длина и ширина 1 прямоугольника; c, d - длина и ширина 2 прямоугольника
	std::cout << "Введите длину и ширину первого прямоугольника через пробел ";
	std::cin >> a >> b;
	while (a <= 0 or b <= 0) {
		std::cout << "Некорректные значения, введите положительные числа ";
		std::cin >> a >> b;
	}
	std::cout << "Введите длину и ширину второго прямоугольника через пробел ";
	std::cin >> c >> d;
	while (c <= 0 or d <= 0) {
		std::cout << "Некорректные значения, введите положительные числа ";
		std::cin >> c >> d;
	}
	if ((a < c and b < d) or (a < d and b < c)) {
		std::cout << "Можно поместить один прямоугольник во второй" << std::endl;
	}
	else {
		std::cout << "Нельзя поместить один прямоугольник во второй" << std::endl;
	}
	return 0;
}

/* Task 21 */
int task21() {
	std::cout << "Размер int: " << sizeof(int) << " бит" << std::endl;
	std::cout << "Размер float: " << sizeof(float) << " бит" << std::endl;
	std::cout << "Размер bool: " << sizeof(bool) << " бит" << std::endl;
	std::cout << "Размер double: " << sizeof(double) << " бит" << std::endl;
	std::cout << "Размер char: " << sizeof(char) << " бит" << std::endl;
	return 0;
}
int main()
{
	setlocale(LC_ALL, "Russian");
	task2();
	task4();
	task6();
	task8();
	task10();
	task12();
	task14();
	task16();
	task18();
	task20();
	task21();
}


