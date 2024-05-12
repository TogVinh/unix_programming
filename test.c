#include <stdio.h>
#include <arpa/inet.h>
#include <string.h>


int main()
{
    char addr_network[64] = "192.168.99.5";
    char addr_gateway[64] = "192.168.99.125";
    char subnet[64] = "255.255.255.0";

    struct in_addr ip_network;
    struct in_addr ip_gateway;
    struct in_addr ip_subnet;


    if (inet_aton(addr_network, &ip_network) != 1)
    {
        /* code */
        printf("Fail to tranfer addr_network \n");
        return 0;
    }
    if (inet_aton(addr_gateway, &ip_gateway) != 1)
    {
        /* code */
        printf("Fail to tranfer addr_network \n");
        return 0;
    }

    if (inet_aton(subnet, &ip_subnet) != 1)
    {
        /* code */
        printf("Fail to tranfer subnet \n");
        return 0;
    }

    uint32_t res1 = ip_network.s_addr & ip_subnet.s_addr;
    uint32_t res2 = ip_gateway.s_addr & ip_subnet.s_addr;

    printf("res 1 = |%d|\n", res1);
    printf("res 2 = |%d|\n", res2);
    

    return 0;
}