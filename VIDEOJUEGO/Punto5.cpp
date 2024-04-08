#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <set>
#include <algorithm>
using namespace std;


class Videojuego
{
private:
    string titulo;
    string categoria;
    string desarrollador;
    int anio;
    string plataforma;
public:
    Videojuego(){};


    // Vector almacenar los videojuegos
vector<Videojuego> videojuegos;

// Conjunto para almacenar las categorías únicas
set<string> categorias;

// Función para agregar un nuevo videojuego
void agregarVideojuego() {
    Videojuego nuevoJuego;
    cout << "Ingrese el nombre del videojuego: "<<endl;
    cin>>nuevoJuego.titulo;
    cin.ignore();
    cout << "Ingrese la categoría del videojuego: "<<endl;
    cin>>nuevoJuego.categoria;
    categorias.insert(nuevoJuego.categoria); // Agregar la categoría al conjunto
    cout << "Ingrese el desarrollador: "<<endl;
    cin>>nuevoJuego.desarrollador;
    cin.ignore();
    cout << "Ingrese el año de lanzamiento: "<<endl;
    cin >> nuevoJuego.anio;
    cin.ignore(); // Limpiar el buffer de entrada
    cout << "Ingrese la plataforma: "<<endl;
    getline(cin, nuevoJuego.plataforma);
    videojuegos.push_back(nuevoJuego);
}
//Funcion agregar juego ordenado por titulo
void ordenadoTitulo() {
    vector<Videojuego> ordenadosPorTitulo = videojuegos;
    sort(ordenadosPorTitulo.begin(), ordenadosPorTitulo.end(), [](const Videojuego& a, const Videojuego& b) {
        return a.titulo < b.titulo;
    });

    cout << "Videojuegos ordenados por título:" << endl;
    for (const auto& juego : ordenadosPorTitulo) {
        cout << "- " << juego.titulo << ", Categoría: " << juego.categoria << ", Desarrollador: " << juego.desarrollador << ", Año: " << juego.anio << ", Plataforma: " << juego.plataforma << endl;
    }
    cout << endl;
}
//Funcion agregar juego ordenado por año
void ordenadoAño(){
    vector<Videojuego> ordenadosPorAño = videojuegos;
    sort(ordenadosPorAño.begin(), ordenadosPorAño.end(), [](const Videojuego& a, const Videojuego& b) {
        return a.anio < b.anio;
    });

    cout << "Videojuegos ordenados por título:" << endl;
    for (const auto& juego : ordenadosPorAño) {
        cout << "- " << juego.anio << ", Nombre: " << juego.titulo << ", Desarrollador: " << juego.desarrollador << ", Categoria: " << juego.categoria << ", Plataforma: " << juego.plataforma << endl;
    }
    cout << endl;

}
//Funcion agregar juego ordenado por año y plataforma ascendentemente
void ordenadoAñoPlataforma(){
    vector<Videojuego> ordenadosPorAño = videojuegos;
    vector<Videojuego> ordenadosPorPlataforma = videojuegos;
    sort(ordenadosPorAño.begin(), ordenadosPorAño.end(), [](const Videojuego& a, const Videojuego& b) {
        return a.anio < b.anio;
    });
    sort(ordenadosPorPlataforma.begin(), ordenadosPorPlataforma.end(), [](const Videojuego& a, const Videojuego& b) {
        return a.plataforma < b.plataforma;
    });

    cout << "Videojuegos ordenados por Año y Plataforma:" << endl;
    for (const auto& juego : ordenadosPorAño ) {
        cout <<"Año" << juego.anio;
    } 
    cout << endl;
    for (const auto& juego : ordenadosPorPlataforma ) {
        cout << " Plataforma " << juego.plataforma << ", Nombre: " << juego.titulo << ", Categoria: " << juego.categoria << ", Desarrollador: " << juego.desarrollador << endl;
    } 


}

//videojuegos por categorias

//Para este no se me ocurre mas nada:(
void VideojuegosPorCategoria() {
    for (const string& categoria : categorias) {
        cout << "Videojuegos de la categoría  " << categoria << ":" << endl;
        for (const auto& juego : videojuegos) {
            if (juego.categoria == categoria) {
                cout << "- " << juego.titulo << ", Categoría: " << juego.categoria << ", Desarrollador: " << juego.desarrollador << ", Año: " << juego.anio << ", Plataforma: " << juego.plataforma << endl;
            }
        }
        cout << endl;
    }
}
void listaFav(){
    string titulo[]={"Mario", "call of duty", "cars", "free"};

    
}


    
};
