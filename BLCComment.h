//
//  BLCComment.h
//  Blocstagram
//
//  Created by HILDA NG on 8/24/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCComment : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *from;
@property (nonatomic, strong) NSString *text;

@end
