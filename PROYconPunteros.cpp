#include <iostream>
#include <cstring>
#include "windows.h"
#include <stdlib.h>
#include <fstream>
using namespace std;

string nombreArchivo; // Nombre del archivo de texto
ofstream archivo;  // declaracion de la Variable archivo para que funcione el envio de texto xd

int op,i, identidad=0, cantVendedores=100,m;
	
struct vendedor
{
			string nombre;
			string apellidos;
			string genero;
			string Ecivil;
			string dire;
			string correo;
			string carrera;
			string Eprevia; //Experiencia Previa
			int edad;
			int dni;
			int celular;				
}arrVendedores[100], *P=arrVendedores;  //ESTRUCTURA

void ingreso(vendedor *P);
void reporte(vendedor *P);
void ultimo();

/*
void cond()  //Cond es Condicion
{
		if (op==1 || op==2 || op==3 || op==4 || op==5)
		{
			system("cls");
		}
		else
		{
		
			do
			{
			
				system("cls");
				cout<<endl<<endl;
				cout<<"\t    *******************  "<<endl;
				cout<<"\t    *    E R R O R    *  "<<endl;
				cout<<"\t    *******************  "<<endl;
				cout<<endl<<endl<<endl;
				
				cout<<"  1) REGISTRO "<<endl;  		 cout<<"  2) MOSTRAR DATOS DEL REGISTRO"<<endl;
				cout<<"  3) BUSCAR POR DNI"<<endl; 	 cout<<"  4) ELIMINAR VENDEDEOR"<<endl;	
				cout<<"  5) FINALIZAR     ";  cin>>op;
			
			}while(op<1 || op>5);
			if (op==1 || op==2 || op==3 || op==4 || op==5)
			{
				system("cls");
			}
			
		}
}
*/

void menu()
{

			cout<<endl<<endl;
			cout<<"\t    ************************  "<<endl;
			cout<<"\t    *  B I E N V E N I D O *  "<<endl;
			cout<<"\t    ************************  "<<endl;
			cout<<endl<<endl<<endl;
			
			cout<<"  1) REGISTRO "<<endl;  cout<<"  2) MOSTRAR DATOS DEL REGISTRO"<<endl;
			cout<<"  3) BUSCAR POR DNI"<<endl; 	 cout<<"  4) ELIMINAR VENDEDEOR"<<endl;	
			cout<<"  5) FINALIZAR     ";  cin>>op;
					
		//	cond();
}

void cuerpo()
{
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	do
	{
		menu(); 
	
	switch (op)
			{
						case 1:		ingreso(vendedor *P);
									cout<<endl<<endl<<"   Regresar al menu (1):  ";  cin>>m;
									if (m==1)
									{ 	system("cls"); menu();	}
									break;
									
				
					
					//	case 2:  	reporte(vendedor *P);break; 
											
						
				/*		case 3:   	 int D; // D es de DNI jsjsjsj
				                     cout<<endl<<endl<<"   Ingrese el DNI a buscar: ";
				                     cin>>D;
				                     for(int i = 0;i<cantVendedores;i++)
									 {
							              if(D == arrVendedores[i].dni)
									 	  {
								                cout<<endl<<endl<<"            LOS DATOS DEL VENDEDOR Nro "<<i+1<<"  SON: "<<endl<<endl; 
												cout<<endl<<"   Nombre: "<<arrVendedores[i].nombre<<endl;
							                    cout<<endl<<"   Apellidos: "<<arrVendedores[i].apellidos<<endl;
							                    cout<<endl<<"   Edad: "<<arrVendedores[i].edad<<endl;
							                    cout<<endl<<"   Genero: "<<arrVendedores[i].genero<<endl;
							                    cout<<endl<<"   Estado Civil: "<<arrVendedores[i].Ecivil<<endl;
							                    cout<<endl<<"   Direccion: "<<arrVendedores[i].dire<<endl;
							                    cout<<endl<<"   Celular: "<<arrVendedores[i].celular<<endl;
							                    cout<<endl<<"   Correo: "<<arrVendedores[i].correo<<endl;
							                    cout<<endl<<"   Carrera:  "<<arrVendedores[i].carrera<<endl;
							                    cout<<endl<<"   Experiencia Previa:  "<<arrVendedores[i].Eprevia<<endl;
												cout<<endl<<"   DNI: "<<arrVendedores[i].dni <<endl;
							                    
												cout<<endl<<endl<<"   Regresar al menu (1):  ";  cin>>m;
										 	 			if (m==1)
										 	 			{ system("cls");  menu(); }
								                 		
							              } 
								   	 }	break;			
						
						case 4:   cout<<endl<<endl<<"   EN PROCESO:  "; 
						         				  						         
						         	cout<<endl<<endl<<"   Regresar al menu (1):  ";  cin>>m;
									if (m==1)
									{ 	system("cls"); menu(); }
						          cout<<"  ";	break;*/
						
						
						case 5:   ultimo(); break;
																
			}
		
		
			
	}while (op!=5);	
}


