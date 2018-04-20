//
//  DFIScaleLiner.h
//  DFI
//
//  Created by vanney on 2017/6/21.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/***************************************************
 * D3 Scale Liner                                  *
 * For Liner                                       *
 ***************************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DFIScaleLiner : NSObject
@property (nonatomic, strong) NSString *liner;
@property (nonatomic, assign) CGFloat xRadius;

- (void)scaleMakeLiner;

- (void)niceWithCount:(int)count;

@end
