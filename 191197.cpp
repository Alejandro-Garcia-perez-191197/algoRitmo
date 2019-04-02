#include <iostream>

using namespace std;



int main() 
{
	float dato[3];
	cout<<"ingrese los siguentes datos"<<endl;
	cout<<"capacidad disponible en el disco duro\n";
	cout<<"cuantas veces al mes hace limpieza de multimedios\n";
	cout<<"cuantas veces al mes hace chequeo de virus a la pc\n";
	cout<<"cuanta capasidad de RAM tiene el disco duro de la PC\n"
	for (i=0;i<3;i++)
	{
		cin>>dato[i]
	}
	for (i=0;i<3;i++)
	{
		if (dato[0]>=120)
			cout<<"bien\n";
		else
			cout<<"la capaidad de disco duro no es lo sufuciente para el rendimiento de la computadora\n";
		if (dato[1]>=4)
			cout<<"bien\n";
		else
			cout<<"existe basura de multimedio que daña el rendimiento de la computadora\n";
		if (dato[2]>=4)
			cout<<"bien\n";
		else
			cout<<"existe posibles virus que daña el rendimiento de la computadora\n";
		if (dato[3]>=1)
			cout<<"bien\n";
		else
			cout<<"la capasidad de memoria RAM no es lo sufiiente para rendimiento de la computadora\n";

	}
	
}
