//
//  DFIHelperJSON.h
//  DFI
//
//  Created by vanney on 2017/2/12.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFIHelperJSON : NSObject

/*
 * 返回数组
 */
+ (NSMutableArray *)readJSONArrayFromFile:(NSString *)filename;

/*
 * 返回字典， 比较实质
 */
+ (NSMutableDictionary *)readJSONDictFromFile:(NSString *)filename;

@end
