#include<iostream>
#include<ctime>
using namespace std;

int main() {
     int numOfRooms, bookedRooms;
     cin >> numOfRooms >> bookedRooms;
     int* ptr = new int[bookedRooms];
     srand(time(NULL));
     int temp;

     for (int i = 0; i < bookedRooms; i++) {
          cin >> ptr[i];
     }

     if (numOfRooms == bookedRooms)
          cout << "too late" << endl;
     else {
          temp = (rand() % numOfRooms) + 1;
          for (int i = 0; i < bookedRooms; i++) {
               if (temp == ptr[i]) {
                    temp = (rand() % numOfRooms) + 1;
                    i = 0;
               }
          }
          cout << temp << endl;
     }

     delete[] ptr;

     return 0;
}