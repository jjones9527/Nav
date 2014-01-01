//
//  CheckListController.h
//  Nav
//
//  Created by Jeremy Jones on 12/31/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "SecondLevelViewController.h"

//@interface CheckListController : NSObject

@interface CheckListController : SecondLevelViewController
{
    NSArray *list;
    NSIndexPath *lastIndexPath;
}

@property (nonatomic, retain) NSArray *list;
@property (nonatomic, retain) NSIndexPath *lastIndexPath;

@end
