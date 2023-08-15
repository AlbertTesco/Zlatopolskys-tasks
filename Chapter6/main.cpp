#include <iostream>
#include <cmath>

void task_6_8( float n )
{
  //Дано число n. Из чисел 1, 4, 9, 16, 25, ... напечатать те, которые не превышают n.

  for ( int i = 1; ; i++ )
  {
    if ( n >= pow( i, 2 ) )
      std::cout << pow( i, 2 ) << std::endl;
    else
      break;
  }

}

void task_6_30( int num )
{
  /*
    Дано натуральное число. Определить номер цифры 8 в нем, считая от конца
    числа. Если такой цифры нет, ответом должно быть число 0, если таких цифр
    в числе несколько — должен быть определен номер самой левой из них.
  */

  int index = 0;
  int lenth = std::to_string( num ).length();

  for ( int i = lenth; i > 0; --i )
  {
    if ( num % 10 == 8 )
      index = i;

    num /= 10;
  }

  std::cout << index << std::endl;
}

int main()
{
// task_6_8( 25 );
  task_6_30( 18458 );
  return 0;
}
