#ifndef SSH_H
#define SSH_H

/* SSH protocol version */
#define SSH_PROTOCOL_VERSION "2.0"

/* Function declarations for SSH protocol handling */
void ssh_init(void);
void ssh_start_session(void);
void ssh_handle_message(void);
void ssh_cleanup(void);

#endif /* SSH_H */