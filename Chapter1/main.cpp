#include <iostream>
#include <cmath>
using namespace std;

void task_1_58(){
/*
  У американского писателя-фантаста Рэя Бредбери есть роман "450 градусов
  по Фаренгейту". Какой температуре по шкале Цельсия соответствует указан-
  ное в названии значение?
*/
    const int TEMP_FAHR = 450;
    int temp_cels = (TEMP_FAHR - 32) * 5/9;
    std::cout << "Температура в Фаренгейтах: " << temp_cels << std::endl;
}

void task_1_54(int Tanya_age, int Mitya_age){
/*
  Возраст Тани — X лет, а возраст Мити — Y лет. Найти их средний возраст, а
  также определить, на сколько отличается возраст каждого ребенка от средне-
  го значения.
*/
    int avg_age = (Tanya_age + Mitya_age) / 2;

    std::cout << "Средний возраст: " << avg_age << std::endl;
    std::cout << "Разница возраста Тани: " << abs(Tanya_age - avg_age) << std::endl;
    std::cout << "Разница возраста Мити: " << abs(Mitya_age - avg_age) << std::endl;
}


int main()
{
    task_1_58();
    task_1_54(25, 21);
    return 0;
}
