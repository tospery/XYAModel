//
//  XYAMRouteRule.m
//  XYAModel
//
//  Created by 杨建祥 on 2022/1/8.
//

#import "XYAMRouteRule.h"

@interface XYAMRouteRule ()
@property (nonatomic, assign, readwrite) NSInteger gamearea;
@property (nonatomic, assign, readwrite) XYAMRouteRuleType itype;
@property (nonatomic, strong, readwrite) NSArray *blacklist;
@property (nonatomic, strong, readwrite) NSArray *whitelist;
@property (nonatomic, strong, readwrite) NSArray *greylist;

@end

@implementation XYAMRouteRule

- (NSInteger)gameid {
    return self.id.integerValue;
}

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSDictionary *mapping = [NSDictionary mtl_identityPropertyMapWithModel:self];
    mapping = [mapping mtl_dictionaryByAddingEntriesFromDictionary:@{
        @"id": @"gameid"
    }];
    return mapping;
}

@end
