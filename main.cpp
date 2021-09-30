/*
Matthew Walls
COSC-1436-57001
This Program initializes 3 structures and displays populated results
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <iomanip>
using namespace std;

struct timeOfDay {
short hour;
short minute;
short second;
};
struct appDate{
  short dayOfMonth;
  short month;
  int year;
};
struct events{
string eventName;
timeOfDay eventtime;
appDate eventDate;
};

void displaytimeOfDay(timeOfDay &toevent){
  cout<<"Time of the event is : "<<toevent.hour<<":"<<toevent.minute<<":"<<toevent.second<<endl;
}
void displayappDate(appDate &doevent){
  cout<<"Date of the event is : " <<doevent.month<< "/"<<doevent.dayOfMonth<<"/"<<doevent.year<<endl;
}
void displayEvent(events &event1){
  cout<<"Event : "<<event1.eventName;
  /*cout<<"Time of the event is : 
  "<<toevent.hour<<":"<<toevent.minute<<":"<<toevent.second<<endl;
cout<<"Date of the event is : "<<doevent.month<<"/"<<doevent.dayOfMonth<<"/"<<doevent.year<<endl;*/
}

int main() {
  events event1;
  timeOfDay toevent;
  appDate doevent;
  
  toevent={9,30,0};
  doevent={30,9,2021};
  event1={"Catalina Wine Mixer",0,0};

displaytimeOfDay(toevent);
displayappDate(doevent);
displayEvent(event1);

}