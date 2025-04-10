#include <stdio.h>
#include "auth.h"
#include "crypto.h"
#include "ssh.h"

int main(int argc, char *argv[]) {
    // Initialize authentication components
    if (init_auth() != 0) {
        fprintf(stderr, "Failed to initialize authentication.\n");
        return 1;
    }

    // Initialize cryptographic components
    if (init_crypto() != 0) {
        fprintf(stderr, "Failed to initialize cryptography.\n");
        return 1;
    }

    // Initialize SSH protocol components
    if (init_ssh() != 0) {
        fprintf(stderr, "Failed to initialize SSH protocol.\n");
        return 1;
    }

    // Start the SSH server
    if (start_ssh_server() != 0) {
        fprintf(stderr, "Failed to start SSH server.\n");
        return 1;
    }

    printf("OpenSSH server started successfully.\n");
    return 0;
}