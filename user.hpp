#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class User {
public:

	vector<string> locations;
	vector<string> messages;

	User();
	User(string username, int socket);

	int getSocket() {return socket;}
	string getUsername() {return username;}
	string getLocation(int index);
	string getMessage(int index);

	void setUsername(string username);
	void setSocket(int socket);

	void addLocation(string location);
	void removeLocation(string location);

	void addMessage(string message);
	void removeMessage(string message);

	void printList(vector<string> list);
private:
	int socket;
	string username;
};