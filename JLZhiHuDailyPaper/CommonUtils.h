//
//  CommonUtils.h
//  JLZhiHuDailyPaper
//
//  Created by wanglong on 16/2/17.
//  Copyright © 2016年 Jimmy. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Common.h"
#import "UIView+Extension.h"
#import "HttpTool.h"

@interface CommonUtils : NSObject

+ (UILabel *)createLabelWithText:(NSString *)string frame:(CGRect)frame;

+ (UITextView *)createTextViewWithText:(NSString *)string frame:(CGRect)frame;

+ (UITextField *)createTextFieldWithText:(NSString *)string frame:(CGRect)frame;

+ (UIButton *)createButtonWithText:(NSString *)string frame:(CGRect)frame;

@end
