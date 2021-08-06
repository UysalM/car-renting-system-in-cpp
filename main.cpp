#include <iostream>
using namespace std;

int toyotaFour(int noDay);
int toyotaFive(int noDay);
int hondaFour(int noDay);
int hondaFive(int noDay);
int opelFour(int noDay);
int opelFive(int noDay);
string reserveName();
string reservePhone();

int main() {
  string carMake[] = {"Toyota", "Honda", "Opel"};
  string toyotaModel[] = {"Auris 5 Seater", "Yaris 4 Seater"};
  string hondaModel[] = {"Civic 5 Seater", "Fit 4 Seat"};
  string opelModel[] = {"Astra 5 Seater", "Corsa 4 Seater"};
  int makeChoice;
  int noDay;
  int price;
  string cName, cPhone;

  cout << "Welcome to T-Rental\n";
  cout << "Please select a brand to see model list\n";
  for(int listMake = 0; listMake < 3; listMake++) {
    cout << listMake;
    cout << "-)\t";
    cout << carMake[listMake];
    cout << "\n";
  }
  cout << "Enter 0, 1, or 2: ";
  cin >> makeChoice;
  switch(makeChoice) {
    case 0: int toyChoice;
            cout << "\nOur Toyota models\n";
            for(int listToyota = 0; listToyota < 2; listToyota++) {
              cout << listToyota;
              cout << "-) ";
              cout << toyotaModel[listToyota];
              cout << "\n";
            }
            cout << "Enter 0 or 1: ";
            cin >> toyChoice;
            cout << "\nEnter number of days for rental(minimum 2 days): ";
            cin >> noDay;
            if(noDay >=2) {
              cName = reserveName();
              cPhone = reservePhone();
              if(toyChoice == 0) {
                price = toyotaFive(noDay);
              }
              else if(toyChoice == 1) {
                price = toyotaFour(noDay);
              }
              else {
                cout << "\nEnter a valid number for model choice!";
              }
            }
            else {
              cout << "\nMinimum day for rent must be 2 days.";
            }
            cout << cName << " " << cPhone;
            cout << "\nYou selected ";
            cout << toyotaModel[toyChoice];
            cout << "\nFor ";
            cout << noDay;
            cout << " days";
            cout << "\nTotal price is:\t";
            cout << price;
    break;
    case 1: int honChoice;
            cout << "\nOur Honda models\n";
            for(int listHonda = 0; listHonda < 2; listHonda++) {
              cout << listHonda;
              cout << "-) ";
              cout << hondaModel[listHonda];
              cout << "\n";
            }
            cout << "Enter 0 or 1: ";
            cin >> honChoice;
            cout << "\nEnter number of days for rental(minimum 2 days): ";
            cin >> noDay;
            if(noDay >=2) {
              cName = reserveName();
              cPhone = reservePhone();
              if(honChoice == 0) {
                price = hondaFive(noDay);
              }
              else if(honChoice == 1) {
                price = hondaFour(noDay);
              }
              else {
                cout << "\nEnter a valid number for model choice!";
              }
            }
            else {
              cout << "\nMinimum day for rent must be 2 days.";
            }
            cout << cName << " " << cPhone;
            cout << "\nYou selected ";
            cout << hondaModel[honChoice];
            cout << "\nFor ";
            cout << noDay;
            cout << " days";
            cout << "\nTotal price is:\t";
            cout << price;
    break;
    case 2: int opChoice;
            cout << "\nOur Opel models\n";
            for(int listOpel = 0; listOpel < 2; listOpel++) {
              cout << listOpel;
              cout << "-) ";
              cout << opelModel[listOpel];
              cout << "\n";
            }
            cout << "Enter 0 or 1: ";
            cin >> opChoice;
            cout << "\nEnter number of days for rental(minimum 2 days): ";
            cin >> noDay;
            if(noDay >=2) {
              cName = reserveName();
              cPhone = reservePhone();
              if(opChoice == 0) {
                price = opelFive(noDay);
              }
              else if(opChoice == 1) {
                price = opelFour(noDay);
              }
              else {
                cout << "\nEnter a valid number for model choice!";
              }
            }
            else {
              cout << "\nMinimum day for rent must be 2 days.";
            }
            cout << cName << " " << cPhone;
            cout << "\nYou selected ";
            cout << opelModel[opChoice];
            cout << "\nFor ";
            cout << noDay;
            cout << " days";
            cout << "\nTotal price is:\t";
            cout << price;
    break;
    default: cout << "\nPlease enter a valid number for brand choice.";
  }
}

int toyotaFour(int noDay) {
  int total = 40 * noDay;
  return total;
}

int toyotaFive(int noDay) {
  int total = 50 * noDay;
  return total; 
}

int hondaFour(int noDay) {
  int total = 45 * noDay;
  return total; 
}

int hondaFive(int noDay) {
  int total = 55 * noDay;
  return total; 
}

int opelFour(int noDay) {
  int total = 48 * noDay;
  return total; 
}

int opelFive(int noDay) {
  int total = 58 * noDay;
  return total; 
}

string reserveName() {
  string customerName;
  cout << "\nEnter name for reservation: ";
  cin >> customerName;
  return customerName;
}

string reservePhone() {
  string customerPhone;
  cout << "\nEnter phone number: ";
  cin >> customerPhone;
  return customerPhone;
}