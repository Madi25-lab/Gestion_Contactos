#include <iostream>
#include <string>
using namespace std;

struct contactoEmail{
	string nombre;
	string sexo;
	int edad;
	int telefono[9];
	string email;
	string nacionalidad;
};


int main (){
	char eleccion;
	
	cout << "==========================================================" << endl;
    cout << "                 GESTOR DE CONTACTOS (MD)" << endl;
    cout << "==========================================================" << endl;
    
	do{
		cout<<"a) Agregar un contacto" <<endl;
		cout<<"b) Eliminar un contacto" <<endl;
		cout<<"c) Mostrar listado general de contactos registrados hasta ese momento" <<endl;
		cout<<"d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas" <<endl;
		cout<<"e) Salir" <<endl;
		cout<<"Seleccione una alternativa: ";
		cin>> eleccion;
		cout<<endl;
	    }while (eleccion !='e');
		cout<<"Saliendo del programa ... ";
		cin>> eleccion;
}