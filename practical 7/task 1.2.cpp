#include <iostream>
#include <ctime>

using namespace std;

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    
    int ch;
    cout<<"1 for day \n 2 for month \n 3 for year \n 4 for time\n";
   cin>>ch;
   switch(ch)
   {
   case 1:
   cout << "Day: "<< ltm->tm_mday << endl;
   break;
   case 2:
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    break;
    case 3:
   cout << "Year:" << 1900 + ltm->tm_year<<endl;
  break;
   case 4:
   cout << "Time: "<< ltm->tm_hour << ":";
   cout << ltm->tm_min << ":";
   cout << ltm->tm_sec << endl;
   break;
   default:
   cout<<"Invalid Choice";
}
return 0;
}
