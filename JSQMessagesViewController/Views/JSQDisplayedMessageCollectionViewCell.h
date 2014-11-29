//
//  JSQDisplayedMessageCollectionViewCell.h
//  JSQMessages
//
//  Created by Dylan Bourgeois on 29/11/14.
//  Copyright (c) 2014 Hexed Bits. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "JSQMessagesLabel.h"

#define kDisplayedMessageCellHeight 20.0f
#define kDisplayedMessageCellWidth 200.0f

@interface JSQDisplayedMessageCollectionViewCell : UICollectionViewCell

@property (weak, nonatomic, readonly) JSQMessagesLabel * cellLabel;

#pragma mark - Class methods

+ (UINib *) nib;

+ (NSString *) cellReuseIdentifier;

@end
