/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, NSUserDefaults, NSMutableSet, NSMutableDictionary, NSObject;

@interface _REEngineDefaults : NSObject {

	NSString* _domain;
	NSUserDefaults* _defaults;
	NSMutableSet* _registeredPaths;
	NSMutableDictionary* _registeredBlocks;
	NSObject*<OS_dispatch_queue> _registrationQueue;

}
+(id)defaultsForEngine:(id)arg1 ;
+(id)globalDefaults;
-(void)_registerCallback:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(BOOL)_BOOLValueForKey:(id)arg1 set:(BOOL*)arg2 ;
-(long long)_NSIntegerValueForKey:(id)arg1 set:(BOOL*)arg2 ;
-(id)_idValueForKey:(id)arg1 set:(BOOL*)arg2 ;
-(id)_domainName;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithDomain:(id)arg1 ;
@end

