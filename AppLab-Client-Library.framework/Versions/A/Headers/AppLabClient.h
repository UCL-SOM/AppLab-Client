//
//  AppLabClient.h
//  AppLabClient
//
//  Created by Niall Roche on 30/08/2014.
//  Copyright (c) 2014 UCL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/**
 This library is used to control and interact with apps Distributed from App Lab. The primary purpose is to disable an app from functioning if necessary.
 The library also provides a test mechanism from a particular testing app that can test if the library is in place and correctly functioning.

 A secondary use of this library is to allow interaction with App Lab for other services such as integration with the Digital Test Bed
 */

@interface AppLabClient : NSObject <UIAlertViewDelegate>

/**
 this method called when the app launches and checks if the app has been disabled
 the return type is not used at present, but could be useful in the future
 */
+(BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

/**
 this method is called if an app needs to be disabled, or during testing
 the return type is not used at present, but could be useful in the future
 */
+(BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

@end
