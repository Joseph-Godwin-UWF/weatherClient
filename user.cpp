#include "user.hpp"

User(){
}

User(String username, int socket){
	this.username = username;
	this.socket = socket;
}

String getLocation(int index){
	if(!(index >= this.locations.size()))
		return this.locations.at(index);
	return "[-] INVALID INDEX FOR getLocation(int index)\n";
}

String getMessage(int index){
	if(!(index >= this.messages.size()))
		return this.messages.at(index);
	return "[-] INVALID INDEX FOR getMessage(int index)\n";
}

void setUsername(String username){
	//NO FUNCTIONALITY FOR NOW
}
void setSocket(int socket){
	//NO FUNCTIONALITY FOR NOW
}

void addLocation(String location){
	if(count(this.locations.begin(), this.locations.end(), location))
		return;
	this.locations.push_back(location);
	return;
}
void removeLocation(String location){
	for(int i = 0; i < this.locations.size(), i++){
		if(location == this.locations.at(i)){
			this.locations.erase(i);
			return;
		}
		printf("vector<String> location does not contain %s\n", location);
		return;
	}
}

void addMessage(String message){
	if(count(this.messages.begin(), this.messages.end(), message))
		return;
	this.messages.push_back(message);
	return;
}
void removeMessage(String message){
	for(int i = 0; i < this.messages.size(), i++){
		if(message == this.messages.at(i)){
			this.messages.erase(i);
			return;
		}
		printf("vector<String> message does not contain %s\n", message);
		return;
	}
}

void printList(vector<String> list){
	for(int i = 0; i < list.size(); i++){
		printf("Index %d: %s\n", i, list.at(i));
	}
	return 0;
}
