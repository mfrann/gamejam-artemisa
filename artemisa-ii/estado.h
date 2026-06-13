#pragma once
#include "string"
#include "iostream"
using namespace std;

// === NAVE ===
int nave_x;
int nave_y;

int nave_vidas = 3;
int nave_velocidad;

string nave_name = "Orion";
string nave_color;

// === PERSONAS ===
int personas_x[12];
int personas_y[12];
bool personas_rescatadas[12];

// === METEORITOS ===
int meteoritos_x[10];
int meteoritos_y[10];
bool meteoritos_activos[10];

// === JUEGO ===
int tiempo_restante;
int personas_rescatadas = 0;
string estado_juego = "JUGANDO";

// === CANVAS ===
int ANCHO = 120;
int ALTO = 30;