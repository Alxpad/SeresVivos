#pragma once
#include "SerVivo.h"
#include <string>
#include <iostream>

class Ave : public SerVivo {
public:
	Ave(std::string& habitat, std::string& desplazamiento) : habitat(habitat), desplazamiento(desplazamiento), Alas(true), Npatas(2), huevos(true) {};
	~Ave() {};
protected:
	int Npatas;
	bool Alas;
	std::string piel;
	std::string habitat;
	bool huevos;
	std::string desplazamiento;
	std::string alimentacion;
};

class Mamifero : public SerVivo {
public:
	Mamifero(std::string& habitat, std::string& desplazamiento) : habitat(habitat), desplazamiento(desplazamiento), Alas(true), Npatas(2), huevos(true) {};
	~Mamifero() {};
protected:
	int Npatas;
	bool Alas;
	std::string piel;
	std::string habitat;
	bool huevos;
	std::string desplazamiento;
	std::string alimentacion;

};

class Reptil : public SerVivo {
public:
	Reptil(std::string& habitat, std::string& desplazamiento) : habitat(habitat), desplazamiento(desplazamiento), Alas(false), Npatas(4), huevos(true) {};
	~Reptil() {};

protected:
	int Npatas;
	bool Alas;
	std::string piel;
	std::string habitat;
	bool huevos;
	std::string desplazamiento;
	std::string alimentacion;
};

class Anfibio : public SerVivo {
public:
	Anfibio(std::string& habitat, std::string& desplazamiento) : habitat(habitat), desplazamiento(desplazamiento), Alas(false), Npatas(2), huevos(true) {};
	~Anfibio(){};

protected:
	int Npatas;
	bool Alas;
	std::string piel;
	std::string habitat;
	bool huevos;
	std::string desplazamiento;
	std::string alimentacion;
};

class Pez : public SerVivo {
public:
	Pez(std::string& habitat, std::string& desplazamiento) : habitat(habitat), desplazamiento(desplazamiento), Npatas(0), Alas(false), huevos(false) {};
	~Pez() {};

protected:
	int Npatas;
	bool Alas;
	std::string piel;
	std::string habitat;
	bool huevos;
	std::string desplazamiento;
	std::string alimentacion;
};

class Insecto: public SerVivo {
public:
	Insecto(std::string& habitat, std::string& desplazamiento) : habitat(habitat), desplazamiento(desplazamiento), Alas(true), Npatas(6), huevos(true) {};
	~Insecto() {};

protected:
	int Npatas;
	bool Alas;
	std::string piel;
	std::string habitat;
	bool huevos;
	std::string desplazamiento;
	std::string alimentacion;

};