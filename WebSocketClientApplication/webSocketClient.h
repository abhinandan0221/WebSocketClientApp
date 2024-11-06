#pragma once

#include <string>

class WebSocketClient {
public:
    WebSocketClient(const std::string& url);
    ~WebSocketClient();

    bool connect();
    void sendMessage(const std::string& message);
    std::string receiveMessage();
    void close();

private:
    std::string url;
    // Add more members as necessary
};
