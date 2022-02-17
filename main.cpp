#include "user.hpp"

int main(){

	User Fred("Freddo", 5);

	Fred.addLocation("panama");
	Fred.addLocation("port");
	Fred.addLocation("panama");

	Fred.printList(Fred.locations);

	return 0;
}