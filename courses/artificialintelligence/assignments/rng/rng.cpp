// add your imports here
int main(){
  //Input numbers
  int numOfSeeds = 0;
  int seeds[numOfSeeds];
  int randomNumber = XorShift(seeds);
  int clampedNumber = clamp(randomNumber,0,100);
  // code here
}

int XorShift(int seeds[])
{
  int t = seeds[0] ^ (seeds[0] << 13);
  seeds[0] = seeds[1]; seeds[1] = seeds[2]; seeds[2] = seeds[3];
  return seeds[3] = seeds[3] ^ (seeds[3] >> 17) ^ t ^ (t << 5);
}

int clamp(int number, int min, int max)
{
  int value = min +(number % (max-min+1));
  return value;
}