#pragma once

#include "SerVivo.h"
#include "DistintosSeres.h"
using namespace std;

class Anfibio;
class Ave;
class Insecto;
class Mamifero;
class Pez;
class Reptil;


class Sardina : public Pez {
protected:
	int Nbranquias;
	std::string colorEscamas;
	std::string reproduccion;
	std::string respiracion;

public:
	Sardina(string &habitat, string& desplazamiento);
	virtual ~Sardina() {};

	void const Habito() const;
	void const MeAlimento() const;
	void const MeDesplazo() const;
	void const MeReproduzco() const;
	void const Respiro() const;
};

class Gaviota : public Ave {
public:
	Gaviota(string& habitat, string& desplazamiento);
	//virtual ~Gaviota();
	std::string colorPlumaje;
	std::string reproduccion;
	std::string respiracion;
	int anchoTotal;

	void const Habito() const;
	void const MeAlimento() const;
	void const MeDesplazo() const;
	void const MeReproduzco() const;
	void const Respiro() const;
	
	void const ImprimirDatos();
};

class Cocodrilo: public Reptil {
public:
	Cocodrilo(string& habitat, string& desplazamiento);
	//virtual ~Cocodrilo();
	std::string colorEscamas;
	std::string reproduccion;
	std::string respiracion;
	int longitud;

	void const Habito() const;
	void const MeAlimento() const;
	void const MeDesplazo() const;
	void const MeReproduzco() const;
	void const Respiro() const;
};

class RanaDardo : public Anfibio {
public:
	RanaDardo(string& habitat, string& desplazamiento);
	//virtual ~RanaDardo();
	
	std::string colorManchas;
	std::string reproduccion;
	std::string respiracion;
	int tamanoAdulto;

	void const Habito() const;
	void const MeAlimento() const;
	void const MeDesplazo() const;
	void const MeReproduzco() const;
	void const Respiro() const;

	void const ImprimirDatos();

};

class MariposaMonarca : public Insecto {
public:
	MariposaMonarca(string& habitat, string& desplazamiento);
	//virtual ~MariposaMonarca();

	std::string reproduccion;
	int anchoTotal;
	std::string mesMigracion;

	void const Habito() const;
	void const MeAlimento() const;
	void const MeDesplazo() const;
	void const MeReproduzco() const;
	void const Respiro() const;

	void const ImprimirDatos();
};