#include "display.h"
#include "frozen.h"
#include "log.h"

#include <MQTTClient.h>
#include <getopt.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

#define UNUSED(x) (void)(x)

#define MQTT_KEEP_ALIVE_INTERVAL 30
#define MQTT_CLEAN_SESSION 0
#define MQTT_SUB_QOS 1
#define MQTT_PUB_QOS 1
#define CHAT_MESSAGE_TOPIC "+/message"
#define CHAT_STATUS_TOPIC "+/status"
#define CHAT_DEFAULT_PORT "1883"
#define CHAT_DEFAULT_HOST "localhost"

MQTTClient client;

typedef struct Config {
    char *port;
    char *host;
    char *netid;
    char *name;
} Config;

char message_topic[100];
char status_topic[100];
char *name;
char *netid;

void parse_arguments(Config *config, int argc, char *argv[]);
void received_input(char *data);

int main(int argc, char *argv[]) {
    Config config;

    // Parse arguments
    parse_arguments(&config, argc, argv);

    // Set up global variables like message_topic or status_topic (if needed)

    // Start display
    display_init();

    // Start MQTT

    // Receive input from user forever...
    display_process_input(received_input);

    return EXIT_SUCCESS;
}

void parse_arguments(Config *config, int argc, char *argv[]) {
    // Parse the arguments, filling in config struct
}

void received_input(char *data) {
    // You have received input from the user insterface

    // Convert input line into json

    // Publish data
}
