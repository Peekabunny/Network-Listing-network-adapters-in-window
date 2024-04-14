#include <stdio.h>

struct addrinfo {
	int ai_flags;  // AI_Passive, AI CANONNAME, etc.
	int ai_family;  //AF_INET, AF_INet6, Af_UNSPEC   IPv4, IPv6, or both    
	int ai_socket;  // Sock_stream or Sock_diagram
	int ai_protocol;  // use 0 for "any"
	size_t ai_addrlen; // size of ai_addr in bytes
	struct sockaddr* ai_addr;  //struct sockaddr_in or _in6
	char* ai_canonname;  //full canonical host name

	struct addrinfo* ai_next;  // Link list, next node
};

struct sockaddr {
	unsigned short sa_family;  //address family, AF_xxx
	char sa_data[14]; // 14 byte of protocol address
};



int main() {

}