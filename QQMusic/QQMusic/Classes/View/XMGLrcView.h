//
//  XMGLrcView.h
//  QQMusic
//
//  Created by xiaomage on 15/8/17.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XMGLrcLabel;

@interface XMGLrcView : UIScrollView

@property (nonatomic, copy) NSString *lrcName;

/** 当前播放的时间 */
@property (nonatomic, assign) NSTimeInterval currentTime;

/** 外面歌词的Label */
@property (nonatomic, weak) XMGLrcLabel *lrcLabel;

/** 当前歌曲的总时长 */
@property (nonatomic, assign) NSTimeInterval duration;

@end
