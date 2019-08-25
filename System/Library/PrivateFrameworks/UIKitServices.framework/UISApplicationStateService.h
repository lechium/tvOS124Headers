/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitServices/UIKitServices-Structs.h>
#import <UIKit/UISApplicationStateServerDelegate.h>

@protocol UISApplicationStateServiceDelegate;
@class UISApplicationStateServer, FBSSerialQueue, NSString;

@interface UISApplicationStateService : NSObject <UISApplicationStateServerDelegate> {

	UISApplicationStateServer* _server;
	id<UISApplicationStateServiceDelegate> _delegate;
	FBSSerialQueue* _calloutQueue;
	struct {
		unsigned delegateDataSourceForApplicationBundleIdentifier : 1;
	}  _delegateFlags;

}

@property (assign,nonatomic,__weak) id<UISApplicationStateServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCalloutQueue:(id)arg1 ;
-(void)setDelegate:(id<UISApplicationStateServiceDelegate>)arg1 ;
-(id<UISApplicationStateServiceDelegate>)delegate;
-(double)client:(id)arg1 getNextWakeIntervalSinceReferenceDateForApplication:(id)arg2 ;
-(void)client:(id)arg1 setNextWakeIntervalSinceReferenceDate:(double)arg2 forApplication:(id)arg3 ;
-(void)client:(id)arg1 setMinimumBackgroundFetchInterval:(double)arg2 forApplication:(id)arg3 ;
-(BOOL)client:(id)arg1 getUsesBackgroundNetworkForApplication:(id)arg2 ;
-(void)client:(id)arg1 setUsesBackgroundNetwork:(BOOL)arg2 forApplication:(id)arg3 ;
-(id)client:(id)arg1 getBadgeValueForApplication:(id)arg2 ;
-(void)client:(id)arg1 setBadgeValue:(id)arg2 forApplication:(id)arg3 ;
-(BOOL)_isClientAuthorized:(id)arg1 forApplicationBundleIdentifier:(id)arg2 ;
-(id)_dataSourceForApplicationBundleIdentifier:(id)arg1 ;
@end

