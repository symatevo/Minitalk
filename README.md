# minitalk

The "minitalk" project is a fascinating project at 42 that challenges you to create a client-server application for inter-process communication using signals. The goal is to send messages from the client to the server in a binary format and reconstruct them on the server-side.

## Summary

In this project, you are required to implement a client and a server program. The client program sends messages (strings) to the server using custom-defined signals. The server program listens for incoming messages and reconstructs the original messages from the binary data received.

## Skills to Learn

- Inter-process Communication
- Signal Handling
- Binary Manipulation
- Bitwise Operations

## The "server" Program

### Usage

```bash
./server
```

### Description

The "server" program listens for incoming messages from the client. When a message is received, the server reconstructs it and displays the original message on the standard output.

## The "client" Program

### Usage

```bash
./client [server PID] [message]
```

### Description

The "client" program sends the provided message to the server with the given PID (Process ID). It converts the message into binary data and sends it using custom-defined signals.

## Project Constraints

- Communication between the client and the server must be done using signals only.
- The client must be able to send messages of any length.
- The server must handle multiple client messages in the correct order.

## Example Usage

```bash
$> ./server
```

```bash
$> ./client [server PID] "Hello, server!"
```
