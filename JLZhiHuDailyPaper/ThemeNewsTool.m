//
//  ThemeNewsTool.m
//  JLZhiHuDailyPaper
//
//  Created by Jimmy on 16/2/17.
//  Copyright © 2016年 Jimmy. All rights reserved.
//

#import "ThemeNewsTool.h"
#import "MJExtension.h"

@interface ThemeNewsTool ()

@property (nonatomic, strong) NSArray *newsIds;

@end

@implementation ThemeNewsTool

- (void)getThemeNewsWithId:(NSNumber *)Id SuccessfulBlock:(SuccessfulBlock)block{

    NSString *str = [NSString stringWithFormat:@"http://news-at.zhihu.com/api/4/theme/%@",Id];
    
    

}

@end
