//
//  LoginController.h
//  JLZhiHuDailyPaper
//
//  Created by wanglong on 16/2/19.
//  Copyright © 2016年 Jimmy. All rights reserved.
//  登录视图控制器

#import <UIKit/UIKit.h>

@protocol LoginControllerDelegate <NSObject>

@optional

- (void)updateAccount;

@end

@interface LoginController : UIViewController

@property (nonatomic, weak) id <LoginControllerDelegate> delegate;

@end
