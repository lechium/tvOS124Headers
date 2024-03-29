/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLogging;
@class NSMutableSet, NSString;

@interface HMDNotificationRegistration : HMFObject <HMFLogging> {

	NSMutableSet* _registeredNotifications;
	id<HMFLogging> _registerer;

}

@property (nonatomic,readonly) NSMutableSet * registeredNotifications;              //@synthesize registeredNotifications=_registeredNotifications - In the implementation block
@property (nonatomic,__weak,readonly) id<HMFLogging> registerer;                    //@synthesize registerer=_registerer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)logIdentifier;
-(id)initWithRegisterer:(id)arg1 ;
-(void)addObserver:(SEL)arg1 name:(id)arg2 object:(id)arg3 ;
-(id<HMFLogging>)registerer;
-(NSMutableSet *)registeredNotifications;
@end

