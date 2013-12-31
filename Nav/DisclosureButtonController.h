//
//  DisclosureButtonController.h
//  Nav
//
//  Created by Jeremy Jones on 12/30/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SecondLevelViewController.h"

@class DisclosureDetailController;

//@interface DisclosureButtonController : NSObject
@interface DisclosureButtonController : SecondLevelViewController
{
    NSArray *list;
    DisclosureDetailController *childController;
}

@property (nonatomic, retain) NSArray *list;

@end
