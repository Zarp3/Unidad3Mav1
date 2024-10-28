#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
using namespace sf;Texture textura;Texture circulo;Sprite sprite;Sprite CirculoR;Sprite CirculoR2;Sprite CirculoR3;Sprite CirculoR4;int main() {	circulo.loadFromFile("rcircle.png");	CirculoR.setTexture(circulo);	CirculoR2.setTexture(circulo);	CirculoR3.setTexture(circulo);	CirculoR4.setTexture(circulo);	sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Sniper");	CirculoR.setPosition(App.getSize().x - CirculoR.getTexture()->getSize().x, 0);
	CirculoR2.setPosition(0, App.getSize().y - CirculoR2.getTexture()->getSize().y);
	CirculoR3.setPosition(App.getSize().x - CirculoR3.getTexture()->getSize().x, App.getSize().y - CirculoR2.getTexture()->getSize().y);

	while (App.isOpen())
	{

		App.clear();

		App.draw(CirculoR);
		App.draw(CirculoR2);
		App.draw(CirculoR3);
		App.draw(CirculoR4);

		App.display();
	}	return 0;}