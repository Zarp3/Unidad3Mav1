#include <SFML/window.hpp>
#include <SFML/graphics.hpp>
#include<iostream>
using namespace std;
using namespace sf;

int main()
{
	Texture texturafondo;
	string fondor = "fondo.jpg";

	if (!texturafondo.loadFromFile(fondor))
	{
		cerr << "error al cargar el fondo" << fondor<< endl;
		return 0;
	}

	Sprite spritefondo;
	spritefondo.setTexture(texturafondo);

	float anchoventana = 800;
	float altoventana = 600;
	float escalaX = anchoventana / texturafondo.getSize().x;
	float escalaY = altoventana / texturafondo.getSize().y;
	spritefondo.setScale(escalaX, escalaY);

	RenderWindow ventana(VideoMode(800, 600, 32), "fondo del juego");

	while (ventana.isOpen())
	{
		Event evento;

		while (ventana.pollEvent(evento))
		{
			if (evento.type == Event::Closed)
				ventana.close();
		}

		ventana.clear();

		ventana.draw(spritefondo);

		ventana.display();
	}
	return 0;
}