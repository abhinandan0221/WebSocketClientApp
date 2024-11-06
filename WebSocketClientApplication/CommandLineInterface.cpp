#include "CommandLineInterface.h"
#include <iostream>
#include <string>

CommandLineInterface::CommandLineInterface(WebSocketClient& client) : client(client) {}

void CommandLineInterface::run() {
    std::string input;
    while (true) {
        std::cout << "Enter message: ";
        std::getline(std::cin, input);
        if (input == "exit") {
            client.close();
            break;
        }
        client.sendMessage(input);
        std::string reply = client.receiveMessage();
        std::cout << "Received: " << reply << std::endl;
    }
}
