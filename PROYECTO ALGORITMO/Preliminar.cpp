#include <iostream>
#include <stdlib.h>
#include<conio.h>
#include<iomanip>
#include<string.h>
#include<fstream>
#include <windows.h>
#include <ctime>
#include <vector>

using namespace std;
//no permite ingresar textos grandes
class Password{
	
	private:
	int administrador=1031, colab1=3217,colab2=4990,colab3=6361,ucolab1=103169741;
	int ucolab2=123455,ucolab3=21345, uadmin=32179682, palomitasgran = 30, palomitaspeque =25; 
	int nachosgran = 20, nachospeque=15, bebidagran= 17, bebidapeque = 15; 
	int combo1=60 , combo2=110 , combo3= 120;
	int funcion2d=33, funcion3d=35,  admin,  admin2,  admin3; 
	float x,x1, y1;
	double y,a;
	char opcionp[20], opcione[20],opcionc[20];
	
	
	public: 
	Password(int);
	Password(double);
	Password(int,int); 
	Password(float, double);
	Password(float,float);
	void comida();
	void horario();
	void contrasenia();
	int getAdministrador(){
	return administrador;
	}
	int getColab1(){
	return colab1;
	}
	int getColab2(){
	return colab2;		
	}
	int getColab3(){
	return colab3;
	}
	int getPalomitasgran(){
		return palomitasgran;		
	}
	int getPalomitaspeque(){
		return palomitaspeque;		
	}
	int getNachosgran(){
		return nachosgran;		
	}
	int getNachospeque(){
		return nachospeque;		
	}
	int getBebidasgran(){
		return bebidagran;		
	}
	int getBebidaspeque(){
		return bebidapeque;		
	}
	int getCombo1(){
		return combo1;		
	}
	int getCombo2(){
		return combo2;		
	}
	int getCombo3(){
		return combo3;		
	}
	
	int getFuncion2d(){
		return funcion2d;		
	}

	int getFuncion3d(){
		return funcion3d;		
	}
	
	
};


Password::Password(int _admin){ admin= _admin;
}

Password::Password(int _admin2, int _admin3){ admin2= _admin2; admin3=_admin3; 
}

Password::Password(float _x, double _y){ x=_x; 	y=_y;
}
Password::Password(float _x1, float _y1){ x1=_x1; 	y1=_y1;
}
Password::Password(double _a){ a=_a;
}

void Password::comida(){
	
	cout << "-------------------------------------" << endl; 
	cout << "           MENU DE COMIDA            " << endl; 
	cout << " ------------------------------------" << endl; 
	cout << endl; 
	cout << "                   BEBIDAS                 " << endl << endl; 
	cout << "-------------------------------------------" << endl << endl; 
	cout << "SABORES DISPONIBLES: " << "                    PRECIOS " << endl << endl; 
	cout << " CocaCola " << "                          " << "BEBIDA GRANDE Q." << bebidagran << endl;
	cout << " PepsiCola " << "                         " <<"BEBIDA PEQUEÑA Q." << bebidapeque << endl; 
	cout << " Mirinda   " << endl; 
	cout << " Grapette " << endl; 
	cout << " ZevenUp  " << endl; 
	cout << " Tea frio " << endl; 
	
	cout << endl; 
	cout << "---------------------------------------- " << endl; 
	cout << "                    COMIDA                   " << endl << endl; 
	cout << " ---------------------------------------- " << endl << endl; 
	cout << "NACHOS                                   NACHOS GRANDES Q." << nachosgran <<".00"<< endl; 
	cout << "                                         NACHOS PEQUEÑOS Q." << nachospeque<<".00"<<endl;
	cout << endl << endl; 
	cout << "PALOMITAS                                PALOMITAS GRANDES Q." << palomitasgran << ".00"<<endl; 
	cout << "                                         PALOMITAS PEQUENIAS Q." << palomitaspeque<< ".00"<< endl; 
	cout << endl; 
	cout << "-----------------------------------------"<< endl;
	cout << "                COMBOS DISPONIBLES       " << endl;
	cout << "-----------------------------------------"<< endl;
	cout << " COMBO 1:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS PEQUEÑAS " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl; 
	cout << " A TAN SOLO ---------> " << combo1;
	cout << endl << endl; 
	cout << " COMBO 2:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDE " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl;
	cout << " 1 NACHO GRANDE " << endl;  
	cout << " A TAN SOLO ---------> " << combo2;
	cout << endl << endl; 
	cout << " COMBO 3:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDES " << endl; 
	cout << " 2 BEBIDAS GRANDES " << endl; 
	cout << " 2 NACHOS GRANDES " << endl; 
	cout << " A TAN SOLO ---------> " << combo3;
	cout << endl << endl; 
	
	
}

void Password::contrasenia(){
	cout << endl << endl;
	cout << "CONTROL DE USUARIOS Y CONTRASENIAS" << endl; 
	cout << "NO PUEDES MODIFICAR LAS CONTRASENIAS" << endl;
	
	cout << " ADMINISTRADOR  " << "                " << "   CONTRASENIA " << endl; 
	cout <<  uadmin << "                           " <<  administrador << endl; 
	cout << " COLABORADOR 1  " << "                " << "   CONTRASENIA " << endl; 
	cout << ucolab1 << "                           " << colab1 << endl; 
	cout << " COLABORADOR 2   " << "                " << "   CONTRASENIA " << endl; 
	cout << ucolab2 << "                           " << colab2 << endl; 
	cout << " COLABORADOR 3 " << "                " << "   CONTRASENIA " << endl; 
	cout << ucolab3 << "                           " << colab3 << endl; 
	
	cout << "AUTORIZACION PARA CONTROL " << endl << endl; 
	
}
void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
}

void cuadro(int x1, int y1, int x2, int y2){
    int i;
    for (i=x1;i<x2;i++){	
		gotoxy(i,y1);printf("Ä") ; //linea horizontal superior 
		gotoxy(i,y2);printf("Ä") ; //linea horizontal inferior
    }

    for (i=y1;i<y2;i++){	
		gotoxy(x1,i);printf("³") ; //linea vertical izquierda
		gotoxy(x2,i);printf("³") ; //linea vertical derecha
    }
    
    gotoxy(x1,y1); printf("Ú"); 
    gotoxy(x1,y2); printf("À");
    gotoxy(x2,y1); printf("¿");
    gotoxy(x2,y2); printf("Ù");
}


