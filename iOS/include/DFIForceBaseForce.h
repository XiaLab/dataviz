//
//  DFIForceBaseForce.h
//  DFI
//
//  Created by vanney on 2017/2/11.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, DFIForceType) {
    DFIForceTypeLink = 0,
    DFIForceTypeManybody,
    DFIForceTypeCenter,
};

@interface DFIForceBaseForce : NSObject

- (instancetype)initWithNodes:(NSMutableArray *)nodes;
- (void)force:(float)alpha;

@end
