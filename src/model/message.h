#ifndef METALSLUG_MESSAGE_H
#define METALSLUG_MESSAGE_H

#include <iostream>
#include "User.h"

class Message {
	private:
    int id;
    unsigned long timestamp;
		string from;
		string to;
		string content;

	public:
	/* Pre:
     * Post:
		 */
	string getTimestamp();

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

};


class MessageList{
	private:
         /* como guardamos los mensajes? */
  public:
    /* Pre:
		 * Post: devuelve una lista de mensajes, correspondientes
     *       a un usuario especifico
		 */
		MessageList retrieve_messages_to_user(User user);

};


#endif //METALSLUG_MESSAGE_H
