//
//  XYAModel.h
//  Pods
//
//  Created by 杨建祥 on 2022/1/8.
//

#define kVPNKeyWifi                                 (@"kVPNKeyWifi")
#define kVPNKeyDownloadOrUpdate                     (@"kVPNKeyDownloadOrUpdate")
#define kVPNKeyOSLowVersion                         (@"kVPNKeyOSLowVersion")
#define kVPNKeyTcpUdpInfo                           (@"kVPNKeyTcpUdpInfo")
#define kVPNKeyRouteRuleIP                          (@"kVPNKeyRouteRuleIP")
#define kVPNKeyRouteRuleDomain                      (@"kVPNKeyRouteRuleDomain")
#define kVPNKeyLineNodes                            (@"kVPNKeyLineNodes")
#define kVPNKeyAcceleration                         (@"kVPNKeyAcceleration")

#define kVPNKeyUsername                             (@"--username")
#define kVPNKeyPassword                             (@"--password")
#define kVPNKeyDNSGW                                (@"--dnsgw")
#define kVPNKeySocksServerAddr                      (@"--socks-server-addr")

#define kAppGroupIdentifier                         (@"group.com.xunyou.accelerator")
#define kWormholeOptionalDirectory                  (@"communication")

#define kLogMessage                                 (@"VPN-Log")
#define kErrorMessage                               (@"VPN-Error")
#define kProxyMessage                               (@"VPN-Proxy")
#define kP2PDataMessage                             (@"VPN-P2PData")
#define kGameServerDataMessage                      (@"VPN-GameServerData")

typedef NS_ENUM(NSInteger, VPNErrorCode){
    VPNErrorCodeMasterConnect = 50000,
    VPNErrorCodeMasterDisconnect,
    VPNErrorCodeMasterHello,
    VPNErrorCodeMasterAuthorize,
    VPNErrorCodeMasterSecondary,
    VPNErrorCodeMasterException,
    VPNErrorCodeMasterInterrupt,
    VPNErrorCodeMasterHeartbeat
};

#import "XYAMAcceleration.h"
#import "XYAMLineNode.h"
#import "XYAMRouteRule.h"
#import "XYAMTcpUdpInfo.h"
