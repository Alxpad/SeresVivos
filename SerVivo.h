#pragma once
#include <iostream>
#include <string>

class SerVivo
{
protected:
	SerVivo();
	virtual ~SerVivo();

public:
	std::string desplazamiento;
	std::string habitat;

	virtual void const Respiro() const = 0;
	virtual void const MeAlimento() const = 0;
	virtual void const Habito() const = 0;
	virtual void const MeReproduzco() const = 0;
	virtual void const MeDesplazo() const = 0;

	virtual void const ImprimirDatos();
};