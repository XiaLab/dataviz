//
//  DFIHelperStack.h
//  DFI
//
//  Created by vanney on 2017/2/10.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFIHelperStack : NSObject

@property (nonatomic, strong) NSMutableArray *contents;

- (void)push:(id)object;
- (id)pop;

- (int)length;

@end
