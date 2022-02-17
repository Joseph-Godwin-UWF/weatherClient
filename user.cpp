#include "user.hpp"

User::User(string username, int socket){
	this.username = username;
	this.socket = socket;
}

string User::getLocation(int index){
	if(!(index >= this.locations.size()))
		return this.locations.at(index);
	return "[-] INVALID INDEX FOR getLocation(int index)\n";
}

string User::getMessage(int index){
	if(!(index >= this.messages.size()))
		return this.messages.at(index);
	return "[-] INVALID INDEX FOR getMessage(int index)\n";
}

void User::setUsername(string username){
	//NO FUNCTIONALITY FOR NOW
}
void User::setSocket(int socket){
	//NO FUNCTIONALITY FOR NOW
}

void User::addLocation(string location){
	if(count(this.locations.begin(), this.locations.end(), location))
		return;
	this.locations.push_back(location);
	return;
}
void User::removeLocation(string location){
	for(int i = 0; i < this.locations.size(), i++){
		if(location == this.locations.at(i)){
			this.locations.erase(i);
			return;
		}
		printf("vector<string> location does not contain %s\n", location);
		return;
	}
}

void User::addMessage(string message){
	if(count(this.messages.begin(), this.messages.end(), message))
		return;
	this.messages.push_back(message);
	return;
}
void User::removeMessage(string message){
	for(int i = 0; i < this.messages.size(), i++){
		if(message == this.messages.at(i)){
			this.messages.erase(i);
			return;
		}
		printf("vector<string> message does not contain %s\n", message);
		return;
	}
}

void User::printList(vector<string> list){
	for(int i = 0; i < list.size(); i++){
		printf("Index %d: %s\n", i, list.at(i));
	}
	return 0;
}
