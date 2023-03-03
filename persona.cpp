#include<iostream>
using namespace std;
class persona{
	protected:	string nombres, apellidos, direccion, fecha_nacimiento;
				int telefono;
	protected:
		persona(){
		}
		persona(string nom, string ape, string dic, string fn, int tel){
			nombres = nom;
			apellidos = ape;
			direccion = dic;
 			fecha_nacimiento = fn;
 			telefono = tel;
		}
	void mostrar();	
	void agregar();
};
