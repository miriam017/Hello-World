//
//  HellowWorldAppDelegate.h
//  HellowWorld
//
//  Created by App on 2011/9/26.
//  Copyright 2011年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class HellowWorldViewController;

@interface HellowWorldAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet HellowWorldViewController *viewController;

@end