int main()
{
	cuerpo();  
	return 0;
}


void ultimo() // esta es la ultima opcion
{
	cout<<endl<<endl;
	cout<<"\t      *********************************  "<<endl;
	cout<<"\t      *  GRACIAS POR USAR EL PROGRAMA *  "<<endl;
	cout<<"\t      *********************************  "<<endl;
	cout<<endl<<endl<<endl;
}


void ingreso(vendedor *P)
{									
								cout<<endl<<"  Ingrese la cantidad de Vendedor/es a registrar:  "; cin>> cantVendedores;
								cin.ignore();					
								cout<<endl<<endl<<endl<<"             INGRESE LA INFORMACION DEL VENDEDOR  "<<endl<<endl<<endl;
				
								for	( i=0; i<cantVendedores;i++)
								{
								
									cout<<endl<<endl<<"   VENDEDOR Nro  "<<i++<<endl;
									cout<<endl<<"   Ingrese su Nombre: ";  getline(cin,(P+i)->nombre);
									
									cout<<endl<<"   Ingrese su Apellido: "; getline(cin,(P+i)->apellidos);
									
									cout<<endl<<"   Ingrese su Edad: "; cin>>(P+i)->edad;
										cin.ignore();
									
									cout<<endl<<"   Ingrese su Genero: "; getline(cin,(P+i)->genero);	
									
									cout<<endl<<"   Ingrese su Estado Civil: "; getline(cin,(P+i)->Ecivil); 
									
									cout<<endl<<"   Ingrese su Direccion: "; getline(cin,(P+i)->dire); 
									
									cout<<endl<<"   Ingrese su Nro de Celular: "; cin>>(P+i)->celular;
									cin.ignore();
									
									cout<<endl<<"   Ingrese su Correo Electronico: "; getline(cin,(P+i)->correo);
									
									cout<<endl<<"   Ingrese su Carrera: "; getline(cin,(P+i)->carrera);
									
									cout<<endl<<"   Tiene Experiencia Previa (Si/No): "; getline(cin,(P+i)->Eprevia);
									
									cout<<endl<<"   Ingrese su DNI: "; cin>>(P+i)->dni; 
									cout<<endl<<"   ********************************** ";
									cin.ignore();	
								}	
}


void reporte(vendedor *P)
{
		cout<<endl<<endl<<endl<<"   *** REPORTE DE VENDEDORES ***   "<<endl<<endl;
		for( i=0; i<cantVendedores; i++)	
		{
			cout<<endl<<endl<<"   VENDEDOR Nro  "<<i+1<<endl<<endl;
			cout<<endl<<"   Nombre:  "<<(P+i)->nombre<<endl;
			cout<<endl<<"   Apellido:  "<<(P+i)->apellidos<<endl;
			cout<<endl<<"   Edad:  "<<(P+i)->edad<<endl;
			cout<<endl<<"   Genero:  "<<(P+i)->genero<<endl;
			cout<<endl<<"   Estado Civil:  "<<(P+i)->Ecivil<<endl;
			cout<<endl<<"   Direccion:  "<<(P+i)->dire<<endl;
			cout<<endl<<"   Celular:  "<<(P+i)->celular<<endl;
			cout<<endl<<"   Correo Electronico:  "<<(P+i)->correo<<endl;
			cout<<endl<<"   Carrera:  "<<(P+i)->carrera<<endl;
			cout<<endl<<"   Experiencia Previa:  "<<(P+i)->Eprevia<<endl;
			cout<<endl<<"   DNI:  "<<(P+i)->dni<<endl<<endl<<endl;				
		}			
									
		cout<<endl<<endl<<endl<<"   Regresar al menu (1):  ";  cin>>m;
		if (m==1)
		{ 	system("cls"); menu(); }
}



