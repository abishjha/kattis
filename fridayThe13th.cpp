#include<iostream>

int main() {
     int numOfCases;
     std::cin >> numOfCases;
     int* answer = new int[numOfCases];
     int numOfDays, numOfMonths, daysInMonth, count = 0;
     int* day;
     int* date;

     for (int i = 0; i < numOfCases; i++) {
          count = 0;
          answer[i] = 0;
          std::cin >> numOfDays >> numOfMonths;

          day = new int[numOfDays];
          for (int j = 0; j < numOfDays; j++)
               day[j] = (j + 1) % 7;

          date = new int[numOfDays];
          for (int k = 0; k < numOfMonths; k++) {
               std::cin >> daysInMonth;
               for (int j = 1; j <= daysInMonth; j++) {
                    date[count] = j;
                    count++;
               }
          }

          for (int l = 0; l < numOfDays; l++) {
               if (day[l] == 6 && date[l] == 13)
                    answer[i]++;
          }
          delete[] day;
          delete[] date;
     }

     for (int i = 0; i < numOfCases; i++)
          std::cout << answer[i] << std::endl;

     delete[] answer;
     return 0;
}