// list network adapter on windows

//macro define
#ifndef _WIN32_WINNT   
#define _WIN32_WINNT 0x0600
#endif

//window header
#include <stdio.h>
#include <winsock2.h>
#include <iphlpapi.h>
#include <ws2tcpip.h>
#include <stdlib.h>

#pragma comment (lib, "ws2_32.lib") // links executable with the win sock library
#pragma comment (lib, "iphlpapi.lib")


int main() {
	
	// initialize win sock 2.2 using WSAStartup
	WSADATA d;
	// structure

	// this fill the struct up by calling WSAStartup about the window socket implementation.
	if (WSAStartup(MAKEWORD(2, 2), &d)) {
		printf("Failed to initialize.\n");
		return -1;
	}
	
	WSACleanup();
	// call WSACleanup when finish
	printf("Okay good");
	return 0;

}