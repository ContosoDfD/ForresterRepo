# Usage Instructions for OpenSSH

OpenSSH is a powerful tool for secure communication over a network. Below are the usage instructions and examples to help you get started.

## Starting the SSH Server

To start the SSH server, use the following command:

```
sshd
```

Make sure that the configuration file (`sshd_config`) is properly set up before starting the server.

## Connecting to an SSH Server

To connect to an SSH server, use the `ssh` command followed by the username and hostname:

```
ssh username@hostname
```

Replace `username` with your actual username and `hostname` with the server's address.

## Key Management

To generate a new SSH key pair, use the following command:

```
ssh-keygen -t rsa -b 4096 -C "your_email@example.com"
```

This will create a new RSA key pair with a specified email as a label.

## Copying SSH Keys

To copy your public SSH key to a remote server, use:

```
ssh-copy-id username@hostname
```

This command will allow you to log in without a password.

## Additional Options

You can use various options with the `ssh` command. For example, to specify a different port:

```
ssh -p port_number username@hostname
```

Replace `port_number` with the actual port number.

## Troubleshooting

If you encounter issues, check the following:

- Ensure the SSH server is running.
- Verify your network connection.
- Check the firewall settings to ensure that the SSH port is open.

For more detailed information, refer to the `INSTALL.md` file in the `docs` directory.