//
//  XYAMTcpUdpInfo.h
//  XYAModel
//
//  Created by liaoya on 2022/1/7.
//

#import <OCFrame/OCFCore.h>

typedef NS_ENUM(NSInteger, XYAMTcpUdpType){
    XYAMTcpUdpTypeUnknown,
    XYAMTcpUdpTypeTCP,
    XYAMTcpUdpTypeUDP
};

@interface XYAMTcpUdpInfo : OCFModel
@property (nonatomic, assign, readonly) NSInteger gameid;
@property (nonatomic, assign, readonly) NSInteger areaid;
@property (nonatomic, assign, readonly) NSInteger netmask;
@property (nonatomic, assign, readonly) XYAMTcpUdpType protocol;
@property (nonatomic, strong, readonly) NSString *port;

@end

