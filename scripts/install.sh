#!/bin/bash

# This script automates the installation process for OpenSSH.

# Define installation directory
INSTALL_DIR="/usr/local/openssh"

# Create installation directory if it doesn't exist
if [ ! -d "$INSTALL_DIR" ]; then
    echo "Creating installation directory at $INSTALL_DIR"
    mkdir -p "$INSTALL_DIR"
fi

# Copy binaries to installation directory
echo "Installing OpenSSH binaries..."
cp -r ./src/* "$INSTALL_DIR"

# Set permissions
echo "Setting permissions..."
chmod -R 755 "$INSTALL_DIR"

# Print completion message
echo "OpenSSH installation completed successfully!"