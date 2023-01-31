//Emmanuel Rodriguez Meza
//22020200001
//Practica 4 Producto Escalar Triple

#include <iostream>

using namespace std;

int main()
{
	
	float vector1[2], esc, A, B , C;
	float vector2[2];
	float vector3[2];
	int i;
	for  (i = 0; i < 3; i++)
	{
	cout << "valores  del vector  1"<<endl;
	cin >> vector1[i];
	cout << "valores del vector  2" << endl;
	cin  >> vector2[i];
	cout << "valores del vector 3" << endl;
	cin  >> vector3[i];
	}	
	A = (vector2[1] * vector3[2]) - (vector3[1] * vector2[2]);
	B = (vector1[1] * vector3[2]) - (vector3[1] * vector1[2]);
	C = (vector1[1] * vector2[2]) - (vector2[1] * vector1[2]);	
	esc = A - B + C;
	cout << "El producto escalar es: " << esc;
}
