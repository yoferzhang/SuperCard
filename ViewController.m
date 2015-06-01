//
//  ViewController.m
//  SuperCard
//
//  Created by Lucifer Zhang on 5/30/15.
//  Copyright (c) 2015 LuciferZhang. All rights reserved.
//

#import "ViewController.h"
#import "PlayingCardView.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet PlayingCardView *playingCardView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    self.playingCardView.suit = @"♥️";
    self.playingCardView.rank = 13;
}


@end
