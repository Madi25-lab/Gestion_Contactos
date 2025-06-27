#include <iostream>
#include <string>
using namespace std;
int cont=0;
const int Max=100;

struct contactoEmail{
	string nombre;
	string sexo;
	int edad;
	int telefono;
	string email;
	string nacionalidad;
};

contactoEmail Contactos[Max];

void Agregar_Contacto(contactoEmail Contactos[], int &cont){
	
	cout<<"==========================================================" << endl;
    cout<<"                   Agregar Contacto" << endl;
    cout<<"==========================================================" << endl;
	cout<<"Ingrese el nombre completo"<<endl;
	cout<<cont+1<<".-: ";
	cin.ignore();
	getline(cin,Contactos[cont].nombre);
	
	cout<<endl;
	cout<<"*f*-> Femenino; *m*-> Masculino"<<endl;
	cout<<"Ingrese el sexo: ";
	getline(cin,Contactos[cont].sexo);
	cout<<endl;
	
	cout<<"Ingrese la edad: ";
	cin>>Contactos[cont].edad;
	cout<<endl;
	
	cout<<"Ingrese el numero de telefono : ";
	cin>>Contactos[cont].telefono;
	cout<<endl;
	
	cout<<"Ingrese el Email (cuenta@gmail.com): ";
	cin.ignore();
	getline(cin,Contactos[cont].email);
	cout<<endl;
	
	cout<<"Ingrese la nacionalidad: ";
	getline(cin,Contactos[cont].nacionalidad);
	cout<<endl;
	
	cont++;
	cout<<"--------------------Contacto agregado-----------------------"<<endl;
	cout<<endl;
	}

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
	    
		
		switch (eleccion) {
			case 'a':{
				Agregar_Contacto(Contactos, cont);
				break;
			}
				
			case 'b':{
				break;
			}
			
			case 'c':{
				break;
			}
				
			case 'd':{
				break;
			}
				
			case 'e':{
				break;
			}
				
			default:{
				break;
			}
					
		}
	}while (eleccion !='e');
	cout<<"Saliendo del programa ... ";
	
	return 0;
}