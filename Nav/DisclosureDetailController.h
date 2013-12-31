//
//  DisclosureDetailController.h
//  Nav
//
//  Created by Jeremy Jones on 12/30/2013.
//  Copyright (c) 2013 Jeremy Jones. All rights reserved.
//

//#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//@interface DisclosureDetailController : NSObject
@interface DisclosureDetailController : UIViewController
{
    UILabel *label;
    NSString *message;
}

@property (nonatomic, retain) IBOutlet UILabel *label;
@property (nonatomic, copy) NSString *message;
@end
