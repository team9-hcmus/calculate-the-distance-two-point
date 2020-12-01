#include<iostream>
using namespace std;
int main()
{
	float x1, x2, y1, y2, e;
	cout << "enter x1" << endl;
	cin >> x1;
	cout << "enter y1" << endl;
	cin >> y1;
	cout << "enter x2" << endl;
	cin >> x2;
	cout << "enter y2" << endl;
	cin >> y2;
	e=sqrt((x2 - x1)*(x2 -x1) + (y2 - y1 )*( y2 - y1 ) );
	cout << "distance between two 2-dimensional coordinates " << e;
		return(0);

}
