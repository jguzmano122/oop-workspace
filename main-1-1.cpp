#include <iostream>
#include <string> 
#include <ctime>
#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"
#include <unistd.h>

using namespace std;

int main(){

int totalVeh = 0;
int freeSpaces = 0;
int n_cars;
int n_buses;
int n_motorbikes;

        cout << "please input the vehicles you wanna park:" << endl;
        cout << "how many cars? " << endl;
        cin >> n_cars;
        totalVeh = totalVeh + n_cars;
        
        cout << "how many buses? " << endl;
        cin >> n_buses;
        totalVeh = totalVeh + n_buses;
        
        cout << "how many motorbikes? " << endl;
        cin >> n_motorbikes;
        totalVeh = totalVeh + n_motorbikes;
            
        //cout << "total vehicles to park: "<< totalVeh << endl;

    Vehicle** arrayVehicles = new Vehicle *[totalVeh];

      for (int i = 0; i < n_cars; i ++){

        arrayVehicles[i] = new Car();
        sleep(3);
        arrayVehicles[i] -> getParkingDuration();
      }
       
      for (int i = n_cars; i < n_cars + n_buses; i++){

        arrayVehicles[i] = new Bus();
        sleep(4);
        arrayVehicles[i] -> getParkingDuration();

      } 

      for (int i = n_cars + n_buses; i < totalVeh; i++){

        arrayVehicles[i] = new Motorbike();
        sleep(2);
        arrayVehicles[i] -> getParkingDuration();

      } 
    return 0;
}