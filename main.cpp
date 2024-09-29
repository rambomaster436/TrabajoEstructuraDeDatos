/*un sistema de gesti�n de biblioteca en que permita realizar 
operaciones como agregar nuevos libros, 
buscar libros por t�tulo o autor, gestionar pr�stamos y
devoluciones, generar informes, entre otras funciones.*/

#include <iostream>
#include <string.h>
#include <cctype>
#include "lib.h" 
using namespace std;

#define MAX 100

struct LibroRegistro {
    int anioPubli;
    char titulo[100];
    char autor[100];
};

void Mostrar(LibroRegistro libro);
bool validarAnio(int anio);
void mostrarLibrosDefinidos();
void buscarLibro(LibroRegistro biblioteca[], int numActualLibros);
void buscarLibroPredefinido(string busqueda);

int main(int argc, char** argv) {
    int numLibros = MAX;
    LibroRegistro biblioteca[MAX]; 
    int numActualLibros = 0;


   for (int i = 0; i < 50; ++i) {
    strcpy(biblioteca[numActualLibros].titulo, bibliotecaPredefinida[i].titulo);
    strcpy(biblioteca[numActualLibros].autor, bibliotecaPredefinida[i].autor);
    biblioteca[numActualLibros].anioPubli = bibliotecaPredefinida[i].anioPubli;
    numActualLibros++;
}

    int opcion;
    do {
        cout << "\n======================\n";
        cout << "        Menu          \n";
        cout << "1: Registrar \n";
        cout << "2: Buscar libro en biblioteca del usuario\n";
        cout << "3: Buscar libro en biblioteca predefinida\n";
        cout << "4: Salir \n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: {
                
                 char continuar;
                do {
                    if (numActualLibros < numLibros) {
                        cout << "Ingrese el titulo del libro: ";
                        cin.ignore();
                        cin.getline(biblioteca[numActualLibros].titulo, 100);
                        cout << "Ingrese el nombre del autor: ";
                        cin.getline(biblioteca[numActualLibros].autor, 100);
                        cout << "Ingrese el a�o de publicacion: ";
                        cin >> biblioteca[numActualLibros].anioPubli;

                       
                        if (validarAnio(biblioteca[numActualLibros].anioPubli)) {
                            Mostrar(biblioteca[numActualLibros]);
                            numActualLibros++;
                        }
                    } else {
                        cout << "La biblioteca esta llena. No se pueden agregar mas libros.\n";
                        break;
                    }

                    cout << "�Desea ingresar otro libro? (s/n): ";
                    cin >> continuar;
                    continuar = tolower(continuar);

                } while (continuar == 's');
            } break;

            case 2: {
                buscarLibro(biblioteca, numActualLibros);
                
            } break;

            case 3: {
               
                string busqueda;
                cout << "\n Ingrese el titulo o el autor del libro que desea buscar en la biblioteca predefinida: ";
                cin.ignore();
                getline(cin, busqueda);
                buscarLibroPredefinido(busqueda);
            } break;

            case 4: {
                cout << "Hasta luego, vuelva pronto...\n";
            } break;

            default:
                cout << "Opcion invalida. Por favor, ingrese una opcion valida.\n";
                break;
        }
    } while (opcion != 4);

    return 0;
}

void Mostrar(LibroRegistro libro) {
    cout << endl << "El articulo registrado: " << endl;
    cout << libro.titulo << " / " << libro.autor << " / " << libro.anioPubli << endl;
}

bool validarAnio(int anio) {
    
    if (anio >= 1500 && anio <= 2024) {
        return true;
    } else {
        cout << "El a�o de publicacion ingresado no es valido.\n";
        return false;
    }
}

void buscarLibro(LibroRegistro biblioteca[], int numActualLibros) {
	
	if (numActualLibros > 0) {
        cout << "\n Ingrese el titulo o el autor del libro que desea buscar: ";
        string busqueda;
        cin.ignore();
        getline(cin, busqueda);

        bool encontrado = false;
        for (int i = 0; i < numActualLibros; ++i) {
            if (strcmp(biblioteca[i].titulo, busqueda.c_str()) == 0 || strcmp(biblioteca[i].autor, busqueda.c_str()) == 0) {
                Mostrar(biblioteca[i]);
                encontrado = true;
            }
        }

        if (!encontrado) {
            cout << "No se encontro ningun libro con ese titulo o autor.\n";
        }
    } else {
        cout << "\nNo hay libros registrados en la biblioteca.\n";
    }
   
}

void mostrarLibrosDefinidos() {
    cout << "\nLista de todos los libros de la biblioteca:\n";
    for (int i = 0; i < 100; ++i) {
        cout << "Libro #" << (i + 1) << ": " << bibliotecaPredefinida[i].titulo << " - " << bibliotecaPredefinida[i].autor << " (" << bibliotecaPredefinida[i].anioPubli << ")\n";
    }
}

void buscarLibroPredefinido(string busqueda) {
    bool encontrado = false;
    for (int i = 0; i < 100; ++i) {
        if (bibliotecaPredefinida[i].titulo == busqueda || bibliotecaPredefinida[i].autor == busqueda) {
            cout << "Libro encontrado en la biblioteca predefinida:\n";
            cout << "Titulo: " << bibliotecaPredefinida[i].titulo << endl;
            cout << "Autor: " << bibliotecaPredefinida[i].autor << endl;
            cout << "A�o de publicacion: " << bibliotecaPredefinida[i].anioPubli << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No se encontro ningun libro con ese t�tulo o autor en la biblioteca predefinida.\n";
    }
}