ofstream agregarpeli1; 
ifstream consulta; 
string  nombre1, codigop, nombrep, director1, actorp1, actora1, duracion1,horario,anio;
int clavep, auxClavep;
bool repetido=false;
void agregarpeli(){

agregarpeli1.open("peliculas.txt",ios::out|ios::app);
consulta.open("peliculas.txt",ios::in);
    if(agregarpeli1.is_open() && consulta.is_open()){
    fflush(stdin);	
	cout << "INGRESA LA CONTRASEÑA DE LA PELICULA:    "; 
	cin >> auxClavep;
	consulta>>clavep; 
    while(!consulta.eof()){
	consulta>>codigop>>nombrep>>director1>>actorp1>>actora1>>duracion1>>anio; 
        if(auxClavep==clavep){
                cout<<"Ya Existe un Registro con esta Clave";
                repetido=true;
                break;
            }
            consulta>>clavep;
        }
        if(repetido==false){
    
    fflush(stdin);	

	cout << "INGRESE EL CODIGO DE LA PELICULA " ; 
	getline(cin,codigop);
	cout << "DIGITE EL NOMBRE DE LA PELICULA " ; 
	getline(cin,nombrep);
	cout << "DIGITE EL DIRECTOR DE LA PELICULA " ; 
	getline(cin,director1);
	cout << " DIGITE EL ACTOR PRINCIPAL DE LA PELICULA " ; 
	getline(cin,actorp1);
	cout << " DIGITE EL ANTAGONISTA DE LA PELICULA "; 
	getline(cin,actora1);
	cout << " DIGITE LA DURACION DE LA PELICULA " ; 
	getline(cin,duracion1);
	cout << " DIGITE EL AÑO DE ESTRENO "; 
	getline(cin,anio); 

agregarpeli1<<auxClavep<<"  "<<codigop<<"  "<<nombrep<<"  "<<director1<<"  "<<actorp1<<"  "<<actora1<<"  "<<duracion1<<"  "<<anio<<" "<<endl; 
            cout<<"Registro Agregagado"<<endl;
        }

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    agregarpeli1.close();
    consulta.close();
}//Fin funcion altas

char opcionp[0];
ofstream agregarestre1; 
string  resenia, codigoe, nombree,actorpe,actorae,directore, duracione,nombre2,horarioe;
ifstream consulta2; 
int clavee, auxClavee;
void agregarestre(){
bool repetido2 = false; 

agregarestre1.open("estrenos.txt",ios::out|ios::app);
consulta2.open("estrenos.txt",ios::in);
    if(agregarestre1.is_open() && consulta2.is_open()){

	do{
	fflush(stdin);	
	cout << "                            "<< endl; 
	cout << " AGREGUE UN NUEVO ESTRENO " << endl; 
	cout << "                            " <<endl; 
	fflush(stdin);	
	cout << "DATOS DE LA PELICULA " << endl;
	cout << endl; 
	cout << "DIGITE LA CONTRASEÑA DEL ESTRENO" << endl;  
	cin >> auxClavee;
	
	consulta2>>clavee; 
	
while(!consulta2.eof()){

consulta2>>codigoe>>nombree>>directore>>actorpe>>actorae>>duracione>>resenia; 
	
	if(clavee==auxClavee){
		
		cout << "YA EXISTE UN REGISTRO CON ESTA CLAVE: " << auxClavee << endl; 
		repetido2=true; 
		break; 
	}
consulta2>> clavee; 
}
	if(repetido2==false){
	
		fflush(stdin);	
	
	cout << "INGRESE EL CODIGO DE LA PELICULA " <<endl; 
	getline(cin,codigoe);
	cout << "DIGITE EL NOMBRE DE LA PELICULA " <<endl; 
	getline(cin,nombree);
	cout << "DIGITE EL DIRECTOR DE LA PELICULA " << endl; 
	getline(cin,directore);
	cout << " DIGITE EL ACTOR PRINCIPAL DE LA PELICULA " << endl; 
	getline(cin,actorpe);
	cout << " DIGITE EL ANTAGONISTA DE LA PELICULA " << endl; 
	getline(cin,actorae);
	cout << " DIGITE LA DURACION DE LA PELICULA " << endl; 
	getline(cin,duracione);
	cout << "ESCRIBA LA RESENIA DE LA PELICULA " << endl; 
	getline(cin,resenia);
	
agregarestre1<<auxClavee<<"   "<<codigoe<<"  "<<nombree<<"  "<<directore<<"  "<<actorpe <<"   "<<actorae<<"   "<< duracione <<"   "<<resenia<<endl; 
cout << endl << endl; 

}


	cout << "DESEAS INGRESAR OTRO ESTRENO (S/N)? " << endl << endl; 
	cin >> opcionp[0]; 	
	
	cout << endl << endl; 
}while( opcionp[0] == 'S' || opcionp[0] == 's');
}else{
	cout << "EL ARCHIVO NO SE PUDO ABRIR " << endl; 
}	
	agregarestre1.close(); 
	consulta2.close();
}

ofstream agregarcolab1; 
string codigoc, nombrec,nombre4,nombre3, apellidoc,edadc;
ifstream consulta3; 
int clavec, auxClavec;
char opcionc[20];
bool repetido3 = false; 
void agregarcolab(){
	
int conteo=1;
agregarcolab1.open("colaboradores.txt",ios::out|ios::app);
consulta3.open("colaboradores.txt",ios::in);

if(agregarcolab1.is_open()&& consulta3.is_open()){
	do{
	conteo++;
	cout << "                            "<< endl; 
	cout << " AGREGUE UN NUEVO COLABORADOR " << endl; 
	cout << "                            " <<endl; 
	cout << "DIGITE LA CONTRASEÑA DEL COLABORADOR " << endl; 
	cin >> auxClavec; 
	
	consulta3 >> clavec; 

while(!consulta3.eof()){
	
consulta3>>codigoc>>nombrec>>apellidoc>>edadc;
 
if(clavec==auxClavec){
	cout << "YA EXISTE UN REGISTRO CON ESTA CLAVE: " << auxClavec << endl; 
	repetido3=true; 
	break; 
}
consulta3>> clavec; 
}
	if(repetido3==false){

	cout << " INGRESAS EL COLABORADOR NUMERO " << conteo-1;
	cout << "                                " << endl; 
	fflush(stdin);
	cout << "DATOS DEL COLABORADOR " << endl; 
	cout << "INGRESE EL CODIGO DEL NUEVO COLABORADOR" <<endl; 
	getline(cin,codigoc);
	cout << "DIGITE EL NOMBRE DEL COLABORADOR" <<endl; 
	getline(cin,nombrec);
	cout << "DIGITE EL APELLIDO DEL COLABORADOR" << endl; 
	getline(cin,apellidoc);
	cout << "DIGITE LA EDAD " << endl; 
	getline(cin,edadc);
	
agregarcolab1<<auxClavec<<"   "<<codigoc<<"   "<<nombrec<<"   "<<apellidoc<<"  "<<edadc<<"   "<<endl; 
cout << endl << endl; 
	
}
	if(conteo<4){
	cout << "DESEAS INGRESAR OTRO COLABORADOR (S/N)? " << endl << endl; 
	cin >> opcionc[0]; 	
	}else{
	cout << "NO PUEDES INGRESAR MAS DE 3 COLABORADORES " << endl << endl;  	
	}
}while(opcionc[0] == 'S' || opcionc[0] == 's' && conteo<4);
}else{
	cout << "EL ARCHIVO NO SE PUDO ABRIR " << endl; 
}
agregarcolab1.close(); 
consulta3.close();
}

void mostrarcolab(){
	ifstream lectura; 
	lectura.open("colaboradores.txt",ios::out|ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "VISUALIZACION DE LOS DATOS DE LOS COLABORADORES " << endl << endl;

	lectura >> clavec; 
	while(!lectura.eof()){
	lectura >> codigoc; 
	lectura >> nombrec; 
	lectura >> apellidoc;
	lectura >> edadc;	
		
cout << "CODIGO DEL COLABORADOR " << codigoc << "  NOMBRE Y APELLIDOS " << nombrec << " " << apellidoc  << " EDAD  " << edadc;
cout << endl << endl; 
lectura >> clavec; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} lectura.close();
}

void mostrarpeli(){
	ifstream lectura; 
	lectura.open("peliculas.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "VISUALIZACION DE LOS DATOS DE LAS PELICULAS DISPONIBLES " << endl << endl;

lectura >> clavep; 
while(!lectura.eof()){

lectura>>codigop>>nombrep>>director1>>actorp1>>actora1>>duracion1>>anio;
cout << "CONTRASEÑA " << clavep; 
cout << " CODIGO DE LA PELICULA :" <<codigop << endl;
cout << " NOMBRE DE LA PELICULA :" << nombrep<< endl;
cout << " DIRECTOR :" << director1<< endl;
cout << " ACTOR PRINCIPAL :" << actorp1<< endl;
cout << " ACTOR PRINCIPAL 2: " << actora1<< endl;
cout << " DURACION :" <<duracion1<< endl;
cout << " ANIO DE ESTRENO: " << anio<< endl;
lectura >> clavep; 
cout << endl << endl; 

}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();
}

void mostrarestreno(){
	ifstream lectura; 
lectura.open("estrenos.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << " ESTRENOS DE LA SEMANA " << endl;
	cout << " HORARIOS EXCLUSIVOS  " << endl << endl;

	lectura >> clavee; 
	while(!lectura.eof()){
	lectura >> codigoe;
	lectura >> nombree; 
	lectura >> directore;
	lectura >> actorpe;	
	lectura >> actorae; 
	lectura >> duracione; 
	lectura >> resenia;
cout <<"CONTRASEÑA DE LA PELICULA " << clavee << endl; 
cout << " CODIGO DE LA PELICULA :" << codigoe<<endl; 
cout << " NOMBRE DE PELICULA    :" << nombree<<endl;
cout << " DIRECTOR              :" << directore << endl;
cout << " ACTOR PRINCIPAL 1     :"	<<actorpe << endl;
cout << " ACTOR PRINCIPAL 2     :" << actorae << endl; 
cout << " LA PELICULA TIENE UNA DURACION DE: " << duracione << " MINUTOS " << endl; 
cout << endl << endl;
lectura >> clavee; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} lectura.close();
}
int i =0;
	int totalcomida, totalnacho,totalbebida,totalpalomitas, totalcombo, general2, totalc1; 

void totalc(){
	int g,h,i;
Password obtener(3.67);
g= obtener.getCombo1();
h= obtener.getCombo2();
i= obtener.getCombo3(); 
	
int total=0,total1=0,total2=0; 

cout << "------------------------------------------" << endl; 
 cout << " SELECCION DE COMBOS ESPECIALES DE COMIDA " << endl; 
 cout << "------------------------------------------" << endl; 
 cout << endl; 
 cout << " 1. COMBO 1" << endl;
 cout << " 2. COMBO 2" << endl; 
 cout << " 3. COMBO 3" << endl; 
 cout << "DIGITE SU OPCION "; 
 cin >> general2; 
 
 switch(general2){
 	
 	case 1: 
 	cout << endl << endl; 
 	cout << " COMBO 1:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS PEQUEÑAS " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl; 
	cout << " A TAN SOLO ---------> Q." << g << ".00";
	cout << endl; 
	totalcombo=g; 
	total=totalcombo; 
	cout << endl << endl; 
 	break; 
 	
 	case 2:
 	cout << endl << endl;
 	cout << " COMBO 2:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDE " << endl; 
	cout << " 1 BEBIDA GRANDE " << endl;
	cout << " 1 NACHO GRANDE " << endl;  
	cout << " A TAN SOLO ---------> Q." << h << ".00";
	cout << endl;	
	totalcombo=h; 
	total1=totalcombo; 
	cout << endl << endl; 
 	break;
 	
 	case 3: 
 	cout << endl << endl; 
	cout << " COMBO 3:  " << endl; 
	cout << " INCLUYE: " << endl; 
	cout << " 2 PALOMITAS GRANDES " << endl; 
	cout << " 2 BEBIDAS GRANDES " << endl; 
	cout << " 2 NACHOS GRANDES " << endl; 
	cout << " A TAN SOLO ---------> Q." << i << ".00";
	cout << endl;
	totalcombo=i; 
	total2=totalcombo; 
	cout << endl << endl; 
 	break; 
 	
 	default: 
 	cout << "OPCION INCORRECTA " << endl;  
 	break; 
 }
 }

void seleccioncomida(){
int a,b,c,d,e,f,g,h,i;
int opcion,opcion2,opcion3,opcion4, opcion1; 
int opcion5,opcion6,opcion7,opcion8,opcion9,opcion10,opcion11,opcion12,opcion13,opcion14,opcion15,opcion16;
int otro,otro1,otro2,otro3,otro4,otro5,otro6,otro7,otro8,otro9,otro10;
string tamanio,tamanio2,tamanio3,tamanio4,tamanio5,tamanio6,tamanio7,tamanio8,tamanio9,tamanio10,tamanio11,tamanio1,tamanio12; 
string sabor, tamanio13, tamanio14, tamanio15;
int opcion17, opcion18,opcion19, opcion20, general,general2; 
int total=0, total1=0, total2=0, total3=0, total4=0, total5=0, total6=0, total7=0, total8=0, total9=0, total10=0, total11=0, total12=0, total13=0, total14=0, total15=0;
Password obtener(3.67);
a= obtener.getPalomitasgran(); 
b= obtener.getPalomitaspeque(); 
c= obtener.getNachosgran();
d= obtener.getNachospeque();
e= obtener.getBebidasgran(); 
f= obtener.getBebidaspeque(); 
g= obtener.getCombo1();
h= obtener.getCombo2();
i= obtener.getCombo3(); 

cout << "--------------------------------------------" << endl; 
cout << " BIENVENIDO A LA SELECCION DE COMIDA " << endl; 
cout << " -------------------------------------------" << endl; 


cout << " SELECCION DE COMIDA " << endl; 
cout << " 1. BEBIDAS " << endl; 
cout << " 2. NACHOS " << endl;
cout << " 3. PALOMITAS" << endl; 
cout << endl;
cout << "DIGITE SU OPCION ---->   ";
cin >>opcion; 
switch(opcion){

case 1: //aqui
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin >> opcion1; 
 		switch(opcion1){
 			
 			case 1: 
 			totalbebida=e;
 			tamanio="GRANDE";
 			break;
			  
 			case 2: 
 			totalbebida=f;
 			tamanio="PEQUEÑO"; 
 			break; 
 			
 			default:
			 cout << " OPCION INCORRECTA " << endl;  
 			break; 
 			
 		}
 	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
	total=totalbebida; 

cout << "DESEA AÑADIR ALGO MAS? " << endl; 
	cout << " 1. NACHOS " << endl;
	cout << " 2. PALOMITAS " << endl; 
	cout << "DIGITA SU OPCION ----->   "; 
	cin >>opcion3; 
	
	switch(opcion3){
		
		case 1: 
		
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >>opcion6;
	switch(opcion6){
		
		case 1: 
		totalnacho=c; 
		tamanio3= "GRANDE ";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio3= "PEQUEÑOS ";
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break;
		
	}
	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio3 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total1=totalnacho; 
	break; 
		
	case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion7;
	
	switch(opcion7){
		
		case 1:
		totalpalomitas=a; 
		tamanio4="GRANDES "; 
		break; 
		
		case 2: 
		totalpalomitas=b; 
		tamanio4="PEQUEÑAS "; 
		break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
		
		
	}	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio4 << endl; 
 	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;  
		total2=totalpalomitas; 
	
		break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break;
		
		
	}

cout << " AÑADA ALGO MAS  " << endl;
cout << " 1. PALOMITAS" << endl; 
cout << " 2. NACHOS " << endl; 
cout << " 3. YA NO DESEO AÑADIR ALGO MAS  " << endl; 
cin >>opcion11;

switch(opcion11){
	
	case 1: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion17;
	
	switch(opcion17){
		
		case 1: 
		totalpalomitas=a; 
		tamanio12="GRANDES "; 
		break; 
		
		case 2: 
		totalpalomitas=b; 
		tamanio12="PEQUEÑAS "; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break;
		
	}
	
	fflush(stdin);
	cout << endl << endl; 
	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio12 << endl; 
	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;  
		total3=totalpalomitas; 
	
	break; 
	
	case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion18;
	
	switch(opcion18){
		
		case 1: 
		totalnacho=c; 
		tamanio13="GRANDE";
		break;
		
		case 2: 
		totalnacho=d; 
		tamanio13="PEQUEÑOS ";
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl; 
		break;
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio13 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total4=totalnacho; 
	
	break; 
	
	case 3: 
	cout << "GRACIAS POR COMPRAR CON NOSOTROS " << endl; 
	break; 
	
	default: 
	cout << "OPCION INCORRECTA " << endl; 
	break; 
}
	
break; //aqui termina

case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion2; 
	switch(opcion2){
		
		case 1:
		totalnacho=c; 
		tamanio5="GRANDE";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio5="PEQUEÑOS"; 
		break; 
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio5 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total5=totalnacho; 

	cout << "DESEA AÑADIR ALGO MAS? " << endl; 
	cout << " 1. BEBIDAS " << endl;
	cout << " 2. PALOMITAS " << endl; 
	cout << "DIGITA SU OPCION ----->   "; 
	cin >> opcion4; 
	
	switch(opcion4){
		
		case 1: 
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin >> opcion8; 
 	switch(opcion8){
 		
 		case 1: 
		totalbebida=e;
		tamanio6="GRANDE";
 		break; 
 		
 		case 2: 
 		totalbebida=f;
 		tamanio6="PEQUEÑO"; 
 		break; 
 		
 		default:
 			cout << "OPCION INCORRECTA " << endl; 
 		break; 
 		 }
 	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio6 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total6=totalbebida; 
	break; 
		
	case 2:
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion9; 
	
	switch(opcion9){
		
		case 1: 
		totalpalomitas=a; 
		tamanio7="GRANDES "; 
		break; 
		
		case 2: 
		totalpalomitas=b; 
		tamanio7="PEQUEÑAS "; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
	}
	fflush(stdin);
	cout << endl << endl; 
	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio7 << endl; 
	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;  
		total7=totalpalomitas; 
	break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
		
	}
	
cout << " AÑADA ALGO MAS  " << endl;
cout << " 1. PALOMITAS " << endl; 
cout << " 2. BEBIDAS " << endl; 
cout << " 3. YA NO DESEO AÑADIR ALGO MAS  " << endl; 
cin >>opcion13;

switch(opcion13){
	
	case 1: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >>opcion20; 
	
	switch(opcion20){
		
		case 1: 
		totalpalomitas=a; 
		tamanio14="GRANDES "; 
		break; 
		
		case 2:
		totalpalomitas=b; 
		tamanio14="PEQUEÑAS "; 
		break;
		
		default:
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	fflush(stdin);
	cout << endl << endl; 
	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio14 << endl; 
	cout << " CON UN VALOR DE " << totalpalomitas << endl;
	cout << endl << endl;
		total8=totalpalomitas;   
	break; 
	
	case 2: 
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin>>opcion19;
 	
 	switch(opcion19){
 		
 		case 1: 
 		totalbebida=e;
		tamanio15="GRANDE"; 		
 		break; 
 		
 		case 2:
 		totalbebida=e;
		tamanio15="GRANDE";
 		
 		break; 
 		
 		default: 
 		cout << "OPCION INCORRECTA " << endl; 
 		break;
 		
 		
 		
	 }
 	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio15 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total9=totalbebida; 
	
 	break; 
	
	case 3: 
	cout << "GRACIAS POR COMPRAR CON NOSOTROS " << endl; 
	break; 
	
	default: 
	cout << "OPCION INCORRECTA " << endl; 
	break; 
	
}

break; //aqui termina

case 3: //aqui
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble mantequilla)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion2; 
	
	switch(opcion2){
		
		case 1:
		totalpalomitas=a;
		tamanio2="GRANDES"; 
		break; 
		
		case 2: 
		totalpalomitas=b;
		tamanio2="PEQUEÑAS";
		break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNAS PALOMITAS DE TAMAÑO " << tamanio << endl; 
 	cout << " CON UN VALOR DE " << totalpalomitas << endl;
 		total10=totalpalomitas; 
	cout << endl << endl;  
	
	cout << "DESEA AÑADIR ALGO MAS? " << endl; 
	cout << " 1. BEBIDAS " << endl;
	cout << " 2. NACHOS " << endl; 
	cout << "DIGITA SU OPCION ----->   "; 
	cin >>opcion5;
	
	switch(opcion5){
		
		case 1:
	fflush(stdin);
	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
	getline(cin,sabor);
	
	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
	cout << "1. BEBIDA GRANDE " << endl;
	cout << "2. BEBIDA PEQUEÑA " << endl; 
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion10; 
	switch(opcion10){
		
		case 1: 
		totalbebida=e;
		tamanio8="GRANDE";
		break; 
		
		case 2: 
		totalbebida=f;
		tamanio8="PEQUEÑO"; 
 		break; 
		
		default:
		 cout << "OPCION INCORRECTA " << endl; 
		break; 
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio8 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total11=totalbebida; 
	
	break; 
		
	case 2: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion11; 
	
	switch(opcion11){
		
		case 1: 
		totalnacho=c; 
		tamanio9="GRANDE";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio9="PEQUEÑOS"; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
	}
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio9 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total12=totalnacho; 
	break; 
		
		default: 
		cout << "OPCION INCORRECTA " << endl; 
		break; 
	}

cout << " AÑADA ALGO MAS  " << endl;
cout << " 1. NACHOS " << endl; 
cout << " 2. BEBIDAS " << endl; 
cout << " 3. YA NO DESEO AÑADIR ALGO MAS  " << endl; 
cin >>opcion14;

switch(opcion14){
	
	case 1: 
	cout << " QUE TAMAÑO? " << endl; 
	cout << " 1. GRANDES (incluyen doble queso)" << endl;
	cout << " 2. PEQUEÑOS " << endl;
	cout << " DIGITE SU OPCION -----> ";
	cin >> opcion15; 
	
	switch(opcion15){
		
		case 1: 
		totalnacho=c; 
		tamanio10="GRANDE";
		break; 
		
		case 2: 
		totalnacho=d; 
		tamanio10="PEQUEÑOS"; 
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
	}
	
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNOS NACHOS DE TAMAÑO " << tamanio10 << endl; 
 	cout << " CON UN VALOR DE " << totalnacho << endl;
	cout << endl << endl;  
		total13=totalnacho; 
	break; 
	
	case 2: 
	fflush(stdin);
 	cout << " DIGITE EL SABOR DE SU BEBIDA " << endl; 
 	getline(cin,sabor);
 	
 	cout << " DESEA QUE SU BEBIDA SEA: " << endl;
 	cout << "1. BEBIDA GRANDE " << endl;
 	cout << "2. BEBIDA PEQUEÑA " << endl; 
 	cout << " DIGITE SU OPCION -----> ";
 	cin >>opcion16;
 	
 	switch(opcion16){
 		
 		case 1:
		totalbebida=e;
		tamanio11="GRANDE";
		break; 
 		
 		case 2: 
 		totalbebida=f;
		tamanio11="PEQUEÑO"; 
 		break;
		 
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break;  
 		
 		
	 }
	fflush(stdin);
 	cout << endl << endl; 
 	cout << "HAZ SELECCIONADO UNA BEBIDA SABOR A " << sabor << " DE TAMAÑO " << tamanio11 << endl; 
 	cout << " CON UN VALOR DE " << totalbebida << endl;
	cout << endl << endl;  
		total14=totalbebida; 
 	break; 
	
	case 3: 
	cout << "GRACIAS POR COMPRAR CON NOSOTROS " << endl; 
	break; 
	
	default: 
	cout << "OPCION INCORRECTA " << endl; 
	break; 
	
}

break; //termina

default:
cout << "OPCION INCORRECTA " << endl;  
break; //aqui termina
}
totalcomida=total+total1+total2+total3+total4+total5+total6+total7+total8+total9+total10+total11+total12+total13+total14+total15;


}

void entrada2(){
Password obtener(3.67);
int a,b, entrada, general;	
a= obtener.getFuncion2d();
b=obtener.getFuncion3d();

cout << "PRECIO DE FUNCIONES       "     << endl; 
cout << "1. FUNCION 2D           Q." << a << ".00 "<<  endl; 
cout << "2. FUNCION 3D           Q." << b << ".00 "<< endl; 
}

	
int entrada1, entradac;

void entrada(){
Password obtener(3.67);
int a,b, general;	
a= obtener.getFuncion2d();
b=obtener.getFuncion3d();

cout << "¿EN QUE MODALIDAD QUIERE LA PELICULA? " << endl; 
cout << "1. FUNCION 2D " << endl; 
cout << "2. FUNCION 3D " << endl; 
cout << "DIGITE SU OPCION --- >" << endl; 
cin>>general; 

switch(general){
	
	case 1:
		entrada1=a;
	break; 
	
	case 2: 
		entrada1=b;
	break;
	
	default:
	cout << " OPCION INCORRECTA " << endl;  
	break;
	
}
 
	
	cout << " TU ENTRADA TIENE UN VALOR DE Q." << entrada1 <<".00 " << endl << endl ; 
	cout << " DISFRUTA TU FUNCION " << endl;
	cout << endl; 
}
//AQUIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIIII
int fila1=0, fila2=0, fila3=0;
int asiento1=0,asiento2=0,asiento3=0;
int salaCine1[10][8],salaCine2[10][8],salaCine3[10][8]; 
int x=10, y=8;
void reservar1(){
cout << "------------------------------------------" << endl; 
cout << "         ASIENTOS     DISPONIBLES         " << endl; 
cout << endl; 
cout << "     (0)(1)(2)(3)(4)(5)(6)(7)" << endl; 
cout << endl; 
	for(int i=0; i<x; i++){
	cout << "("<<i<<")  ";
		for (int j=0; j <y; j++){
			cout << "["<<salaCine1[i][j] << "]";
		}
		cout << endl; 
	}
cout << "--------------------------------------------" << endl; 
}
void reservar2(){
cout << "------------------------------------------" << endl; 
cout << "         ASIENTOS     DISPONIBLES         " << endl; 
cout << endl; 
cout << "     (0)(1)(2)(3)(4)(5)(6)(7)" << endl; 
cout << endl; 
	for(int i=0; i<x; i++){
	cout << "("<<i<<")  ";
		for (int j=0; j <y; j++){
			cout << "["<<salaCine2[i][j] << "]";
		}
		cout << endl; 
	}
cout << "--------------------------------------------" << endl; 
}
void reservar3(){
cout << "------------------------------------------" << endl; 
cout << "         ASIENTOS     DISPONIBLES         " << endl; 
cout << endl; 
cout << "     (0)(1)(2)(3)(4)(5)(6)(7)" << endl; 
cout << endl; 
	for(int i=0; i<x; i++){
	cout << "("<<i<<")  ";
		for (int j=0; j <y; j++){
			cout << "["<<salaCine3[i][j] << "]";
		}
		cout << endl; 
	}
cout << "--------------------------------------------" << endl; 
}

bool reservarAsiento1(int fila1, int asiento1 ){
	if(salaCine1[fila1][asiento1]==0){
	
	salaCine1[fila1][asiento1]=1; 
	return true; 
	
	}else{
		cout << "ASIENTO NO DISPONIBLE " << endl; 
		cout << endl << endl; 
	}
	return false; 
	}

bool reservarAsiento2(int fila2, int asiento2 ){
	if(salaCine2[fila2][asiento2]==0){
	
	salaCine2[fila2][asiento2]=1; 
	return true; 
	
	}else{
		cout << "ASIENTO NO DISPONIBLE " << endl; 
		cout << endl << endl; 
	}
	return false; 
	}

bool reservarAsiento3(int fila3, int asiento3 ){
	if(salaCine3[fila3][asiento3]==0){
	
	salaCine3[fila3][asiento3]=1; 
	return true; 
	
	}else{
		cout << "ASIENTO NO DISPONIBLE " << endl; 
		cout << endl << endl; 
	}
	return false; 
	}

int fac; 
string nombre;
string nit;
	
void factura(){
ofstream agregarfactura;
agregarfactura.open("facturas.txt",ios::out|ios::app);

if(agregarfactura.is_open()){
	
		
	fflush(stdin);
	cout << "DATOS PARA SU FACTURA " << endl; 
	cout << endl << endl; 
	cout << "GRACIAS POR CONSUMIR CON NOSOTROS " << endl<<endl;
	cout << " INGRESA TUS DATOS PARA TU COMPROBANTE DE PAGO " <<endl << endl; 
	fflush(stdin);
	cout << "DIGITA EL NIT DE LA FACTURA " << endl; 
	getline(cin,nit);
	cout << " DIGITA EL NOMBRE EN LA FACTURA " << endl; 
	getline(cin, nombre);	
	cout << endl << endl; 
	fac=totalcomida+totalcombo+entrada1; 

agregarfactura<<nit<<"   "<<nombre<<"      "<<fac<< "    "<<endl; 
cout << endl << endl; 

cout << "---------------------------------- " << endl; 
	cout << "     POP CINEMA S.A    " <<"FACURA NO. " << i+1 << endl; 
	cout << " Tiquisate, Escuintla  " << endl; 
	cout << endl << endl; 
	cout << " NOMBRE:  "<<nombre << endl; 
	cout << " NIT:     "<<nit<<endl;
	cout << "---------------------------------- " << endl; 
	i++;
	cout << endl; 
	cout << "    DESCRIPCION                       SUBTOTALES " << endl; 
	cout << endl; 
	cout << " VALOR DE LA ENTRADA................."<<entrada1 << endl; 
	cout << " VALOR DE REFACCIONES INDIVIDUALES..."<<totalcomida << endl; 
	cout << " VALOR DE COMBOS SOLICITADOS ........"<<totalcombo << endl; 
	cout << endl; 
	cout << ".............TOTALES................."<<fac;
	cout << endl;
  

}else{
	cout << "EL ARCHIVO NO SE PUDO ABRIR " << endl; 
}agregarfactura.close(); 
}

void mostrarfac(){
	ifstream lectura; 
	lectura.open("facturas.txt",ios::in);

if(lectura.is_open()){
	cout << endl << endl; 
	cout << "DE LAS VENTAS SEMANALES " << endl << endl;

	lectura >> nit; 
	while(!lectura.eof()){
	lectura >> nombre; 
	lectura >> fac;
	
	 	
cout <<" NIT: "<< nit<< endl; 
cout <<"NOMBRE " <<  nombre<< endl; 
cout << "TOTAL VENDIDO " << fac << endl;

cout << endl << endl; 
lectura >> nit; 
}}else {
	cout << "NO SE PUDO ABRIR EL ARCHIVO" << endl; 
} 
lectura.close();
}

bool encontrado=false;
int auxCodigo;

buscarpeli(){
	
ifstream lectura2; 

lectura2.open("peliculas.txt",ios::out|ios::in);
fflush(stdin);
if(lectura2.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"____________________________________________"<< endl;
cout << "BIENVENIDO AL BUSCADOR DEL POP CINEMA " << endl; 
cout << endl;
cout << "___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "INGRESA LA CONTRASEÑA DE LA PELICULA A BUSCAR " << endl; 
cout << "------------------->";
cin>>auxCodigo;

lectura2 >> clavep; 
encontrado=false; 

while(!lectura2.eof()){
	
lectura2 >> codigop>>nombrep >> director1 >> actorp1 >> actora1 >> duracion1>>  anio; 
		
		if(auxCodigo==clavep){
cout << "CONTRASEÑA " << clavep << endl; 
cout << " CODIGO DE LA PELICULA :" <<codigop << endl;
cout << " NOMBRE DE LA PELICULA :" << nombrep<< endl;
cout << " DIRECTOR :" << director1<< endl;
cout << " ACTOR PRINCIPAL :" << actorp1<< endl;
cout << " ACTOR PRINCIPAL 2: " << actora1<< endl;
cout << " DURACION :" <<duracion1<< endl;
cout << " ANIO DE ESTRENO: " << anio<< endl;
cout << endl; 
encontrado = true; 			
		}
	
	lectura2 >> clavep; 
}
	if(encontrado==false){
		
		cout << "NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigo<< endl; 
}
}else{
	cout << "NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura2.close();	
	
}
 
bool encontradoc=false;
int auxCodigoc;

buscarcolab(){
	
ifstream lectura3; 

lectura3.open("colaboradores.txt",ios::out|ios::in);
fflush(stdin);
if(lectura3.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"____________________________________________"<< endl;
cout << "BIENVENIDO AL BUSCADOR DEL POP CINEMA " << endl; 
cout << endl;
cout << "___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "INGRESA EL CODIGO DEL COLABORADOR A BUSCAR " << endl; 
cout << "------------------->";
cin>>auxCodigoc;

lectura3 >> clavec; 
encontradoc=false; 

while(!lectura3.eof()){
	
lectura3 >> codigoc >> nombrec >> apellidoc >> edadc; 
		
if(auxCodigoc==clavec){
cout << "CONTRASEÑA " << clavec << endl; 			
cout << "CODIGO DEL COLABORADOR " << codigoc << endl; 
cout << "  NOMBRE " << nombrec << endl;
cout << " APELLIDO " << apellidoc << endl;
cout  << " EDAD  " << edadc << endl;
cout << endl; 
encontradoc = true; 			
		}
	
	lectura3 >> clavec; 
}
	if(encontradoc==false){
		
		cout << "NO SE ENCONTRO EL COLABORADOR CON EL CODIGO  "  <<auxCodigoc<< endl; 
}
}else{
	cout << "NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura3.close();	
	
}

bool encontradoe=false;
int auxCodigoe;

buscarestreno(){
	
ifstream lectura4; 

lectura4.open("estrenos.txt",ios::out|ios::in);
fflush(stdin);
if(lectura4.is_open()){
cout << endl << endl; 
fflush(stdin);
cout <<"____________________________________________"<< endl;
cout << "BIENVENIDO AL BUSCADOR DEL POP CINEMA " << endl; 
cout << endl;
cout << "___________________________________________" << endl; 
cout << endl << endl; 
fflush(stdin);
cout << "INGRESA EL CODIGO DEL ESTRENO A BUSCAR " << endl; 
cout << "------------------->";
cin>>auxCodigoe;

lectura4 >> clavee; 
encontradoe=false; 

while(!lectura4.eof()){
	
lectura4 >> codigoe >> nombree >> directore >> actorpe>> actorae>>duracione>>resenia; 
		
		if(auxCodigoe==clavee){
			
cout << "CONTRASEÑA DEL ESTRENO " << clavee<< endl; 
cout << " CODIGO DE LA PELICULA :" << codigoe<<endl; 
cout << " NOMBRE DE PELICULA    :" << nombree<<endl;
cout << " DIRECTOR              :" << directore << endl;
cout << " ACTOR PRINCIPAL 1     :"	<<actorpe << endl;
cout << " ACTOR PRINCIPAL 2     :" << actorae << endl; 
cout << " LA PELICULA TIENE UNA DURACION DE: " << duracione << " MINUTOS " << endl; 
cout << endl << endl;
encontradoe = true; 			
		}
	
	lectura4 >> clavee; 
}
	if(encontradoe==false){
		
		cout << "NO SE ENCONTRO LA PELICULA CON EL CODIGO  "  <<auxCodigoe<< endl; 
}
}else{
	cout << "NO SE PUDO ABRIR EL ARCHVIVO " << endl; 
}	
	
lectura4.close();	
	
}
string auxNombre;
    
void modificaciones(){
    bool encontradop=false;
	ofstream aux;
    ifstream lectura;
    
    int auxClave=0;
    aux.open("auxiliar.txt",ios::out);
    lectura.open("peliculas.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"INGRESE LA CLAVE DE LA PELICULA QUE DESEA MODIFICAR: ";
        cin>>auxClave;
        lectura>>clavep;
        while(!lectura.eof()){
        lectura>>codigop>>nombrep>>director1>>actorp1>>actora1>>duracion1>>anio; 
if(auxClave==clavep){
encontradop=true;
cout<<"__________________________"<<endl;
cout << "CONTRASEÑA " << clavep; 
cout << " CODIGO DE LA PELICULA :" <<codigop << endl;
cout << " NOMBRE DE LA PELICULA :" << nombrep<< endl;
cout << " DIRECTOR :" << director1<< endl;
cout << " ACTOR PRINCIPAL :" << actorp1<< endl;
cout << " ACTOR PRINCIPAL 2: " << actora1<< endl;
cout << " DURACION :" <<duracion1<< endl;
cout << " ANIO DE ESTRENO: " << anio<< endl;
cout<<"__________________________"<<endl;
fflush(stdin);	
cout<<"INGRESE EL NUEVO NOMBRE DE LA PELICULA CON CLAVE "<<clavep<<": ";
getline(cin,auxNombre);
               
        aux<<clavep <<" " << codigop<<"  "<< auxNombre<<"  "<<director1<<"  "<<actorp1<<"  "<<actora1<<"  "<<duracion1<<"  "<<anio << endl ; 
		cout<<"Registro Modificado"<<endl;
        }else{
        aux<<clavep<<"  "<<codigop<<"  "<<nombrep<<"  "<<director1<<"  "<<actorp1<<"  "<<actora1<<"  "<<duracion1<<"  "<<anio<<" "<<endl; 
		}
        lectura>>clavep;
        }
    }else{
        cout<<"No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradop==false){
        cout<<"No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("peliculas.txt");
    rename("auxiliar.txt","peliculas.txt");
 }

string auxNombree;
    
void modificacionese(){
bool encontradoe=false;
ofstream auxe;
ifstream lecturae;
int auxClavee=0;
    
    auxe.open("auxiliare.txt",ios::out);
    lecturae.open("estrenos.txt",ios::in);
    
    if(auxe.is_open() && lecturae.is_open()){
        cout<<"INGRESE LA CLAVE DEL ESTRENO A MODIFICAR ----> ";
        cin>>auxClavee;
        lecturae>>clavee;
        while(!lecturae.eof()){
	lecturae>>codigoe>>nombree>>directore>>actorpe>>actorae>>duracione>>resenia;
            if(auxClavee==clavee){
                encontradoe=true;
                cout<<"__________________________"<<endl;
cout <<"CONTRASEÑA DE LA PELICULA " << clavee << endl; 
cout << " CODIGO DE LA PELICULA :" << codigoe<<endl; 
cout << " NOMBRE DE PELICULA    :" << nombree<<endl;
cout << " DIRECTOR              :" << directore << endl;
cout << " ACTOR PRINCIPAL 1     :"	<<actorpe << endl;
cout << " ACTOR PRINCIPAL 2     :" << actorae << endl; 
cout << " LA PELICULA TIENE UNA DURACION DE: " << duracione << " MINUTOS " << endl; 
cout << endl << endl;
cout<<"__________________________"<<endl;

fflush(stdin);	
cout<<"INGRESE EL NUEVO NOMBRE DE LA PELICULA CON CLAVE  "<<clavee<<": ";
getline(cin,auxNombree);
auxe<<clavee<<"   "<<codigoe<<"  "<<auxNombree<<"  "<<directore<<"  "<<actorpe <<"   "<<actorae<<"   "<< duracione <<"   "<<resenia<<"   "<<endl; 
cout<<"Registro Modificado"<<endl;
}else{
auxe<<clavee<<"   "<<codigoe<<"  "<<nombree<<"  "<<directore<<"  "<<actorpe <<"   "<<actorae<<"   "<< duracione <<"   "<<resenia<<"   "<<endl; 
}
lecturae>>clavee;
}
}else{
        cout<<"No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradoe==false){
        cout<<"No se encontro ningun registro con clave "<<auxClavee<<endl;
    }
    auxe.close();
    lecturae.close();
    remove("estrenos.txt");
    rename("auxiliare.txt","estrenos.txt");
}

void modificacionesc(){
    ofstream auxc;
    ifstream lecturac;
    bool encontradoc=false;
    int auxClavec=0;
    string auxNombrec;
    auxc.open("auxiliarc.txt",ios::out);
    lecturac.open("colaboradores.txt",ios::in);
    if(auxc.is_open() && lecturac.is_open()){
        cout<<"INGRESE LA CLAVE DEL COLABORADOR QUE DESEA MODIFICAR ----> ";
        cin>>auxClavec;
        lecturac>>clavec;
        while(!lecturac.eof()){
            lecturac>>codigoc>>nombrec>>apellidoc>>edadc;

            if(auxClavec==clavec){
                encontradoc=true;
                cout<<"__________________________"<<endl;
cout << "CONTRASEÑA " << clavec << endl;
cout << "CODIGO DEL COLABORADOR " << codigoc << endl;
cout << "  NOMBRE Y APELLIDOS " << nombrec << "  "<<  apellidoc<< endl;
cout   << " EDAD  " << edadc<< endl;
                cout<<"__________________________"<<endl;
                fflush(stdin);	
                cout<<"INGRESE EL NUEVO NOMBRE DEL COLABORADOR "<<clavec<<": ";
                cin>>auxNombrec;
auxc<<clavec<<"   "<<codigoc<<"   "<<auxNombrec<<"   "<<apellidoc<<"  "<<edadc<<"   "<<endl; 
               cout<<"Registro Modificado"<<endl;
            }else{
auxc<<clavec<<"   "<<codigoc<<"   "<<nombrec<<"   "<<apellidoc<<"  "<<edadc<<"   "<<endl; 
            }
            lecturac>>clavec;
        }
    }else{
        cout<<"No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontradoc==false){
        cout<<"No se encontro ningun registro con clave "<<auxClavec<<endl;
    }
    auxc.close();
    lecturac.close();
    remove("colaboradores.txt");
    rename("auxiliarc.txt","colaboradores.txt");
}

void bajaspeli(){
ofstream auxbp;
ifstream lecturabp;
bool encontradobp=false;
int auxClavebp=0;
auxbp.open("auxiliarbp.txt",ios::out);
lecturabp.open("peliculas.txt",ios::in);
if(auxbp.is_open() && lecturabp.is_open()){
cout<<"INGRESA LA CONTRASEÑA DE LA PELICULA A ELIMINAR: ";
cin>>auxClavebp;
lecturabp>>clavep;
while(!lecturabp.eof()){
lecturabp>>codigoe>>nombree>>directore>>actorpe>>actorae>>duracione>>resenia; 
if(auxClavebp==clavep){
encontradobp=true;
cout<<"REGISTRO ELIMINADO"<<endl;
}else{
auxbp<<clavep<<"  "<<codigop<<"  "<<nombrep<<"  "<<director1<<"  "<<actorp1<<"  "<<actora1<<"  "<<duracion1<<"  "<<anio<<" "<<endl; 
}
lecturabp>>clavep;
}
}else{
cout<<"No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
}
if(encontradobp==false){
cout<<"No se encontro ningun registro con clave "<<auxClavebp<<endl;
}
auxbp.close();
lecturabp.close();
remove("peliculas.txt");
rename("auxiliarbp.txt","peliculas.txt");
}


void bajasestre(){
ofstream auxbe;
ifstream lecturabe;
bool encontradobe=false;
int auxClavebe=0;
auxbe.open("auxiliarbe.txt",ios::out);
lecturabe.open("estrenos.txt",ios::in);
if(auxbe.is_open() && lecturabe.is_open()){
cout<<"INGRESA LA CONTRASEÑA DEL ESTRENO A ELIMINAR: ";
cin>>auxClavebe;
lecturabe>>clavee;
while(!lecturabe.eof()){
lecturabe>>codigoe>>nombree>>directore>>actorpe>>actorae>>duracione>>resenia;
if(auxClavebe==clavee){
encontradobe=true;
cout<<"REGISTRO ELIMINADO"<<endl;
}else{
auxbe<<clavee<<"   "<<codigoe<<"  "<<nombree<<"  "<<directore<<"  "<<actorpe <<"   "<<actorae<<"   "<< duracione <<"   "<<resenia<<endl; 
}
lecturabe>>clavee;
}
}else{
cout<<"No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
}
if(encontradobe==false){
cout<<"No se encontro ningun registro con clave "<<auxClavebe<<endl;
}
auxbe.close();
lecturabe.close();
remove("estrenos.txt");
rename("auxiliarbe.txt","estrenos.txt");
}

void bajascolab(){
ofstream auxbc;
ifstream lecturabc;
bool encontradobc=false;
int auxClavebc=0;
auxbc.open("auxiliarbc.txt",ios::out);
lecturabc.open("colaboradores.txt",ios::in);
if(auxbc.is_open() && lecturabc.is_open()){
cout<<"INGRESA LA CONTRASEÑA DEL COLABORADOR A ELIMINAR: ";
cin>>auxClavebc;
lecturabc>>clavec;
while(!lecturabc.eof()){
lecturabc>>codigoc>>nombrec>>apellidoc>>edadc;
if(auxClavebc==clavec){
encontradobc=true;
cout<<"REGISTRO ELIMINADO"<<endl;
}else{
auxbc<<clavec<<"   "<<codigoc<<"   "<<nombrec<<"   "<<apellidoc<<"  "<<edadc<<"   "<<endl; 
}
lecturabc>>clavec;
}
}else{
cout<<"No se pudo Abrir el Archivo o aun no ha sido Creado"<<endl;
}
if(encontradobc==false){
cout<<"No se encontro ningun registro con clave "<<auxClavebc<<endl;
}
auxbc.close();
lecturabc.close();
remove("colaboradores.txt");
rename("auxiliarbc.txt","colaboradores.txt");
}
ifstream archivo;
string texto;

ofstream hora;
void hora1 (){
int argc; char *argv[0];
hora.open("hora.txt",ios::out|ios::app);
 if(hora.is_open()){
    

time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

hora << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    hora .close();
}
ofstream horac1;
void horac11 (){
int argc; char *argv[0];
horac1.open("horac1.txt",ios::out|ios::app);
 if(horac1.is_open()){
    

time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

horac1 << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    horac1 .close();
}
ofstream horac2;
void horac22 (){
int argc; char *argv[0];
horac2.open("horac2.txt",ios::out|ios::app);
 if(horac2.is_open()){
    
time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

horac2 << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    horac2.close();
}
ofstream horac3;
void horac33 (){
int argc; char *argv[0];
horac3.open("horac3.txt",ios::out|ios::app);
 if(horac3.is_open()){
    

time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

horac3 << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;
    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    horac3 .close();
}
ofstream horae;
void horae1 (){
int argc; char *argv[0];
horae.open("horae.txt",ios::out|ios::app);
 if(horae.is_open()){
    
time_t now = time(0);

tm * time = localtime(&now);

vector<string> dia_semana;
dia_semana.push_back("Domingo");
dia_semana.push_back("Lunes");
dia_semana.push_back("Martes");
dia_semana.push_back("Miercoles");
dia_semana.push_back("Jueves");
dia_semana.push_back("Viernes");
dia_semana.push_back("Sabado");

vector<string> mes;
mes.push_back("Enero");
mes.push_back("Febrero");
mes.push_back("Marzo");
mes.push_back("Abril");
mes.push_back("Mayo");
mes.push_back("Junio");
mes.push_back("Julio");
mes.push_back("Agosto");
mes.push_back("Septiembre");
mes.push_back("Octubre");
mes.push_back("Noviembre");
mes.push_back("Diciembre");

int year = 1900 + time->tm_year;

//Formato=hoy miercoles, 27 de mayo del 2015

system("PAUSE");

horae << "Hoy " << dia_semana[time->tm_wday] << ", "<< time->tm_mday << " de " << mes[time->tm_mon] << " del " << year << endl << time->tm_hour << ":" << time->tm_min << ":" << time->tm_sec << endl;

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    horae .close();
}

int main (){
int opcion=0;
int opcion1; 
int opcion2;
int opcion3;
int opcion4;
int opcion5; 
int horario;
int obtener1;
int obtener2;
int obtener3;
int obtener4; 
int contraadmin;  
int contracol; 
int maniana, tarde, noche; 
do{
system("pause");
system("cls");
	

system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("POP CINEMA");
getch();
cuadro(1,1,80,3);
gotoxy(30,2); printf("BIENVENIDO A LA BASE DE DATOS ");
cout << endl; 

getch();
system("cls");

system("COLOR F0");
cuadro(0,0,78,24);
cuadro(1,1,77,3);
gotoxy(30,2); printf("  INGRESE SU ROL  ");
cout << endl << endl; 
cout << setw(30)<<"1. ADMINISTRADOR DEL CINE " << endl; 
cout << setw(19)<<"2. COLABORADOR " << endl; 
cout << setw(23)<<"3. ERES UN CLIENTE " << endl; 

cout << endl << endl; 

gotoxy(40,5); cout << "DIGITE SU ROL ----> " ; 
cin >> opcion; 
	
getch();
system("cls");

Password obtenerPass(3);
 Password ingreso5(4.4,5.6);
				
	obtener1= obtenerPass.getAdministrador(); 
	obtener2= obtenerPass.getColab1(); 
	obtener3= obtenerPass.getColab2();
	obtener4= obtenerPass.getColab3();
	
switch(opcion){
	
	
	case 1: 
system("COLOR F0");
cuadro(0,0,78,24);
cuadro(1,1,77,3);
gotoxy(30,2); printf("BIENVENIDO ADMINISTRADOR");
	cout << endl; 
gotoxy(20,5); cout << "DIGITA TU CONTRASEÑA-------->" ; 
	cin >> contraadmin; 
	cout << endl; 

system("cls");
	
	if(obtener1 == contraadmin){
		
system("COLOR B0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("CLAVE EXITOSA");
getch();
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("BIENVENIDO");
getch();
system("cls");
hora1();
system("COLOR C0");
cuadro(0,0,78,24);
cuadro(1,1,77,3);
gotoxy(30,2); printf("  MENU DEL ADMINISTRADOR  ");
cout << endl << endl; 
cout << setw(31)<<"1. CAMBIOS EN LA CARTELERA " << endl; 
cout << setw(30)<<"2. CAMBIOS EN EL PERSONAL " << endl; 
cout << setw(25)<<"3. SALIR " << endl; 
cout << endl << endl; 

gotoxy(40,5); cout << "DIGITE SU OPCION ----> " ; 
cin >>opcion1; 
	
getch();
system("cls");

	
		switch(opcion1){
			
			case 1:
system("COLOR D0");
cuadro(0,0,78,24);
gotoxy(50,2); cout << endl; 
		cout << " ***************************** " << endl; 
		cout << " 1. INGRESAR NUEVA PELICULA " << endl; //archivo
		cout << " 2. INGRESAR ESTRENOS DE LA SEMANA " << endl;  //archivo2
		cout << " 3. ELIMINAR UNA PELICULA " << endl; 
		cout << " 4. BUSCAR UNA PELICULA " << endl; 
		cout << " 5. MODIFICAR UNA PELICULA " << endl; 
		cout << " 6. VERIFICAR LAS VENTAS DEL DIA " << endl; 
		cout << " 7. SALIR " << endl; 
		cout << " ************************** " << endl; 
gotoxy(40,5);cout << "DIGITE SU OPCION ---------->: ";
		cin >>opcion3;
		
				
		switch(opcion3){
			
			case 1:
system("cls");
system("COLOR E0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << "INGRESO DE PELICULA NUEVA " << endl;
cout << endl; 
			agregarpeli();	
			break;
			
			case 2:
				system("cls");
system("COLOR F0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << "INGRESO DE ESTRENO NUEVO " << endl;
cout << endl; 
			agregarestre();
			break;
			
			case 3:
				system("cls");
system("COLOR F0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " ELIMINAR PELICULA " << endl;

				int a; 
				cout << "              INGRESE QUE DESEA ELIMINAR " << endl; 
				cout << "              1. ESTRENOS " << endl; 
				cout << "              2. PELICULAS " << endl;
				cout << "              DIGITE SU OPCION ---------->: ";
				cin >>a; 
				
				switch(a){
					
					case 1:
system("cls");
system("COLOR F2");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " ELIMINAR ESTRENO " << endl;
cout << endl; 
					bajasestre(); 
					break; 
					
					case 2: 
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " ELIMINAR PELICULA " << endl;
cout << endl; 
					bajaspeli();
					break; 
					
					default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
					break; 
					
				}
			
				//eliminar pelicula 
			break;
			
			case 4:
system("cls");
system("COLOR F5");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " BUSCAR PELICULAS " << endl;
				int z;
				cout<< "                       QUE DESEA BUSCAR? " << endl; 
				cout << endl << endl; 
				cout << "                      1. ESTRENOS " << endl; 
				cout << "                      2. PELICULAS DISPONIBLES " << endl; 
				cout << endl; 
				cout << "                      DIGITE SU OPCION ------------>"; 
				cin >>z; 
				
				switch(z){
					
					case 1: 
system("cls");
system("COLOR A3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " BUSCAR ESTRENO" << endl;
cout << endl; 
					buscarestreno();
					break;
					
					case 2: 
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " BUSCAR PELICULA " << endl;
cout << endl; 
					buscarpeli();
					break; 
					
					default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
 				}
			break;
			
			case 5:
system("cls");
system("COLOR F5");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " MODIFICAR PELICULAS " << endl;

				//modificar pelicula 
				int j; 
				cout << "                        ¿QUE DESEA MODIFICAR? " << endl;
				cout << "                        1. ESTRENOS " << endl; 
				cout << "                        2. PELICULAS "<< endl; 
				cout << endl; 
				cout << "                      DIGITE SU OPCION ------------>"; 

				cin >> j; 
				
				
				switch(j){
					
					case 1:
system("cls");
system("COLOR B3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " MODIFICAR PELICULA DE ESTRENO " << endl;
cout << endl; 
					modificacionese(); 
					break; 
					
					case 2: 
system("cls");
system("COLOR B4");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " MODIFICAR PELICULA " << endl;
cout << endl; 
					modificaciones();
					break;
					
					default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
					break; 
				} 
				
			break;
			
			case 6:
				//ver ventas del dia 
				system("cls");

				mostrarfac();
			break;
			
			case 7:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("SALIDA EXITOSA");
getch();
system("cls");
			break; 
			
			default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
break; 
		}
			break; 
			
			case 2:
system("COLOR D0");
cuadro(0,0,78,24);
gotoxy(50,2); cout << endl; 

		cout << "**************************** " << endl; 
		cout << " 1. INGRESAR NUEVO COLABORADOR (No mas de 3)" << endl; 
		cout << " 2. MOSTRAR COLABORADORES ACTIVOS " << endl; 
		cout << " 3. BUSCAR COLABORADORES ACTIVOS " << endl; 
		cout << " 4. ELIMINAR UN COLABORADOR " << endl; 
		cout << " 5. MODIFICAR COLABORADOR " << endl; 
		cout << " 6. MOSTRAR CONTRASENIA Y USUARIO DE COLABORADORES " << endl; 
		cout << " 7. CONTROLADOR DE INGRESOS " << endl; 
		cout << " 8. SALIR " << endl; 
		cout << "**************************** "<<endl; 
		gotoxy(80,5);cout << "DIGITE SU OPCION ---------->: ";
		cin >> opcion5; 
		
       
		switch(opcion5){
			
		case 1:
system("cls");
system("COLOR C4");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " AGREGAR COLABORADOR " << endl;
cout << endl; 
		agregarcolab();		 
		break; 
		
		case 2:
system("cls");
system("COLOR C5");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " COLABORADORES ACTIVOS " << endl;
cout << endl; 
		 mostrarcolab();
		break; 
		
		case 3:
system("cls");
system("COLOR B4");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " BUSCADOR DE EMPLEADOS " << endl;
		//buscar colaborador 
		buscarcolab(); 
		break; 
		
		case 4:
system("cls");
system("COLOR D4");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " ELIMINADOR DE EMPLEADOS " << endl;
bajascolab();
		//eliminar un colaborador 
		break;
		
		case 5:
system("cls");
system("COLOR B4");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " MODIFICADOR DE EMPLEADOS " << endl;
		modificacionesc();
		break;
		
		case 6: 
system("cls");
system("COLOR A4");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " CONTRASEÑA " << endl;
ingreso5.contrasenia();
		break;
		
		case 7: 
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("CONTROLADOR DE INGRESOS ");
cout << endl << endl; 
int h;
cout << "           1. ADMINISTRADOR " << endl; 
cout << "           2. EMPLEADO " << endl; 
cout << "           3. EMPLEADO " << endl;
cout << "           4. EMPLEADO " << endl; 
cout << "           5. INGRESO DE CLIENTES " << endl; 
gotoxy(30,9); printf("DIGITE SU OPCION ------------------> ");
cin >> h;

switch(h){
	
	case 1: 
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DEL ADMINISTRADOR: 32179682 " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
archivo.open("hora.txt",ios::in); //Abrimos el archivo en modo lectura
	if(archivo.is_open()){
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}}else{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close(); //Cerramos el archivo
	break; 
	
	case 2: 
cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DEL COLABORADOR: 103169741 " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
archivo.open("horac1.txt",ios::in); //Abrimos el archivo en modo lectura

	if(archivo.is_open()){
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
		}else{
		
		cout<<"No se pudo abrir el archivo";
		exit(1);
}
archivo.close(); //Cerramos el archivo
	break; 
	
	case 3:
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DEL COLABORADOR: 123455 " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
	archivo.open("horac2.txt",ios::in); //Abrimos el archivo en modo lectura

	if(archivo.is_open()){
	
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}}else{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}archivo.close(); //Cerramos el archivo
 	break; 
	
	case 4: 
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DEL COLABORADOR: 21345 " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
	archivo.open("horac3.txt",ios::in); //Abrimos el archivo en modo lectura
	if(archivo.is_open()){
	while(!archivo.eof()){ //mientras no sea final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}}else{
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	archivo.close(); //Cerramos el archivo
	break; 
	
	case 5: 
	cout << "*******************************" << endl; 
	cout << endl << endl; 
	cout << "INGRESOS DE CLIENTES " << endl;
	cout << endl << endl; 
	cout << "*******************************" << endl;
	archivo.open("horae.txt",ios::in); //Abrimos el archivo en modo lectura
	if(archivo.is_open()){
	while(!archivo.eof()){ //mientras no sea final del archivo
	getline(archivo,texto);
	cout<<texto<<endl;
	}
	}else{
	cout<<"No se pudo abrir el archivo";
	exit(1);
	}
	archivo.close(); //Cerramos el archivo
	break; 
	
	default: 
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
	break; 
	
	
	
}


		break; 
		
		case 8: 
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("SALIDA EXITOSA");
getch();
system("cls");
		break; 
		
		
		
		default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
		break; 
		}
			break;
					
			case 3: 
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("SALIDA EXITOSA");
getch();
system("cls");
			break; 
			
			default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
			break; 
		}	
		
	} else{
system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("ERROR");
getch();
cuadro(1,1,80,3);
gotoxy(30,2); printf("CONTRASEÑA INCORRECTA");
cout << endl; 

getch();
system("cls");
 
	}
	
	break;
	
	case 2:
system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("HAZ INGRESADO COMO COLABORADOR");
getch();
system("cls");
gotoxy(10,2); cout << "DIGITA TU CONTRASEÑA ----------> " ; 
cin >> contracol; 
getch();
system("cls");
 
	
	if(contracol == obtener2 || contracol == obtener3 || contracol == obtener4 ){
		
		if(contracol==obtener2){
			horac11();
		} else if(contracol==obtener3){
			horac22();
		}else{
			horac33();
		}
		
system("COLOR B0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("CLAVE EXITOSA");
getch();
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("BIENVENIDO");
getch();
system("cls");
		cout << "*************** MENU DE ACCIONES ************* " << endl; 
		cout << endl; 
		cout << " 1. MOSTRAR PELICULAS DISPONIBLES " << endl; 
		cout << " 2. MOSTRAR ESTRENOS DE LA SEMANA " << endl; 
		cout << " 3. MOSTRAR NUMERO DE ASIENTOS DISPONIBLES " << endl; 
		cout << " 4. MOSTRAR MENU DE COMIDA Y PRECIOS " << endl;  
		cout << " 5. GENERAR FACTURAS MULTIPLES " << endl; 
		cout << " 6. SALIR " << endl; 
		cout << "********************************************** " << endl; 
		cout << endl << endl; 
gotoxy(60,2); cout << "DIGITA TU ELECCION ----------> " ; 
		cin >> opcion2;
		Password ingreso=Password(1,2);
		
		switch(opcion2){
			
			case 1:
system("cls");
system("COLOR B4");
gotoxy(20,5);cout << " PELICULAS DISPONIBLES " << endl;
cout << endl; 
			      mostrarpeli(); 
			break;
			
			case 2:
system("cls");
system("COLOR B4");
gotoxy(20,5);cout << " ESTRENOS DISPONIBLES " << endl;
cout << endl; 
			mostrarestreno();
			break;
			
			case 3:
system("cls");
system("COLOR B4");
cuadro(0,0,78,24);
gotoxy(20,2);cout << " ASIENTOS DISPONIBLES SEGUN HORARIO " << endl;
cout << endl; 

				int h; 
			cout << endl; 
			cout << " 1.   15:00 " << endl; 
			cout << " 2.   18:00 " << endl; 
			cout << " 3.   20:00 " << endl; 
			gotoxy(30,8); cout << "DIGITA TU ELECCION ----------> " ; 
			
			cin >> h;
			 
			
			switch(h){
				
				case 1:
				reservar1();
				break; 
				
				case 2: 
				reservar2();
				break;
				
				case 3:
				reservar3();
				break; 
				
				default:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("OPCION INCORRECTA");
getch();
system("cls");
				break;
			}
				//numero de asientos disponibles
			break;
			
			case 4:
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("COMIDA DISPONIBLE");
getch();
system("cls");
			ingreso.comida();
			break;
			
			case 5:
				system("cls");
				char opcion[20];
				cout << endl; 
				cout << "BIENVENIDO AL GENERADOR DE FACTURAS MULTIPLES " << endl; 
				cout << endl << endl; 
	do{
			getch();	
gotoxy(20,5);		cout << "....................................." << endl; 
gotoxy(20,5);		cout << "   GRACIAS POR CONSUMIR CON NOSOTROS " << endl; 
gotoxy(20,5);		cout << "....................................." << endl; 
		cout << endl << endl; 
	getch();	
	system("cls");
		int q; 
gotoxy(20,5);cout << " ASIENTOS DISPONIBLES " << endl;
		cout << endl; 
gotoxy(20,8);cout << " INGRESE EL HORARIO " << endl;
cout << endl << endl;
cout << "              1. 15:00 " << endl;		
		cout << "      2. 18:00 " << endl; 
		cout << "      3. 20:00 " << endl; 
		gotoxy(20,15);cout << " DIGITE SU OPCION-----------> ";
		cin >> q; 
		
		switch(q){
			
			case 1:
			system("cls");
			cout << endl << endl;
			cout << "    DISPONIBLES  " << endl;
			cout << endl << endl; 
					reservar1(); 
			cout << endl; 
			
cout << "INGRESE LA FILA " << endl; 
cin >> fila1; 
cout << "INGRESE EL ASIENTO " << endl; 
cin >> asiento1; 

reservarAsiento1(fila1, asiento1);

cout << "ASIENTOS DISPONIBLES " << endl; 
cout << endl << endl; 
reservar1(); 
cout << endl << endl; 
			break; 
			
			case 2:
			system("cls");
			cout << endl << endl;
			cout << "    DISPONIBLES  " << endl;
			cout << endl << endl; 
			reservar2(); 
			cout << endl; 
			
cout << "INGRESE LA FILA " << endl; 
cin >> fila2; 
cout << "INGRESE EL ASIENTO " << endl; 
cin >> asiento2; 

reservarAsiento2(fila2, asiento2);

cout << "ASIENTOS DISPONIBLES " << endl; 
cout << endl << endl; 
reservar2(); 
cout << endl << endl; 
			break;
			
			case 3:
			system("cls");
			cout << endl << endl;
			cout << "    DISPONIBLES  " << endl;
			cout << endl << endl; 
			reservar3(); 
			cout << endl; 
			
cout << "INGRESE LA FILA " << endl; 
cin >> fila3; 
cout << "INGRESE EL ASIENTO " << endl; 
cin >> asiento3; 

reservarAsiento3(fila3, asiento3);

cout << "ASIENTOS DISPONIBLES " << endl; 
cout << endl << endl; 
reservar3(); 
cout << endl << endl; 
			break; 
			
			default: 
			gotoxy(20,15);cout << " OPCION INCORRECTA " << endl;
			break; 
}
		int op,op2; 
getch();
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " SELECIONA EL TIPO DE FUNCION PARA TU PELICULA " << endl;
getch();
		entrada();
		cout << "------------------------------------------------" << endl; 
getch();		
system("cls");
system("COLOR B4");
gotoxy(20,2);cout << " DESEAS PEDIR REFACCIONES? " << endl;
cout << endl; 
		cout << "      1. SI " << endl; 
		cout << "      2. NO " << endl; 
gotoxy(20,8);cout << " DIGITE SU ELECCION ";
		cin >>op; 
		switch(op){
			
			case 1:
getch();
system("cls");
system("COLOR F3");
cout << "               QUE DESEAS ADQUIRIR " << endl;
cout << endl << endl << endl;		
cout << "               1. COMIDA INDIVIDUAL " << endl; 
cout << "               2. COMBOS " << endl << endl; 
gotoxy(20,10);cout << " DIGITE SU SELECCION -------> ";
cin >> op2; 
cout << endl; 
switch(op2){
	
	case 1: 
getch();
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " BIENVENIDO A LA SELECCION DE COMIDA " << endl;
cout << endl << endl << endl;		
getch();
system("cls");
	seleccioncomida();
	break; 
	
	case 2: 
getch();
system("cls");
system("COLOR F3");
	totalc();
	break; 
	
	default:
getch();
system("cls");
system("COLOR F3");
gotoxy(20,5);cout << " OPCION INCORRECTA " << endl;
cout << endl << endl << endl;		
break; 
	
}

cout << " ACREDITADO " << endl;
cout << endl << endl; 
cout << " Q." <<totalcomida<< ".00" << endl; 
cout << " Q." <<totalcombo<< ".00" << endl; 
cout << endl << endl;

break; 		
			case 2: 
getch();
system("cls");

system("COLOR B0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("GRACIAS POR TU PREFERENCIA");
getch();
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("PROCEDEREMOS A REALIZAR TU FACTURA");
getch();
system("cls");
cout << endl; 
			break; 
			
			default: 
gotoxy(20,5);cout << " OPCION INCORRECTA ";
			break; 
}
getch();
system("cls");
gotoxy(30,2); printf(" SOLICITANDO DATOS PARA FACTURA");
getch();
system("cls");
factura();
getch();
system("cls");	
	cout << endl << endl; 
	cout << "DESEAS INGRESAR OTRO ESTRENO (S/N)? " << endl << endl; 
	cin >> opcion[0]; 	
	cout << endl << endl; 

}while(opcion[0] == 'S' || opcion[0] == 's');
				
				
			//mostrar facturas multiples
			break;
			
			case 6:
				system("cls");
				cout << "SALIDA EXITOSA " << endl; 
			break;
			
			default:
			cout << "OPCION INCORRECTA " << endl;  
			break; 
			
		}
	}else{
		cout << "CONTRASEÑA INCORRECTA " << endl; 
	}
	break; 
	
	case 3:
	horae1();
system("COLOR A0");
cuadro(1,1,80,3);
gotoxy(30,2); printf(" BIENVENIDO A POP CINEMA ");
getch();
system("cls");

cuadro(0,0,78,24);
cuadro(1,1,75,3);
gotoxy(30,2); printf("SELECCIONA TU INTERES");
cout << endl << endl; 	

	cout << "              1. VISUALIZAR PELICULAS Y HORARIOS " << endl; 
	cout << "              2. MOSTRAR ULTIMOS ESTRENOS " << endl; 
	cout << "              3. MOSTRAR MENU DE COMIDA " << endl; 
	cout << "              4. PRECIO DE FUNCIONES " << endl;
	cout << "              5. GENERAR BOLETO " << endl; 
	cout << "              6. SALIR " << endl; 
gotoxy(30,10); printf("DIGITE SU ELECCION----------------->");
	cin >>opcion4; 
	
	Password ingreso1=Password(3.3,2.7);
	
	switch(opcion4){
		
		
		case 1:
system("cls");
system("COLOR F0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << "PELICULAS DISPONIBLES " << endl;
cout << endl; 
		mostrarpeli();
		break;
			
		case 2:
system("cls");
system("COLOR F0");
cuadro(0,0,78,24);
gotoxy(20,5);cout << "ESTRENOS DISPONIBLES " << endl;
cout << endl; 
		mostrarestreno();
		break;
		
		case 3: 
system("cls");
system("COLOR F0");
gotoxy(20,2);cout << "COMIDA DISPONIBLE " << endl;
cout << endl; 

		ingreso1.comida();
		break; 
		
		case 4: 
		cout << endl; 
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " PRECIO DE ENTRADAS " << endl;
cout << endl; 
		entrada2();
		break; 
		
		case 5: 
	getch();	
gotoxy(20,5);		cout << "....................................." << endl; 
gotoxy(20,5);		cout << "   GRACIAS POR CONSUMIR CON NOSOTROS " << endl; 
gotoxy(20,5);		cout << "....................................." << endl; 
		cout << endl << endl; 
	system("cls");
		int g; 
gotoxy(20,5);cout << " ASIENTOS DISPONIBLES " << endl;
		cout << endl; 
gotoxy(20,8);cout << " INGRESE EL HORARIO " << endl;
cout << endl << endl;
		cout << " 1. 15:00 " << endl;		
		cout << " 2. 18:00 " << endl; 
		cout << " 3. 20:00 " << endl; 
		gotoxy(20,15);cout << " DIGITE SU OPCION-----------> ";
		cin >> g; 
		
		switch(g){
			
			case 1:
			system("cls");
			cout << endl << endl;
			cout << "    DISPONIBLES  " << endl;
			cout << endl << endl; 
			reservar1(); 
			cout << endl; 
			
cout << "INGRESE LA FILA " << endl; 
cin >> fila1; 
cout << "INGRESE EL ASIENTO " << endl; 
cin >> asiento1; 

reservarAsiento1(fila1, asiento1);

cout << "ASIENTOS DISPONIBLES " << endl; 
cout << endl << endl; 
reservar1(); 
cout << endl << endl; 
			break; 
			
			case 2:
			system("cls");
			cout << endl << endl;
			cout << "    DISPONIBLES  " << endl;
			cout << endl << endl; 
			reservar2(); 
			cout << endl; 
			
cout << "INGRESE LA FILA " << endl; 
cin >> fila2; 
cout << "INGRESE EL ASIENTO " << endl; 
cin >> asiento2; 

reservarAsiento2(fila2, asiento2);

cout << "ASIENTOS DISPONIBLES " << endl; 
cout << endl << endl; 
reservar2(); 
cout << endl << endl; 
			break;
			
			case 3:
			system("cls");
			cout << endl << endl;
			cout << "    DISPONIBLES  " << endl;
			cout << endl << endl; 
			reservar3(); 
			cout << endl; 
			
cout << "INGRESE LA FILA " << endl; 
cin >> fila3; 
cout << "INGRESE EL ASIENTO " << endl; 
cin >> asiento3; 

reservarAsiento3(fila3, asiento3);

cout << "ASIENTOS DISPONIBLES " << endl; 
cout << endl << endl; 
reservar3(); 
cout << endl << endl; 
			break; 
			
			default: 
		gotoxy(20,15);cout << " OPCION INCORRECTA " << endl;
			break; 
}
		int op,op2; 
getch();
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " SELECIONA EL TIPO DE FUNCION PARA TU PELICULA " << endl;
getch();
		entrada();
		cout << "------------------------------------------------" << endl; 

getch();
system("cls");
system("COLOR F3");
cout << "              DESEAS PEDIR REFACCIONES " << endl;
		cout << "      1. SI " << endl; 
		cout << "      2. NO " << endl; 
		cout << "      DIGITE SU SELECCION -------> ";
		cin >>op; 
		switch(op){
			
			case 1:
getch();
system("cls");
system("COLOR F3");
cout << "               QUE DESEAS ADQUIRIR " << endl;
cout << endl << endl << endl;		
cout << "               1. COMIDA INDIVIDUAL " << endl; 
cout << "               2. COMBOS " << endl << endl; 
gotoxy(20,10);cout << " DIGITE SU SELECCION -------> ";
cin >> op2; 

switch(op2){
	
	case 1: 
getch();
system("cls");
system("COLOR F3");
cuadro(0,0,78,24);
gotoxy(20,5);cout << " BIENVENIDO A LA SELECCION DE COMIDA " << endl;
cout << endl << endl << endl;		
getch();
system("cls");
seleccioncomida();
	break; 
	
	case 2: 
getch();
system("cls");
system("COLOR F3");
	totalc();
	break; 
	
	default:
getch();
system("cls");
system("COLOR F3");
gotoxy(20,5);cout << " OPCION INCORRECTA " << endl;
cout << endl << endl << endl;		
break; 
}


cout << " ACREDITADO " << endl;
cout << endl << endl; 
cout << " Q." <<totalcomida<< ".00" << endl; 
cout << " Q." <<totalcombo<< ".00" << endl; 
cout << endl << endl;
break; 		
			case 2: 
system("COLOR B0");
cuadro(1,1,80,3);
gotoxy(30,2); printf("GRACIAS POR TU PREFERENCIA");
getch();
system("cls");
cuadro(1,1,80,3);
gotoxy(30,2); printf("PROCEDEREMOS A REALIZAR TU FACTURA");
getch();
system("cls");
cout << endl; 
			break; 
			
			default: 
gotoxy(20,5);cout << " OPCION INCORRECTA ";
			break; 
}
getch();
system("cls");
gotoxy(30,2); printf(" SOLICITANDO DATOS PARA FACTURA");
getch();
system("cls");
factura();
break; 
		
		case 6:
		cout << endl; 
		cout << "GRACIAS POR VISITARNOS " << endl;  
		break; 
		
		default:
		cout << "OPCION INCORRECTA " << endl;  
		break; 
		
	}
	
	break;
	
	
}	
}while(opcion!=4);
	
if(opcion>=4){
system("cls");
system("COLOR F2");
cuadro(0,0,78,24);
gotoxy(20,5);cout << "OPCION INCORRECTA" << endl;
cout << endl; 
	
	
}
	
	return 0;
}


