#include <iostream>

void task_3_26()
{
  /*
    Вычислить значение логического выражения при всех возможных значениях
    логических величин X, Y и Z:
    а) не (X или Y) и (не X или не Z);
    б) не (не X и Y) или (X и не Z);
    в) X или не Y и не (X или не Z).
  */
  int x = 0;
  int y = 0;
  int z = 0;

  bool second_expression = !( !x && y ) || ( x && !z );

  for ( x = 0; x <= 1 ; ++x )
    for ( y = 0; y <= 1 ; ++y )
      for ( z = 0; z <= 1 ; ++z )
      {
        std::cout << "x: " << x << " ";
        std::cout << "y: " << y << " ";
        std::cout << "z: " << z << " ";
        std::cout << "First expression: " << ( !( x || y ) && ( !x || !z ) ) << " ";
        std::cout << "Second expression: " << ( !( !x && y ) || ( x && !z ) ) << " ";
        std::cout << "Third expression: " << ( x || !y && !( x || !z ) ) << " " << std::endl;
      }

}

void task_3_31( int n )
{
  /*
    3.31. Записать условие, которое является истинным, когда:
    а) целое N кратно пяти или семи;
    б) целое N кратно четырем и не оканчивается нулем.
  */
  if ( n % 5 == 0 || n % 7 == 0 )
    std::cout << "Первое условие выполнено" << std::endl;
  else
    std::cout << "Первое условие невыполнено" << std::endl;

  if ( n % 4 == 0 && n % 10 != 0 )
    std::cout << "Второе условие выполнено" << std::endl;
  else
    std::cout << "Первое условие невыполнено" << std::endl;
}

int main()
{
// task_3_26();
  task_3_31( 50 );
  return 0;
}
