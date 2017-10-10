//
// Created by Joe Do on 10/9/17.
//

#ifndef ASSIGNMENT01_EXTRA_H
#define ASSIGNMENT01_EXTRA_H

#include "contact.h"

contact *addContact(string first, string last, string phone);
string contactLookup(string lookup);
contact *deleteContact(string name);

#endif //ASSIGNMENT01_EXTRA_H
