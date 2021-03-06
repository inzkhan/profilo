/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_LINUX_L2TP_H_
#define _UAPI_LINUX_L2TP_H_
#include <museum/6.0.1/bionic/libc/linux/types.h>
#include <museum/6.0.1/bionic/libc/linux/socket.h>
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#include <museum/6.0.1/bionic/libc/netinet/in.h>
#define IPPROTO_L2TP 115
#define __SOCK_SIZE__ 16
struct sockaddr_l2tpip {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __kernel_sa_family_t l2tp_family;
  __be16 l2tp_unused;
  struct in_addr l2tp_addr;
  __u32 l2tp_conn_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  unsigned char __pad[sizeof(struct sockaddr) - sizeof(__kernel_sa_family_t) - sizeof(__be16) - sizeof(struct in_addr) - sizeof(__u32)];
};
struct sockaddr_l2tpip6 {
  __kernel_sa_family_t l2tp_family;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __be16 l2tp_unused;
  __be32 l2tp_flowinfo;
  struct in6_addr l2tp_addr;
  __u32 l2tp_scope_id;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __u32 l2tp_conn_id;
};
enum {
  L2TP_CMD_NOOP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_CMD_TUNNEL_CREATE,
  L2TP_CMD_TUNNEL_DELETE,
  L2TP_CMD_TUNNEL_MODIFY,
  L2TP_CMD_TUNNEL_GET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_CMD_SESSION_CREATE,
  L2TP_CMD_SESSION_DELETE,
  L2TP_CMD_SESSION_MODIFY,
  L2TP_CMD_SESSION_GET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __L2TP_CMD_MAX,
};
#define L2TP_CMD_MAX (__L2TP_CMD_MAX - 1)
enum {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_NONE,
  L2TP_ATTR_PW_TYPE,
  L2TP_ATTR_ENCAP_TYPE,
  L2TP_ATTR_OFFSET,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_DATA_SEQ,
  L2TP_ATTR_L2SPEC_TYPE,
  L2TP_ATTR_L2SPEC_LEN,
  L2TP_ATTR_PROTO_VERSION,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_IFNAME,
  L2TP_ATTR_CONN_ID,
  L2TP_ATTR_PEER_CONN_ID,
  L2TP_ATTR_SESSION_ID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_PEER_SESSION_ID,
  L2TP_ATTR_UDP_CSUM,
  L2TP_ATTR_VLAN_ID,
  L2TP_ATTR_COOKIE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_PEER_COOKIE,
  L2TP_ATTR_DEBUG,
  L2TP_ATTR_RECV_SEQ,
  L2TP_ATTR_SEND_SEQ,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_LNS_MODE,
  L2TP_ATTR_USING_IPSEC,
  L2TP_ATTR_RECV_TIMEOUT,
  L2TP_ATTR_FD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_IP_SADDR,
  L2TP_ATTR_IP_DADDR,
  L2TP_ATTR_UDP_SPORT,
  L2TP_ATTR_UDP_DPORT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_MTU,
  L2TP_ATTR_MRU,
  L2TP_ATTR_STATS,
  L2TP_ATTR_IP6_SADDR,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_IP6_DADDR,
  L2TP_ATTR_UDP_ZERO_CSUM6_TX,
  L2TP_ATTR_UDP_ZERO_CSUM6_RX,
  __L2TP_ATTR_MAX,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define L2TP_ATTR_MAX (__L2TP_ATTR_MAX - 1)
enum {
  L2TP_ATTR_STATS_NONE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_TX_PACKETS,
  L2TP_ATTR_TX_BYTES,
  L2TP_ATTR_TX_ERRORS,
  L2TP_ATTR_RX_PACKETS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_ATTR_RX_BYTES,
  L2TP_ATTR_RX_SEQ_DISCARDS,
  L2TP_ATTR_RX_OOS_PACKETS,
  L2TP_ATTR_RX_ERRORS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  __L2TP_ATTR_STATS_MAX,
};
#define L2TP_ATTR_STATS_MAX (__L2TP_ATTR_STATS_MAX - 1)
enum l2tp_pwtype {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_PWTYPE_NONE = 0x0000,
  L2TP_PWTYPE_ETH_VLAN = 0x0004,
  L2TP_PWTYPE_ETH = 0x0005,
  L2TP_PWTYPE_PPP = 0x0007,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  L2TP_PWTYPE_PPP_AC = 0x0008,
  L2TP_PWTYPE_IP = 0x000b,
  __L2TP_PWTYPE_MAX
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum l2tp_l2spec_type {
  L2TP_L2SPECTYPE_NONE,
  L2TP_L2SPECTYPE_DEFAULT,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum l2tp_encap_type {
  L2TP_ENCAPTYPE_UDP,
  L2TP_ENCAPTYPE_IP,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum l2tp_seqmode {
  L2TP_SEQ_NONE = 0,
  L2TP_SEQ_IP = 1,
  L2TP_SEQ_ALL = 2,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
#define L2TP_GENL_NAME "l2tp"
#define L2TP_GENL_VERSION 0x1
#endif
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
