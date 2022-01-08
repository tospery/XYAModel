//
//  XYAMLineNode.m
//  XYAModel
//
//  Created by 杨建祥 on 2022/1/8.
//

#import "XYAMLineNode.h"

@interface XYAMLineNode ()
@property (nonatomic, assign, readwrite) NSInteger fLineCata;
@property (nonatomic, assign, readwrite) NSInteger speed;
@property (nonatomic, assign, readwrite) NSInteger loss;
@property (nonatomic, strong, readwrite) NSString *speedip;

@end

@implementation XYAMLineNode

- (NSInteger)fnodecata {
    return self.id.integerValue;
}

+ (NSDictionary *)JSONKeyPathsByPropertyKey {
    NSDictionary *mapping = [NSDictionary mtl_identityPropertyMapWithModel:self];
    mapping = [mapping mtl_dictionaryByAddingEntriesFromDictionary:@{
        @"id": @"fnodecata"
    }];
    return mapping;
}

@end

