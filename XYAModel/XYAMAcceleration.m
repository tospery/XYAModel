//
//  XYAMAcceleration.m
//  XYAModel
//
//  Created by 杨建祥 on 2022/1/8.
//

#import "XYAMAcceleration.h"

@interface XYAMAcceleration ()
@property (nonatomic, assign, readwrite) NSInteger logState;
@property (nonatomic, assign, readwrite) NSInteger chargeType;
@property (nonatomic, assign, readwrite) NSInteger hasTime;
@property (nonatomic, assign, readwrite) NSInteger userType;
@property (nonatomic, assign, readwrite) NSInteger userVipType;
@property (nonatomic, assign, readwrite) NSInteger activeMinutes;
@property (nonatomic, assign, readwrite) NSInteger bVerifyBySp;
@property (nonatomic, assign, readwrite) NSInteger bxxServicetype;
@property (nonatomic, assign, readwrite) NSInteger bxxFreeDays;
@property (nonatomic, assign, readwrite) NSInteger lspversion;
@property (nonatomic, assign, readwrite) NSInteger pseudoacceleration;
@property (nonatomic, assign, readwrite) NSInteger vpnPassword;
@property (nonatomic, strong, readwrite) NSString *ip;
@property (nonatomic, strong, readwrite) NSString *code;
@property (nonatomic, strong, readwrite) NSString *userInfo;
@property (nonatomic, strong, readwrite) NSString *userLastIP;
@property (nonatomic, strong, readwrite) NSString *vpnIp;
@property (nonatomic, strong, readwrite) NSString *addrList;
@property (nonatomic, strong, readwrite) NSString *userName;
@property (nonatomic, strong, readwrite) NSString *userCata;
@property (nonatomic, strong, readwrite) NSString *serverType;
@property (nonatomic, strong, readwrite) NSString *serverCode;
@property (nonatomic, strong, readwrite) NSString *tip;
@property (nonatomic, strong, readwrite) NSString *spID;
@property (nonatomic, strong, readwrite) NSString *bxxParamTime;
@property (nonatomic, strong, readwrite) NSString *userid;
@property (nonatomic, strong, readwrite) NSString *specver;
@property (nonatomic, strong, readwrite) NSString *specveradv;
@property (nonatomic, strong, readwrite) NSString *specoversea;
@property (nonatomic, strong, readwrite) NSString *qqVipVersionStr;

@end

@implementation XYAMAcceleration

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    return [NSDictionary mtl_identityPropertyMapWithModel:self];
}

@end
