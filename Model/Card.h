//
//  Card.h
//  Matchismo
//
//  Created by Lucifer Zhang on 5/14/15.
//  Copyright (c) 2015 LuciferZhang. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL mateched;

- (int)match:(NSArray *)otherCards;
@end
