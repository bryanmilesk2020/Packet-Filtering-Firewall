#include <iostream>
#include <pcap.h>
#include <boost/asio.hpp>
//#include <libnet.h>

int main() {
	pcap_if_t* alldevs;
	pcap_if_t* d;
	int i = 0;
	char errbuf[PCAP_ERRBUF_SIZE];
}