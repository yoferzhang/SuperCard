//
//  Card.m
//  Matchismo
//
//  Created by Lucifer Zhang on 5/14/15.
//  Copyright (c) 2015 LuciferZhang. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card

- (int)match:(NSArray *)otherCards {
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end
