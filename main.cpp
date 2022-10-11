#include <iostream>
#include <cmath>

using namespace std;

void time(int GivenSeconds, int& hours, int& mins, int& secs);

int main() {

  int seconds = 0;
  int hours, mins, secs;
  
  cout << "Please input the number of seconds you would like to convert: " << endl;
  cin >> seconds;

  
  return 0;
  
}

/*****************************************
This function converts a given number of seconds into minutes, hours and seonds
Parameters: GivenSeconds // the number of seconds inputed
            and passby values hours, mins, and secs   // the outputted hours minutes and seconds. ******************************************/


void time(int GivenSeconds, int& hours, int& mins, int& secs){

  int timeRemaining;        // throw away variable to find uncalculated remaining seconds

  hours = GivenSeconds / 3600;   // calculate number of hours, put them in allocated space

  timeRemaining = GivenSeconds % 3600;    // find remaining seconds excluding hours

  mins = timeRemaining / 60;     // calc number of minutes

  secs = timeRemaining % 60;    // calc number of seconds 
  
  
}