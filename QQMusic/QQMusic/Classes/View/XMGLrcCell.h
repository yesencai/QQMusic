//
//  XMGLrcCell.h
//  QQMusic
//
//  Created by xiaomage on 15/8/17.
//  Copyright (c) 2015年 小码哥. All rights reserved.
//

#import <UIKit/UIKit.h>
@class XMGLrcLabel;

@interface XMGLrcCell : UITableViewCell

@property (nonatomic, weak, readonly) XMGLrcLabel *lrcLabel;

+ (instancetype)lrcCellWithTableView:(UITableView *)tableView;

@end
