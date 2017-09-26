//
//  HybridBridge.h
//  HybridScreensDemoProjectHybridScreensAppIphone
//
//  Created by Nethrah on 9/26/17.
//


#import <Cordova/CDV.h>

@interface HybridBridge : CDVPlugin

-(void)reportEvent:(NSDictionary*)eventData;

@end
