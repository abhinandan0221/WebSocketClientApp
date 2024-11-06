#include "WebSocketClient.h"
#include <gtest/gtest.h>

TEST(WebSocketClientTest, TestConnection) {
    WebSocketClient client("wss://echo.websocket.events/.ws");
    EXPECT_TRUE(client.connect());
    client.close();
}

// Add more tests here

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
