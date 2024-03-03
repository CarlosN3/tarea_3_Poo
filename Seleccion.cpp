#include <iostream>
using namespace std;
main (){
	//int contar=0;
//	for (int i=10;i>1;i--)

	/*for (int i=0;i<=10;i++){
		if(i==6){
			cout<<"llegaste a 6"<<endl;
			//break;
			continue;
		}
		cout<<i<<endl;	
	}*/
//-----------------------------------------------------------------------------------------------------
/*	for(float i=0;i<10;i+=0.1)	{
		cout<<i<<endl;
	}*/

//-----------------------------------------------------------------------------------------------------	
/*int tam=0;
	int datos[]={10,54,100,200,900};
	tam= sizeof(datos)/ sizeof(datos[0]); //esta linea de codigo divide el total de bites por el tamaño de cada elemento 
	cout<<tam<<endl; 
	for(int i=0;i<tam;i++){
		cout<<datos[i]<<endl;
	}*/
//-------------------------------------------------------------------------------------------------------
/*	int tabla = 0, res =0;
	cout<<"Que tabla te gustaria ver";
	cin>>tabla;
	for (int i=1;i<=10;i++){
		res=tabla*i;
		cout<<tabla<<" X " << i <<" = "<<res<<endl;
	}*/
	
	
	
	int inicio = 0, fin= 0,res=0;
	
	cout<<"Ingrese tabla inicial: ";
	cin>>inicio;
	cout<<"Ingrese tabla final: ";
	cin>>fin;
	
	for(int rango=inicio;rango<=fin;rango++){
		cout<<"Tabla del "<<rango<<endl;
		for (int i=1;i<=10;i++){
		res= rango*i;
		cout<<rango<<" x "<<i<<" = "<<res<<endl;
		
		}
	}
	
	system("pause");
}
