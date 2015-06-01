//
//  PlayingCardView.h
//  SuperCard
//
//  Created by Lucifer Zhang on 5/31/15.
//  Copyright (c) 2015 LuciferZhang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PlayingCardView : UIView

@property (nonatomic) NSUInteger rank;
@property (nonatomic, strong) NSString *suit;
@property (nonatomic) BOOL faceUp;

@end
