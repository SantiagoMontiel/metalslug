#ifndef METALSLUG_MESSAGE_H
#define METALSLUG_MESSAGE_H

#include <iostream>
#include <string.h>
#include "User.h"

#include <vector>

class Message {
	private:
    int id;
    int timestamp;
		string from;
		string to;
		string content;

	public:
    //Constructor de Mensaje a un unico cliente.
    Message(int timestamp, string from, string to, string content);

    //Constructor de Mensaje to everyone.
    Message(int timestamp,string from,string content);

    /* Pre:
     * Post:
		 */
	int getTimestamp();

    /* Pre:
     * Post:
		 */
    string getFrom();

    /* Pre:
     * Post:
		 */
    string getTo();

    /* Pre:
     * Post:
		 */
    string getContent();

	/* Pre:
     * Post:
         */
	string serialize();

	bool isToUser(string username);

    bool isToEveryone();
};


class MessagesList{
    private:

        std::vector<Message> messagesList;

	public:

        void addMessage(Message msg);

        std::vector<Message> filterMessagesPerUser(User user);
};


#endif //METALSLUG_MESSAGE_H
