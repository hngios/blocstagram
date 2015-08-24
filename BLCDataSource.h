//
//  BLCDataSource.h
//  Blocstagram
//
//  Created by HILDA NG on 8/24/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BLCDataSource : NSObject

+ (instancetype) sharedInstance;
@property (nonatomic, strong, readonly) NSArray *mediaItems;


@end
