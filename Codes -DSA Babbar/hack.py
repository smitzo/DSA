from scapy.all import ARP, Ether, srp
import sys

def get_ip_range():
    # Get the network range from the user
    ip_range = input("Enter the IP range (e.g., 192.168.1.1/24): ")
    return ip_range

def scan(ip_range):
    # Create an ARP packet
    arp = ARP(pdst=ip_range)
    ether = Ether(dst="ff:ff:ff:ff:ff:ff")
    packet = ether/arp

    # Send the packet and capture the response
    result = srp(packet, timeout=3, verbose=0)[0]

    # Parse the response
    devices = []
    for sent, received in result:
        devices.append({'ip': received.psrc, 'mac': received.hwsrc})

    return devices

def display_results(devices):
    print("Available devices in the network:")
    print("IP" + " "*18+"MAC")
    for device in devices:
        print("{:16}    {}".format(device['ip'], device['mac']))

if __name__ == "__main__":
    ip_range = get_ip_range()
    devices = scan(ip_range)
    display_results(devices)
