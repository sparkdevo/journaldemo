#include <syslog.h>

int main(int argc, char *argv[]) {
        syslog(LOG_NOTICE, "C Hello World");
        return 0;
}