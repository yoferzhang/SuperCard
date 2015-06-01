//
//  PlayingCard.h
//  Matchismo
//
//  Created by Lucifer Zhang on 5/14/15.
//  Copyright (c) 2015 LuciferZhang. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (nonatomic, strong) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSInteger)maxRank;
@end
