//	Universidad de las Fuerzas Armadas ESPE
//	Grupo No. 7
///////////////////////////////////////////
//Integrantes:
//- Navas Renato
//- Pallango Andrés
//- Ruiz Jericó
///////////////////////////////////////////
//	Estructura de Datos, NRC: 3688

#include <iostream>
#include <fstream>
#include "Reina.h"
#include<stdlib.h>
#include<time.h>
#include <stdio.h>
#include "IngresoDatos.h"
using namespace std;

int main() {
	int n;
	cout<<"\tCuantas reinas "<<endl;
	IngresoDatos *objIngr= new IngresoDatos();
	n = atoi(objIngr->ingresarEnteroPos("").c_str());
	Reina *obj= new Reina(n);
	obj->imprimirNumComb(n);
	system("pause");
	obj->solucionReinas();

	return 0;
}

