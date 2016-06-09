/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

Q(real)
Q(complex)
Q(imag)
Q(float)
Q(math)
Q(cmath)
Q(trunc)
Q(modf)
Q(e)
Q(sqrt)
Q(log)
Q(isnan)
Q(ldexp)
Q(frexp)
Q(isinf)
Q(fmod)
Q(floor)
Q(fabs)
Q(copysign)
Q(ceil)
Q(isfinite)
Q(atan)
Q(acos)
Q(tan)
Q(pi)
Q(exp)
Q(cos)
Q(sin)
Q(asin)
Q(atan2)
Q(phase)
Q(polar)
Q(rect)
Q(degrees)
Q(radians)
// qstrs specific to this port
Q(hardware)
Q(wireless)
Q(WLAN)
Q(NFC)

// for wifi class
Q(mode)
Q(channel)
Q(ssid)
Q(bssid)
Q(bss)
Q(wps)
Q(auth)
Q(security)
Q(mac)
Q(wifi_up)
Q(connect)
Q(disconnect)
Q(rf)
Q(mac)
Q(scan)
Q(rssi)
Q(band)
Q(timeout)
Q(STA)
Q(AP)
Q(STA_AP)
Q(PROMISC)
Q(P2P)

Q(OPEN)
Q(WEP_PSK)
Q(WEP_SHARED)
Q(WPA_TKIP_PSK)
Q(WPA_AES_PSK)
Q(WPA2_AES_PSK)
Q(WPA2_TKIP_PSK)
Q(WPA2_MIXED_PSK)
Q(WPA_WPA2_MIXED)
Q(WPS_OPEN)
Q(WPS_SECURE)

// for usocket module
Q(socket)
Q(getaddrinfo)
Q(bind)
Q(listen)
Q(accept)
Q(connect)
Q(send)
Q(recv)
Q(sendto)
Q(recvfrom)
Q(setblocking)
Q(setsockopt)
Q(settimeout)
Q(close)
Q(domain)
Q(type)
Q(protocol)
Q(PF_INET)
Q(PF_UNSPEC)
Q(SOCK_STREAM)
Q(SOCK_DGRAM)
Q(SOCK_RAW)
Q(IPPROTO_IP)
Q(IPPROTO_TCP)
Q(IPPROTO_UDP)
Q(IPPROTO_UDPLITE)
Q(SO_DEBUG)
Q(SO_ACCEPTCONN)
Q(SO_REUSEADDR)
Q(SO_KEEPALIVE)
Q(SO_DONTROUTE)
Q(SO_BROADCAST)
Q(SO_USELOOPBACK)
Q(SO_LINGER)
Q(SO_OOBINLINE)
Q(SO_REUSEPORT)
Q(SO_DONTLINGER)
Q(SO_SNDBUF)
Q(SO_RCVBUF)
Q(SO_SNDLOWAT)
Q(SO_RCVLOWAT)
Q(SO_SNDTIMEO)
Q(SO_RCVTIMEO)
Q(SO_ERROR)
Q(SO_TYPE)
Q(SO_CONTIMEO)
Q(SO_NO_CHECK)

Q(MSG_PEEK)
Q(MSG_WAITALL)
Q(MSG_OOB)
Q(MSG_DONTWAIT)
Q(MSG_MORE)


// for Pin class
Q(Pin)
Q(board)
Q(value)
Q(toggle)
Q(id)
Q(dir)
Q(pull)
Q(IN)
Q(OUT)
Q(PULL_NONE)
Q(PULL_UP)
Q(PULL_DOWN)
Q(OPEN_DRAIN)

// for I2C class
Q(I2C)
Q(id)
Q(mode)
Q(reset)
Q(baudrate)
Q(pins)
Q(addr)
Q(nbytes)
Q(buf)
Q(stop)
Q(memaddr)
Q(addrsize)
Q(init)
Q(deinit)
Q(scan)
Q(readfrom)
Q(readfrom_into)
Q(writeto)
Q(readfrom_mem)
Q(readfrom_mem_into)
Q(writeto_mem)
Q(MASTER)
Q(SLAVE)

Q(network)
Q(ip)

// for dhcp 
Q(dhcp_request)
Q(dhcp_renew)
Q(dhcp_release)
Q(dhcp_inform)
Q(dhcp_state)
Q(dhcp_stop)

// for arp
Q(arp)
Q(table)

// for time module
Q(time)
Q(localtime)
Q(mktime)
Q(datetime)
Q(sleep)
Q(sleep_ms)
Q(sleep_us)