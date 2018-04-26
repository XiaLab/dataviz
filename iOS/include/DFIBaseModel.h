//
//  DFIBaseModel.h
//  DFI
//
//  Created by vanney on 2017/6/13.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/***************************************************
 * D3 base model                                   *
 * in order to store data                          *
 ***************************************************/

#import <Foundation/Foundation.h>

@interface DFIBaseModel : NSObject

- (void)loadOriginalData:(NSDictionary *)data;
- (NSDictionary *)dfiDescription;

@end
