#include <iostream>
using namespace std;
int main()
{
   int x;
   int y;
   
   cout << "=====[Cartesian Plate]=====" << endl;
   cout << "Please enter the following value" << endl;
   cout << "x-axis: ";
   cin >> x;
   cout << "y-axis: ";
   cin >> y;
   cout << "---" << endl;
   cout << "x \t y" << endl;
   cout << "_____________" << endl;
   cout << x << "\t " << y << endl;
   cout << "---" << endl;
   cout << "Plated: " << "(" << x << "," << y << ")" << endl;
   cout << "Result: ";
   if ((x>=1)&&(y>=1))
   {
       cout << "Quadrant I" << endl;
       cout << "Upper Right Location" << endl;
   }
   else if ((x<=-1)&&(y>=1))
   {
       cout << "Quadrant II" << endl;
       cout << "Upper Left Location" << endl;
   }
   else if ((x<=-1)&&(y<=-1))
   {
       cout << "Quadrant III" << endl;
       cout << "Lower Left Location" << endl;
   }
   else if ((x>=1)&&(y<=-1))
   {
       cout << "Quadrant IV" << endl;
       cout << "Lower Right Location" << endl;
   }
   else if ((x<1)&&(x>-1))
   {
   	   cout << "y-axis" << endl;
   }
   else if ((y<1)&&(y>-1))
   {
   	   cout << "x-axis" << endl;
   }
}
