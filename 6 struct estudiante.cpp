//Nombre: Ochoa Solis Ariel 
//No.Control: 24041205
#include <iostream>
#include<windows.h>

using namespace std;

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	
	struct Estudiante {
    	string nombre;
    	int edad;
    	int calificaciones[5];
		int promedio; 
	};
	Estudiante estudiante1; 
    int suma=0;

    cout<<"Ingresa el nombre del estudiante: ";
    getline(cin, estudiante1.nombre);

    cout<<"Ingresa la edad del estudiante: ";
    cin>>estudiante1.edad;

    cout<<"Ingresa las calificaciones de 5 materias:\n";
    for (int i=0; i<5;i++) {
        cout<<"Calificación de la unidad "<<i+1<<": ";
        cin>>estudiante1.calificaciones[i];
        suma=suma+estudiante1.calificaciones[i];
    }
    estudiante1.promedio=suma/5;

    cout<<"\nInformación del estudiante:\n";
    cout<<"Nombre: "<<estudiante1.nombre<<"\n";
    cout<<"Edad: "<<estudiante1.edad<<"\n";
    cout<<"Calificaciones: ";
    for (int i=0;i<5;i++){
        cout<<estudiante1.calificaciones[i]<<" ";
    }
    cout<<"\nPromedio: "<<estudiante1.promedio;
    
	return 0;
}