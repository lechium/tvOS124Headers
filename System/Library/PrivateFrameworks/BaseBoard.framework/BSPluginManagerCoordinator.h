/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface BSPluginManagerCoordinator : NSObject {

	NSMutableDictionary* _managersByBundleID;

}
+(id)sharedInstance;
-(void)registerPluginsFromBundle:(id)arg1 ;
-(id)pluginManagerForBundle:(id)arg1 ;
-(void)registerPlugins;
-(id)mainPluginManager;
-(id)_init;
@end

