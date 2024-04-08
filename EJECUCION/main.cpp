#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>
#include "../VIDEOJUEGO/Punto5.cpp"
using namespace std;

int main(){
    Videojuego person;
    int op;

    cout<<"---Bienvenido---"<<endl;

    do{
        cout<<"En este menu podras encontrar: "<<endl;
    cout<<"1)Agregar un videojuego"<<endl;
    cout<<"2)Ver la lista de videojuegos ordenados por titulo"<<endl;
    cout<<"3)Ver la lista de videojuegos ordenados por año de lanzamiento"<<endl;
    cout<<"4)Ver la lista de videojuegos ordenados por plataforma"<<endl;
    cout<<"5)Ver los videojuegos ordenados por año y plataforma"<<endl;
    cout<<"6)Juegos favoritos"<<endl;
    cout<<"7)Salir"<<endl;
    cin>>op;

    switch (op)
    {
    case 1:
        person.agregarVideojuego();
        break;
    
    case 2:
        person.ordenadoTitulo();
        break;
    case 3:
        person.ordenadoAño();
        break;
    case 4:
        person.VideojuegosPorCategoria();
        break;
    case 5:
        person.ordenadoAñoPlataforma();
        break;
    }

    }while(op!=7);
    
    
}