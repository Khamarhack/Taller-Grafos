#include "Arista.h"

template <typename T, typename W>
Arista<T, W>::Arista(std::shared_ptr<Vertice<T, W>> dest, W peso)
    : destino(dest), peso(peso) {}

