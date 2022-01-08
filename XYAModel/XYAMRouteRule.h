//
//  XYAMRouteRule.h
//  XYAModel
//
//  Created by 杨建祥 on 2022/1/8.
//

#import <OCFrame/OCFCore.h>

typedef NS_ENUM(NSInteger, XYAMRouteRuleType){
    XYAMRouteRuleTypeIP,
    XYAMRouteRuleTypeDomain,
    XYAMRouteRuleTypePort
};

@interface XYAMRouteRule : OCFModel
@property (nonatomic, assign, readonly) NSInteger gamearea;
@property (nonatomic, assign, readonly) XYAMRouteRuleType itype;
@property (nonatomic, strong, readonly) NSArray *blacklist;
@property (nonatomic, strong, readonly) NSArray *whitelist;
@property (nonatomic, strong, readonly) NSArray *greylist;
// 只读
@property (nonatomic, assign, readonly) NSInteger gameid;

@end
