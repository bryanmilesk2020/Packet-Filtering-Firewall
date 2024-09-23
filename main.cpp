#include <iostream>
#include <pcap.h>
#include <boost/asio.hpp>
//#include <libnet.h> - will include later

int main() {
	pcap_if_t* alldevs; /*sets up linked list of network devices*/
	pcap_if_t* d;
	int i = 0;
	char errbuf[PCAP_ERRBUF_SIZE];

	if (pcap_findalldevs_ex(PCAP_SRC_IF_STRING, NULL, &alldevs, errbuf) == -1) {
		frpintf(stderr, "Error in pcap_findalldevs_ex: %s\n", errbuf);
		exit(1);
	} /*gathers all available network interfaces for capturing, prints error message if
	  there is a failure and exits program*/
}
