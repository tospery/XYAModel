//
//  XYAMLineNode.h
//  XYAModel
//
//  Created by 杨建祥 on 2022/1/8.
//

#import <OCFrame/OCFCore.h>

@interface XYAMLineNode : OCFModel
@property (nonatomic, assign, readonly) NSInteger fLineCata;
@property (nonatomic, assign, readonly) NSInteger speed;
@property (nonatomic, assign, readonly) NSInteger loss;
@property (nonatomic, strong, readonly) NSString *speedip;
// 扩展
@property (nonatomic, assign) NSInteger delay;
// 只读
@property (nonatomic, assign, readonly) NSInteger fnodecata;

@end
