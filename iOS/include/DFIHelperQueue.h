//
//  DFIHelperQueue.h
//  DFI
//
//  Created by vanney on 2017/3/8.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFIHelperQueue : NSObject

/*
 * 将对象加入队列尾部
 */
- (void)enqueue:(id)object;

/*
 * 返回队列首个对象
 */
- (id)dequeue;

@end
