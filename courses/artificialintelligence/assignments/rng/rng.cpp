// add your imports here
#include <iostream>

int XorShift(unsigned int seed)
{
  seed = seed ^ (seed << 13);
  seed = seed ^ (seed >> 17);
  return seed ^ (seed << 5);
}

int clamp(unsigned int number, signed int min, signed int max)
{
  int value = min +(number % (max-min+1));
  return value;
}

int main(){
  //Input numbers
  unsigned int seed, numberOfRandNums, randomNumber, clampedNumber;
  signed int minRange, maxRange;
  std::cin >> seed >> numberOfRandNums >> minRange >> maxRange;

  for(int i = 0; i < numberOfRandNums; i++)
  {
    randomNumber = XorShift(seed);
    seed = randomNumber;
    clampedNumber = clamp(randomNumber,minRange,maxRange);
    std::cout << clampedNumber << std::endl;
  }
}

