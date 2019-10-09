#include <iostream>
using namespace std;
int main()
{
	double A, B, C, t, f;
	cin>>A>>B>>C;
	t = A;
	f = B;
	A = C;
	B = t;
	C = f;
	cout << A<<endl<<B<<endl<<C<<endl;
	system ("pause");
	return 0;
}
	