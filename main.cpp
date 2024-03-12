#include <iostream>

/* Notes
- any algorithm for multiplying two numbers of n-digits, it takes 2n computation
steps
- any algorithm for adding two numbers of n-digits, it takes n computation steps
- Elementary school algorithm have complexity of - O(n^2)

x = a*10^n/2 + b
if a num = ab, n = number of digits
*/

long long pow(long long a, long long b) {
  long long res = 1;
  for (int i = 0; i < b; i++) {
    res *= a;
  }
  return res;
}

// recursive function
long long karatsubaMult(int x, int y) {
  if (x < 10 || y < 10)
    return x * y;
  long long tmp = x;
  uint8_t n, n_x = 0, n_y = 0;

  while (tmp) {
    n_x++;
    tmp /= 10;
  }
  tmp = y;
  while (tmp) {
    n_y++;
    tmp /= 10;
  }

  n = std::max(n_x, n_y);
  long long half = n / 2;

  long long a = x / pow(10, half);
  long long b = x % (long long)pow(10, half);
  long long c = y / pow(10, half);
  long long d = y % (long long)pow(10, half);

  long long ac = karatsubaMult(a, c);
  long long bd = karatsubaMult(b, d);
  long long ad_plus_bc = karatsubaMult(a + b, c + d) - ac - bd;

  return ac * pow(10, 2 * half) + (ad_plus_bc * pow(10, half)) + bd;
}

int main() {
  long long a, b;
  std::cout << "Enter num1: ";
  std::cin >> a;
  std::cout << "Enter num2: ";
  std::cin >> b;

  std::cout << "Normal multiplication: " << a * b << std::endl;
  std::cout << "karatsuba's multiplication: " << karatsubaMult(a, b)
            << std::endl;

  return 0;
}
