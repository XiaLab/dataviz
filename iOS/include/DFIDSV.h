//
//  DFIDSV.h
//  DFI
//
//  Created by vanney on 2017/2/22.
//  Copyright © 2017年 vanney9. All rights reserved.
//

// According to d3-dsv, parse file like csv

#import <Foundation/Foundation.h>
#import "DFIDSVParseResult.h"

@protocol DFIDSVDelegate;


@interface DFIDSV : NSObject

@property(nonatomic, weak) id <DFIDSVDelegate> delegate;
// TODO - restrict result to read only
@property (nonatomic, strong) DFIDSVParseResult *result;

- (instancetype)initWithDelimiter:(NSString *)delimiter;

- (void)parseWithText:(NSString *)text;
- (void)parseWithTextFileName:(NSString *)fileName andFileSuffix:(NSString *)suffix;
- (NSMutableArray *)parseRowsWithText:(NSString *)text;
- (void)format;
- (void)formatValues;

@end

@protocol DFIDSVDelegate <NSObject>
@optional
//- (void)parse
@end
