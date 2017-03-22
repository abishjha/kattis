#include<iostream>
#include<cmath>
#include<iomanip>

int main() {
     int p, a, b, c, d, n;
     std::cin >> p >> a >> b >> c >> d >> n;

     double* prices = new double[n];
     double difference = 0.0;
     double highest = 0, lowest = 0;

     for (int i = 1; i <= n; i++)
          prices[i - 1] = p * (sin((a * i) + b) + cos((c * i) + d) + 2);

     for (int i = 0; i < (n - 1); i++) {
          if (prices[i + 1] < prices[i]) {
               highest = prices[i];
               while (prices[i + 1] < highest && i < (n - 1)) {
                    lowest = prices[i + 1];
                    if ((highest - lowest) > difference)
                         difference = highest - lowest;
                    i++;
               }
          }
     }

     std::cout << std::setprecision(10) << std::fixed << difference << std::endl;

     delete[] prices;
     return 0;
}