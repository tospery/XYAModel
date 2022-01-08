//
//  XYAMAcceleration.h
//  XYAModel
//
//  Created by 杨建祥 on 2022/1/8.
//

#import <OCFrame/OCFCore.h>

@interface XYAMAcceleration : OCFModel
@property (nonatomic, assign, readonly) NSInteger logState;
@property (nonatomic, assign, readonly) NSInteger chargeType;
@property (nonatomic, assign, readonly) NSInteger hasTime;
@property (nonatomic, assign, readonly) NSInteger userType;
@property (nonatomic, assign, readonly) NSInteger userVipType;
@property (nonatomic, assign, readonly) NSInteger activeMinutes;
@property (nonatomic, assign, readonly) NSInteger bVerifyBySp;
@property (nonatomic, assign, readonly) NSInteger bxxServicetype;
@property (nonatomic, assign, readonly) NSInteger bxxFreeDays;
@property (nonatomic, assign, readonly) NSInteger lspversion;
@property (nonatomic, assign, readonly) NSInteger pseudoacceleration;
@property (nonatomic, assign, readonly) NSInteger vpnPassword;
@property (nonatomic, strong, readonly) NSString *ip;
@property (nonatomic, strong, readonly) NSString *code;
@property (nonatomic, strong, readonly) NSString *userInfo;
@property (nonatomic, strong, readonly) NSString *userLastIP;
@property (nonatomic, strong, readonly) NSString *vpnIp;
@property (nonatomic, strong, readonly) NSString *addrList;
@property (nonatomic, strong, readonly) NSString *userName;
@property (nonatomic, strong, readonly) NSString *userCata;
@property (nonatomic, strong, readonly) NSString *serverType;
@property (nonatomic, strong, readonly) NSString *serverCode;
@property (nonatomic, strong, readonly) NSString *tip;
@property (nonatomic, strong, readonly) NSString *spID;
@property (nonatomic, strong, readonly) NSString *bxxParamTime;
@property (nonatomic, strong, readonly) NSString *userid;
@property (nonatomic, strong, readonly) NSString *specver;
@property (nonatomic, strong, readonly) NSString *specveradv;
@property (nonatomic, strong, readonly) NSString *specoversea;
@property (nonatomic, strong, readonly) NSString *qqVipVersionStr;

@end
