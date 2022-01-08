//
//  XYAMTcpUdpInfo.m
//  XYAModel
//
//  Created by liaoya on 2022/1/7.
//

#import "XYAMTcpUdpInfo.h"

@interface XYAMTcpUdpInfo ()
@property (nonatomic, assign, readwrite) NSInteger gameid;
@property (nonatomic, assign, readwrite) NSInteger areaid;
@property (nonatomic, assign, readwrite) NSInteger netmask;
@property (nonatomic, assign, readwrite) XYAMTcpUdpType protocol;
@property (nonatomic, strong, readwrite) NSString *port;

@end

@implementation XYAMTcpUdpInfo

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSDictionary *mapping = [NSDictionary mtl_identityPropertyMapWithModel:self];
    mapping = [mapping mtl_dictionaryByAddingEntriesFromDictionary:@{
        @"id": @"int_ip"
    }];
    return mapping;
}

@end

