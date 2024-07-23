#include "DistintosSeres.h"
#include "SerVivo.h"
#include "Implementaciones.h"
#include "Implementaciones.cpp"
#include <iostream>
#include <string>

using namespace std;

int main() {
	string mar = "mar";
	string selva = "selva";
	string rio = "rio";
	string nada = "nadando";
	string vuela = "volando";
	string camina = "caminando";

	Sardina unaSardina(mar, nada); // No puedo usar directamente "mar" o "nadando" porque el constructor pide una referencia a un recurso ya creado, como es el caso.
	Gaviota unaGaviota(mar, vuela);
	Cocodrilo unCocodrilo(rio, camina);
	MariposaMonarca unaMariposa(selva, vuela);
	RanaDardo unaRana(rio, camina);

	unaSardina.ImprimirDatos();
	unaGaviota.ImprimirDatos();
	unCocodrilo.ImprimirDatos();
	unaMariposa.ImprimirDatos();
	unaRana.ImprimirDatos();


}