//
//  BLCMediaTableViewCell.h
//  Blocstagram
//
//  Created by HILDA NG on 9/11/15.
//  Copyright (c) 2015 BLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BLCMedia;

@interface BLCMediaTableViewCell : UITableViewCell

@property (nonatomic, strong) BLCMedia *mediaItem;

//get media item
- (BLCMedia *)mediaItem;

//set new media item
- (void)setMediaItem:(BLCMedia *)mediaItem;

+ (CGFloat) heightForMediaItem:(BLCMedia *)mediaItem width:(CGFloat)width;
@end





@end
