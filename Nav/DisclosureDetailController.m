//
//  DisclosureDetailController.m
//  Nav
//
//  Created by Jeremy Jones on 12/30/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

#import "DisclosureDetailController.h"

@implementation DisclosureDetailController
@synthesize label;
@synthesize message;

- (void)viewWillAppear:(BOOL)animated
{
    label.text = message;
    [super viewWillAppear:animated];
}

- (void)viewDidUnload
{
    self.label = nil;
    self.message = nil;
    [super viewDidUnload];
}

- (void)dealloc
{
    //[label release];
    //[message release];
    //[super dealloc];
}

@end
