#ifndef _defaults_h_
#define _defaults_h_

#include #define SYS_SHELL		"/bin/sh"
#define SYS_EXEC_PATH		"/usr/sbin:/usr/bin:/sbin:/bin"
#define SYS_EXEC_PATH_OPT	"/opt/sbin:/opt/bin:/usr/sbin:/usr/bin:/sbin:/bin"
#define SYS_HOME_PATH_ROOT	"/home/admin"

#define SYS_USER_ROOT		"admin"
#define SYS_GROUP_ROOT		"root"
#define SYS_USER_NOBODY		"nobody"
#define SYS_GROUP_NOGROUP	"nogroup"

#define DEF_LAN_ADDR		"192.168.2.1"
#define DEF_LAN_DHCP_BEG	"192.168.2.2"
#define DEF_LAN_DHCP_END	"192.168.2.254"
#define DEF_LAN_MASK		"255.255.255.0"

#define DEF_WLAN_2G_CC		"CN"
#define DEF_WLAN_5G_CC		"CN"
#define DEF_WLAN_2G_SSID	"CR660x-2G"
#define DEF_WLAN_5G_SSID	"CR660x"
#define DEF_WLAN_2G_GSSID	"GUEST-2G"
#define DEF_WLAN_5G_GSSID	"GUEST-5G"
#define DEF_WLAN_2G_PSK		"1234567890"
#define DEF_WLAN_5G_PSK		"1234567890"

#define DEF_ROOT_PASSWORD	"admin"
#define DEF_SMB_WORKGROUP	"WORKGROUP"
#define DEF_TIMEZONE		"CST-8"
#define DEF_NTP_SERVER0		"ntp.ntsc.ac.cn"
#define DEF_NTP_SERVER1		"time.nist.gov"
#define DEF_HTTPS_CIPH_LIST	"DH+AESGCM:DH+AES256:DH+AES:DH+3DES:RSA+AES:RSA+3DES:!ADH:!MD5:!DSS"

#endif
