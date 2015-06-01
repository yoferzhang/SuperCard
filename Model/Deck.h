//
//  Deck.h
//  Matchismo
//
//  Created by Lucifer Zhang on 5/14/15.
//  Copyright (c) 2015 LuciferZhang. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;
@end
