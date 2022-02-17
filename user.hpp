#include <String>
#include <vector>
#include <algorithm>
#include "bear.cpp"

using namespace std;

class User {
public:

	vector<String> locations;
	vector<String> messages;
	
	User();
	User(String username, int socket);

	int getSocket() {return socket;}
	String getUsername() {return username;}
	String getLocation(int index);
	String getMessage(int index);

	void setUsername(String username);
	void setSocket(int socket);

	void addLocation(String location);
	void removeLocation(String location);

	void addMessage(String message);
	void removeMessage(String message);

	void printList(vector<String> list);
private:
	int socket;
	String username;
};