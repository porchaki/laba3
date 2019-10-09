#include <iostream>
using namespace std;
int main()
{
	double A, B, C, t;
	cin>>A>>B>>C;
	t = A;
	
	A = B;
	B = C;
	C = t;
	cout << A<<endl<<B<<endl<<C<<endl;
	system ("pause");
	return 0;
}
	