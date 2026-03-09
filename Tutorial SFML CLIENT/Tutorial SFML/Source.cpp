#include <SFML/Network.hpp>
#include <iostream>
#include <string>

#define LISTENER_PORT 55000

void main()
{
	sf::TcpListener listener;

	if (listener.listen(LISTENER_PORT) != sf::Socket::Status::Done)
	{
		std::cerr << "Error al intentar escuchar en el puerto " << LISTENER_PORT << std::endl;
	}
}