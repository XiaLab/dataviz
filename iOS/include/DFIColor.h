//
//  DFIColor.h
//  DFI
//
//  Created by vanney on 2017/5/5.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Color                                  *
 * D3 color 主文件                            *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

static const CGFloat DFIColorDarker = 0.7f;
static const CGFloat DFIColorBrighter = 1 / DFIColorDarker;

@interface DFIColor : NSObject

@property (nonatomic, assign) CGFloat r;
@property (nonatomic, assign) CGFloat g;
@property (nonatomic, assign) CGFloat b;
@property (nonatomic, assign) CGFloat opacity;

+ (DFIColor *)colorWithFormat:(NSString *)format;

- (DFIColor *)brighterWithK:(CGFloat)k;
- (DFIColor *)darkerWithK:(CGFloat)k;
- (UIColor *)toUIColor;
- (NSString *)toString;

@end
