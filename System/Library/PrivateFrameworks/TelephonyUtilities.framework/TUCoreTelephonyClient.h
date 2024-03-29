/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUTTYCoreTelephonyClient.h>
#import <libobjc.A.dylib/TUEmergencyCoreTelephonyClient.h>
#import <libobjc.A.dylib/TUCoreTelephonyClient.h>

@protocol TUCoreTelephonyClient <NSObject>
@end


@protocol OS_dispatch_queue;
@class NSObject, CoreTelephonyClient, NSString;

@interface TUCoreTelephonyClient : NSObject <TUTTYCoreTelephonyClient, TUEmergencyCoreTelephonyClient, TUCoreTelephonyClient> {

	NSObject*<OS_dispatch_queue> _queue;
	CoreTelephonyClient* _client;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) CoreTelephonyClient * client;                    //@synthesize client=_client - In the implementation block
-(BOOL)isRTTSupportedForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYEnabledForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSupportedForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYHardwareAvailableForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYHardwareEnabledForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYHardwareSupportedForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareAvailableForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareEnabledForSubscriptionUUID:(id)arg1 ;
-(BOOL)isTTYSoftwareSupportedForSubscriptionUUID:(id)arg1 ;
-(id)subscriptionForUUID:(id)arg1 ;
-(BOOL)isRTTSupportedForSubscription:(id)arg1 ;
-(BOOL)isTTYSoftwareEnabledForSubscription:(id)arg1 ;
-(BOOL)isTTYHardwareEnabledForSubscription:(id)arg1 ;
-(BOOL)isTTYEnabledForSubscription:(id)arg1 ;
-(BOOL)isTTYSupportedForSubscription:(id)arg1 ;
-(BOOL)isTTYHardwareAvailableForSubscription:(id)arg1 ;
-(BOOL)isTTYHardwareSupportedForSubscription:(id)arg1 ;
-(BOOL)isTTYSoftwareAvailableForSubscription:(id)arg1 ;
-(BOOL)isTTYSoftwareSupportedForSubscription:(id)arg1 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id*)arg3 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscription:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscription:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3 ;
-(BOOL)isWhitelistedEmergencyNumberForDigits:(id)arg1 subscriptionUUID:(id)arg2 error:(id*)arg3 ;
-(BOOL)shouldShowEmergencyCallbackModeAlertForSubscriptionUUID:(id)arg1 error:(id*)arg2 ;
-(CoreTelephonyClient *)client;
-(id)init;
-(id)initWithQueue:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end

