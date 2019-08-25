/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RESingleton.h>
#import <libobjc.A.dylib/LSApplicationWorkspaceObserverProtocol.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, REKeyValueMap, NSString;

@interface _REApplicationCache : RESingleton <LSApplicationWorkspaceObserverProtocol> {

	NSMutableDictionary* _restrictedApps;
	NSMutableDictionary* _removedApps;
	NSMutableDictionary* _applicationTypes;
	NSMutableDictionary* _watchKitExtensions;
	NSObject*<OS_dispatch_queue> _queue;
	REKeyValueMap* _remoteApplicationsMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)applicationsDidInstall:(id)arg1 ;
-(void)applicationsDidUninstall:(id)arg1 ;
-(void)applicationStateDidChange:(id)arg1 ;
-(BOOL)_queue_applicationIsRemoved:(id)arg1 ;
-(void)_queue_loadStateForBundleID:(id)arg1 ;
-(BOOL)_queue_applicationIsRestricted:(id)arg1 ;
-(void)_accessRemoteApplicationsMapWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_loadApplicationWorkspace:(/*^block*/id)arg1 ;
-(void)_queue_loadApplicationTypes;
-(void)_applicationsDidChange:(id)arg1 ;
-(BOOL)applicationIsRemoved:(id)arg1 ;
-(BOOL)applicationIsRestricted:(id)arg1 ;
-(BOOL)applicationIsRemote:(id)arg1 ;
-(id)localApplicationForRemoteApplication:(NSString*)arg1 ;
-(id)remoteApplicationForLocalApplication:(NSString*)arg1 ;
-(id)watchKitExtensionForApplication:(id)arg1 ;
-(unsigned long long)typeForApplication:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end
