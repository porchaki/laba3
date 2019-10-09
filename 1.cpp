#include <iostream>
using namespace std;
int  main()
{
	double A,B,t;
	cin>>A>>B;
	t=B; 
	B = A;
	A = t;
	cout<< A<<endl<<B<<endl;
	system ("pause");
	return 0;
}