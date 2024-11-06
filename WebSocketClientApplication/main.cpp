#include <bits/stdc++.h>
#include "WebSocketClient.h"
#include "CommandLineInterface.h"


int main() {
    WebSocketClient client("wss://echo.websocket.events/.ws"); // Replace with the working server
    CommandLineInterface cli(client);

    if (client.connect()) {
        cli.run();
    } else {
        std::cerr << "Failed to connect to the WebSocket server." << std::endl;
    }

    return 0;
}
