#pragma once

#include "wetalk.h"
#include "user.h"
#include "server.h"
#include "walloc.h"

typedef void(*on_msg_recived_callback)(const char *msg);

bool client_init(const char *address, on_msg_recived_callback cb);
bool client_login(int uid, const char *password);
int client_register(const char *username, const char *password);
void client_send(const char *text);
void client_logout();

