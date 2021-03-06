#ifndef _MACROS_H_
#define _MACROS_H_

#include <unistd.h>

#define MAX_ROOM_SEATS 9999
#define MAX_CLI_SEATS 99
#define WIDTH_PID 5
#define WIDTH_XXNN 5
#define WIDTH_SEAT 4

#define WIDTH_TO 2
#define WIDTH_NT 2

#define FILL '0'

#define DELAY() usleep(50000);

#define CLIENT_LOG "clog.txt"
#define CLIENT_BOOK "cbook.txt"
#define SERVER_BOOK "sbook.txt"
#define SERVER_LOG "slog.txt"
#define REQUESTS "requests"

#define SHARED 0
#define MAX_REQUEST_SIZE 500

#endif /* _MACROS_H_ */