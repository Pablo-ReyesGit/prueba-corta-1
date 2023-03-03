#include <iostream>
#include "propietario.cpp"

using namespace std;
int main()
{
	string nit, nombres, apellidos, direccion, fecha_nacimiento;
	int telefono;
	double cui;
	
	cout<<"ingresar nit"<<endl;
	cin>>nit;
	cout<<"ingresar cui"<<endl;
	cin>>cui;	
	cout<<"ingresar nombres"<<endl;
	cin>>nombres;
	cout<<"ingresar apellidos"<<endl;
	cin>>apellidos;
	cout<<"ingresar direccion"<<endl;
	cin>>direccion;
	cout<<"ingresar fecha de nacimiento"<<endl;
	cin>>fecha_nacimiento;
	cout<<"ingresar telefono"<<endl;
	cin>>telefono;
	
	propietario obj = propietario(nombres, apellidos, direccion, fecha_nacimiento, telefono, nit, cui);
	
	obj.mostrar();
		
	cout<<"zona de modificacion"<<endl;
	cout<<"ingrese el Nit : "<<endl;
	cin>>nit;
	obj.setNit(nit);
	cout<<"ingrese el Cui"<<endl;
	cin>>cui;
	obj.setCui(cui);
	cout<<"ingrese el nombres : "<<endl;
	cin>>nombres;
	obj.setNnombres(nombres);
	cout<<"ingrese el apellidos : "<<endl;
	cin>>apellidos;
	obj.setApellidos(apellidos);
	cout<<"ingrese el direccion : "<<endl;
	cin>>direccion;
	obj.setDireccion(direccion);
	cout<<"ingrese la fecha de nacimiento : "<<endl;
	cin>>fecha_nacimiento;
	obj.setFecha_Nacimiento(fecha_nacimiento);
	cout<<"ingrese el telefono : "<<endl;
	cin>>telefono;
	obj.setTelefono(telefono);
	
	obj.agregar();
}
