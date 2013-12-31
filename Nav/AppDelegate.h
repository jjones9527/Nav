//
//  AppDelegate.h
//  Nav
//
//  Created by Jeremy Jones on 12/28/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

{
    UINavigationController *navController;
}

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navController;

@end
