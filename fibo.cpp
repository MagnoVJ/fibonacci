// Title: Fibonacci Sequence
// Author: Magno da Silva Santos

#include <iostream>

int main(int argc, char* argv[]) {

   if(argc > 1) {
      
      int i = 0;
      int j = 1;

      std::cout << i;
      std::cout << ", " << j;

      while(j < std::atoi(argv[1])) {
         int jAnt = j;
         j = i + j;
         std::cout << ", " << j;
         i = jAnt;
      }

      std::cout << std::endl;
   }
}
