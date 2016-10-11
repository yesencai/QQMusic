//
//  XMGLrcline.h
//  QQMusic
//
//  Created by xiaomage on 15/8/17.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XMGLrcline : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) NSTimeInterval time;

- (instancetype)initWithLrclineString:(NSString *)lrclineString;
+ (instancetype)lrcLineWithLrclineString:(NSString *)lrclineString;

@end
