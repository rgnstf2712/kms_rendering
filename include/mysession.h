#ifndef MYSESSION_H
#define MYSESSION_H

#include <systemd/sd-bus.h>

struct session_info_t {
	char *id;
	unsigned int vt;
	char *seat;
	sd_bus *bus;
	char *object;
};

struct session_info_t *create_session_info();
int destroy_session_info(struct session_info_t *session_info);

#endif
