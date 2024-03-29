/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPPowerAssertionManagerDelegate;
#import <AppSupport/AppSupport-Structs.h>
@class NSString, NSCountedSet, NSMutableDictionary, NSMutableSet;

@interface CPPowerAssertionManager : NSObject {

	NSString* _uuid;
	NSCountedSet* _contexts;
	NSMutableDictionary* _groupIdentifierToContexts;
	CFDictionaryRef _contextToGroupIdentifier;
	NSMutableSet* _heldAsideGroupIdentifiers;
	NSCountedSet* _heldAsideContexts;
	id<CPPowerAssertionManagerDelegate> _delegate;

}

@property (readonly) NSString * uuid;                                         //@synthesize uuid=_uuid - In the implementation block
@property (assign) id<CPPowerAssertionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)retainPowerAssertionWithContext:(id)arg1 withGroupIdentifier:(id)arg2 ;
-(void)_retainAssertions;
-(void)_releaseAssertions;
-(unsigned long long)retainCountForContext:(id)arg1 ;
-(void)setUUIDPrefix:(id)arg1 ;
-(void)retainPowerAssertionWithContext:(id)arg1 ;
-(void)releasePowerAssertionWithContext:(id)arg1 ;
-(void)temporarilyReleasePowerAssertionsForGroupIdentifier:(id)arg1 ;
-(void)reretainPowerAssertionsForGroupIdentifier:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)uuid;
-(void)setDelegate:(id<CPPowerAssertionManagerDelegate>)arg1 ;
-(id<CPPowerAssertionManagerDelegate>)delegate;
@end

