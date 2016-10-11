//
//  XMGLrcLabel.m
//  QQMusic
//
//  Created by xiaomage on 15/8/17.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import "XMGLrcLabel.h"

@implementation XMGLrcLabel

- (void)setProgress:(CGFloat)progress
{
    _progress = progress;
    
    [self setNeedsDisplay];
}

- (void)drawRect:(CGRect)rect {
    [super drawRect:rect];
    
    // 1.获取需要画的区域
    CGRect fillRect = CGRectMake(0, 0, self.bounds.size.width * self.progress, self.bounds.size.height);
    
    // 2.设置颜色
    [[UIColor redColor] set];
    
    // 3.添加区域
    UIRectFillUsingBlendMode(fillRect, kCGBlendModeSourceIn);
}


@end
