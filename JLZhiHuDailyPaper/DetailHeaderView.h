//
//  DetailHeaderView.h
//  JLZhiHuDailyPaper
//
//  Created by wanglong on 16/2/18.
//  Copyright © 2016年 Jimmy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailHeaderView : UIView

+ (DetailHeaderView *)attachObserveToScrollView:(UIScrollView *)scrollView target:(id)target action:(SEL)action;

@end
