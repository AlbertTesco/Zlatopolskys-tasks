#include <iostream>

void task_5_85( int num )
{
  /*
  Дано пятизначное число. Найти число, получаемое при прочтении его цифр справа налево.
  */

  int sum = 0;

  for ( int i = 1; i <= 5; ++i )
  {
    sum += num % 10;
    num /= 10;
  }

  std::cout << "Result: " << sum << std::endl;
}

void task_5_81( int x, int y )
{
  /*
    Даны натуральные числа х и у. Вычислить произведение x y, используя
    лишь операцию сложения. Задачу решить двумя способами.
  */

  int result = 0;

  for ( int i = 1; i <= y; ++i )
    result += x;

  std::cout << "First result: " << result << std::endl;

  result = 0;

  while ( y != 0 )
  {
    result += x;
    --y;
  }

  std::cout << "Second result: " << result << std::endl;

}

int main()
{
  task_5_85( 12345 );
  task_5_81( 2, 2 );

  return 0;
}
