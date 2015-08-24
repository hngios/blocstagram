//
//  BLCMedia.h
//  Blocstagram
//
//  Created by HILDA NG on 8/24/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class BLCUser;

@interface BLCMedia : NSObject

@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) BLCUser *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

@end
