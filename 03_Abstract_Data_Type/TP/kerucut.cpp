// kerucut.cpp
#include "kerucut.h"
#include <cmath>

// Konstanta PI
const double PI = 3.14159265358979323846;

// Implementasi konstruktor
Kerucut::Kerucut() : jariJari(0), tinggi(0) {}

Kerucut::Kerucut(double r, double t) : jariJari(r), tinggi(t) {}

// Implementasi setter
void Kerucut::setJariJari(double r) {
    jariJari = r;
}

void Kerucut::setTinggi(double t) {
    tinggi = t;
}

// Implementasi getter
double Kerucut::getJariJari() const {
    return jariJari;
}

double Kerucut::getTinggi() const {
    return tinggi;
}

// Implementasi method perhitungan
double Kerucut::hitungLuasAlas() const {
    return PI * jariJari * jariJari;
}

double Kerucut::hitungKelilingAlas() const {
    return 2 * PI * jariJari;
}

double Kerucut::hitungGarisPelukis() const {
    return sqrt(jariJari * jariJari + tinggi * tinggi);
}

double Kerucut::hitungLuasSelimut() const {
    return PI * jariJari * hitungGarisPelukis();
}

double Kerucut::hitungLuasPermukaan() const {
    return hitungLuasAlas() + hitungLuasSelimut();
}

double Kerucut::hitungVolume() const {
    return (1.0/3.0) * PI * jariJari * jariJari * tinggi;
}