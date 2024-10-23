#include "Grafo.h"
#include <iostream>
#include <string>

int main() {
    Grafo<std::string, int> grafo;
    int opcion;
    std::string vertice, origen, destino;
    int peso;

    do {
        std::cout << "Menú:\n";
        std::cout << "1. Agregar vértice\n";
        std::cout << "2. Agregar arista\n";
        std::cout << "3. Imprimir grafo\n";
        std::cout << "4. Obtener cantidad de vértices\n";
        std::cout << "5. Obtener cantidad de aristas\n";
        std::cout << "6. Buscar vértice\n";
        std::cout << "7. Buscar arista\n";
        std::cout << "8. Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        switch (opcion) {
        case 1:
            std::cout << "Ingresa el nombre del vértice: ";
            std::cin >> vertice;
            grafo.agregarVertice(vertice);
            std::cout << "Vértice agregado.\n";
            break;
        case 2:
            std::cout << "Ingresa el vértice origen: ";
            std::cin >> origen;
            std::cout << "Ingresa el vértice destino: ";
            std::cin >> destino;
            std::cout << "Ingresa el peso de la arista: ";
            std::cin >> peso;
            grafo.agregarArista(origen, destino, peso);
            break;
        case 3:
            grafo.imprimirGrafo();
            break;
        case 4:
            std::cout << "Cantidad de vértices: " << grafo.obtenerCantidadVertices() << std::endl;
            break;
        case 5:
            std::cout << "Cantidad de aristas: " << grafo.obtenerCantidadAristas() << std::endl;
            break;
        case 6:
            std::cout << "Ingresa el nombre del vértice que deseas buscar: ";
            std::cin >> vertice;
            if (grafo.buscarVertice(vertice)) {
                std::cout << "El vértice " << vertice << " existe.\n";
            } else {
                std::cout << "El vértice " << vertice << " no existe.\n";
            }
            break;
        case 7:
            std::cout << "Ingresa el vértice origen: ";
            std::cin >> origen;
            std::cout << "Ingresa el vértice destino: ";
            std::cin >> destino;
            if (grafo.buscarArista(origen, destino)) {
                std::cout << "Hay una arista entre " << origen << " y " << destino << ".\n";
            } else {
                std::cout << "No existe una arista entre " << origen << " y " << destino << ".\n";
            }
            break;
        case 8:
            std::cout << "Saliendo...\n";
            break;
        default:
            std::cout << "Opción inválida. Intenta de nuevo.\n";
        }
        std::cout << std::endl;
    } while (opcion != 8);

    return 0;
}

