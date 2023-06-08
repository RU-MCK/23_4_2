#include <iostream>

#define SPRING 1
#define SUMMER 2
#define AUTUMN 3
#define WINTER 4
#define CHOICE_SEASON AUTUMN // write season
#define SEASON(season)season

void print(int temp) {
  if (temp == 1)
    std::cout << "Spring" << std::endl;
  else if (temp == 2)
    std::cout << "Summer" << std::endl;
  else if (temp == 3)
    std::cout << "Autumn" << std::endl;
  else if (temp == 4)
    std::cout << "Winter" << std::endl;
  else
    std::cout << "Error!" << std::endl;
};
#if SEASON(CHOICE_SEASON)

int main() {
   print(SEASON(CHOICE_SEASON));
  return 0;
}

#endif