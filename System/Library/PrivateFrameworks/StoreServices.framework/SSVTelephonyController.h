/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CoreTelephonyClientSuppServicesDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyClientRegistrationDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;

@interface SSVTelephonyController : NSObject <CoreTelephonyClientSuppServicesDelegate, CoreTelephonyClientDelegate, CoreTelephonyClientRegistrationDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSObject*<OS_dispatch_queue> _telephonyCallbackQueue;
	BOOL _hasTelephonyCapability;
	NSString* _phoneNumber;
	NSString* _operatorName;
	NSString* _registrationStatus;
	CoreTelephonyClient* _telephonyClient;
	CTXPCServiceSubscriptionContext* _telephonySubscriptionContext;

}

@property (nonatomic,copy,readonly) NSString * phoneNumber; 
@property (nonatomic,copy,readonly) NSString * operatorName; 
@property (nonatomic,copy,readonly) NSString * providerName; 
@property (nonatomic,copy,readonly) NSString * mobileSubscriberCountryCode; 
@property (nonatomic,copy,readonly) NSString * mobileSubscriberNetworkCode; 
@property (nonatomic,copy,readonly) NSString * registrationStatus; 
@property (nonatomic,copy,readonly) NSString * IMEI; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(NSString *)registrationStatus;
-(NSString *)phoneNumber;
-(NSString *)providerName;
-(id)_phoneNumber;
-(BOOL)_ensureTelephonyHandlesAreReady;
-(id)_operatorName;
-(id)_registrationStatus;
-(void)_updateRegistrationStatus;
-(void)_updateOperatorName;
-(void)_updatePhoneNumber;
-(id)_telephonyClient;
-(id)_telephonySubscriptionContext;
-(void)phoneNumberAvailable:(id)arg1 ;
-(void)phoneNumberChanged:(id)arg1 ;
-(void)subscriptionInfoDidChange;
-(void)operatorNameChanged:(id)arg1 name:(id)arg2 ;
-(void)displayStatusChanged:(id)arg1 status:(id)arg2 ;
-(NSString *)operatorName;
-(NSString *)mobileSubscriberCountryCode;
-(NSString *)mobileSubscriberNetworkCode;
-(NSString *)IMEI;
-(BOOL)sendSMSWithText:(id)arg1 toPhoneNumber:(id)arg2 countryCode:(id)arg3 ;
-(void)dealloc;
-(id)_init;
@end

