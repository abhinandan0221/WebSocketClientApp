#pragma once

#include "WebSocketClient.h"

class CommandLineInterface {
public:
    CommandLineInterface(WebSocketClient& client);
    void run();

private:
    WebSocketClient& client;
};
