#include "Implementaciones.h"
#include <string>

Sardina::Sardina(string& habitat, string& desplazamiento) : Pez(habitat, desplazamiento), Nbranquias(5) {};

void const Sardina::Habito() const {
	cout << "Las sardinas habitamos en el " << this->habitat << endl;
}

void const Sardina::MeAlimento() const {
	cout << "Las sardinas nos alimentamos de " << this->alimentacion << endl;
}

void const Sardina::MeDesplazo() const {
	cout << "Las sardinas nos desplazamos " << this->desplazamiento << endl;
}

void const Sardina::MeReproduzco() const {
	cout << "Las sardinas nos reproducimos " << this->reproduccion << endl;
}

void const Sardina::Respiro() const{
	cout << "Las sardinas respiramos " << this->respiracion<< endl;
}




Gaviota::Gaviota(string &habitat, string &desplazamiento) : Ave(habitat, desplazamiento), anchoTotal(100) {};

void const Gaviota::Habito() const {
	cout << "Las gaviotas habitamos en el " << this->habitat << endl;
}

void const Gaviota::MeAlimento() const {
	cout << "Las gaviotas nos alimentamos de " << this->alimentacion << endl;
}

void const Gaviota::MeDesplazo() const {
	cout << "Las gaviotas nos desplazamos " << this->desplazamiento << endl;
}

void const Gaviota::MeReproduzco() const {
	cout << "Las gaviotas nos reproducimos " << this->reproduccion << endl;
}

void const Gaviota::Respiro() const {
	cout << "Las gaviotas respiramos " << this->respiracion << endl;
}

void const Gaviota::ImprimirDatos() {
	cout << "Se imprimen los datos de Gaviota" << endl;
}





Cocodrilo::Cocodrilo(string& habitat, string& desplazamiento) : Reptil(habitat, desplazamiento), longitud(190) {};

void const Cocodrilo::Habito() const {
	cout << "Los cocodrilos habitamos en el " << this->habitat << endl;
}

void const Cocodrilo::MeAlimento() const {
	cout << "Los cocodrilosnos alimentamos de " << this->alimentacion << endl;
}

void const Cocodrilo::MeDesplazo() const {
	cout << "Los cocodrilos nos desplazamos " << this->desplazamiento << endl;
}

void const Cocodrilo::MeReproduzco() const {
	cout << "Los cocodrilos nos reproducimos " << this->reproduccion << endl;
}

void const Cocodrilo::Respiro() const {
	cout << "Los cocodrilos respiramos " << this->respiracion << endl;
}





RanaDardo::RanaDardo(string& habitat, string& desplazamiento) : Anfibio(habitat, desplazamiento), tamanoAdulto(10) {};

void const RanaDardo::Habito() const {
	cout << "Las ranas dardo habitamos en el " << this->habitat << endl;
}

void const RanaDardo::MeAlimento() const {
	cout << "Las ranas dardo nos alimentamos de " << this->alimentacion << endl;
}

void const RanaDardo::MeDesplazo() const {
	cout << "Las ranas dardo nos desplazamos " << this->desplazamiento << endl;
}

void const RanaDardo::MeReproduzco() const {
	cout << "Las ranas dardo nos reproducimos " << this->reproduccion << endl;
}

void const RanaDardo::Respiro() const {
	cout << "Las ranas dardo respiramos " << this->respiracion << endl;
}

void const RanaDardo::ImprimirDatos() {
	cout << "Se imprimen los datos de ranas dardo" << endl;
}






MariposaMonarca::MariposaMonarca(string& habitat, string& desplazamiento) : Insecto(habitat, desplazamiento), anchoTotal(15) {};


void const MariposaMonarca::Habito() const {
	cout << "Las mariposas monarca habitamos en el " << this->habitat << endl;
}

void const MariposaMonarca::MeAlimento() const {
	cout << "Las mariposas monarca nos alimentamos de " << this->alimentacion << endl;
}

void const MariposaMonarca::MeDesplazo() const {
	cout << "Las mariposas monarca nos desplazamos " << this->desplazamiento << endl;
}

void const MariposaMonarca::MeReproduzco() const {
	cout << "Las mariposas monarca nos desplazamos " << this->reproduccion << endl;
}

void const MariposaMonarca::Respiro() const {
	cout << "Las mariposas monarca no respiramos" << endl;
}

void const MariposaMonarca::ImprimirDatos() {
	cout << "Se imprimen los datos de mariposas monarca" << endl;
}
