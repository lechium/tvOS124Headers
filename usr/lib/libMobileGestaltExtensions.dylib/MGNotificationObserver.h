/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libMobileGestaltExtensions.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libMobileGestaltExtensions.dylib/libMobileGestaltExtensions.dylib-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MCProfileConnectionObserver.h>

@class NSMutableSet, NSString;

@interface MGNotificationObserver : NSObject <NSCopying, MCProfileConnectionObserver> {

	NSMutableSet* _blocks;
	int _type;
	NSString* _argument;
	SCD_Union_MG6* _registration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2 ;
-(void)invokeBlocks;
-(void)startDynaStoreMonitoringWithArgument:(id)arg1 ;
-(void)_cancelRegistration;
-(id)initWithType:(int)arg1 argument:(id)arg2 ;
-(void)_addBlock:(/*^block*/id)arg1 ;
-(void)_removeBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

