#include <iostream>

void task_2_40( float deg )
{
  /*
    С начала суток часовая стрелка повернулась на y градусов (0 ≤ y < 360, y —
    вещественное число). Определить число полных часов и число полных минут,
    прошедших с начала суток.
  */

  if ( deg < 0 || deg > 360 )
  {
    std::cout << "Ошибка" << std::endl;
    return;
  }

  std::cout << "Количество часов: " << int( deg / 30 ) << std::endl;

}

void task_2_43( int a, int b )
{
  /*
    Даны два целых числа a и b. Если a делится на b или b делится на a, то вывес-
    ти 1, иначе — любое другое число. Условные операторы и операторы цикла
    не использовать.
  */

  auto n1 = a % b;
  auto n2 = b % a;

  auto result = n1 * n2 + 1;

  std::cout << "Вывод: " << result << std::endl;

}

int main()
{
// task_2_40( 280 );
// task_2_43( 20, 23 );
  return 0;
}