//
//  DFIArray.h
//  DFI
//
//  Created by vanney on 2017/5/2.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Array                                  *
 * some function about array                 *
 *********************************************/

#import <Foundation/Foundation.h>

@interface DFIArray : NSObject

/**
 * 还不知道想干啥的array的一个函数
 * @param start 起始位置，一般设成0
 * @param stop  结束位置的后一个位置，有点类似与C++中的end
 * @param step  步进，一般设成1
 * @return
 */
+ (NSMutableArray *)rangeWithStart:(int)start stop:(int)stop andStep:(int)step;

@end
