/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMFoundation/IMFoundation-Structs.h>
#import <IMFoundation/IMUserDefaults.h>

@protocol IMUserDefaults <NSObject>
@required
-(void)setValue:(void*)arg1 forKey:(id)arg2 applicationID:(CFStringRef)arg3 userName:(CFStringRef)arg4 hostName:(CFStringRef)arg5;
-(void)setMultiple:(id)arg1 remove:(id)arg2 applicationID:(CFStringRef)arg3 userName:(CFStringRef)arg4 hostName:(CFStringRef)arg5;
-(void)synchronizeApplicationID:(CFStringRef)arg1 userName:(CFStringRef)arg2 hostName:(CFStringRef)arg3;
-(id)copyKeyListForApplicationID:(CFStringRef)arg1 userName:(CFStringRef)arg2 hostName:(CFStringRef)arg3;
-(id)copyMultipleForCurrentKeys:(id)arg1 applicationID:(CFStringRef)arg2 userName:(CFStringRef)arg3 hostName:(CFStringRef)arg4;
-(id)copyValueForKey:(id)arg1 applicationID:(CFStringRef)arg2 userName:(CFStringRef)arg3 hostName:(CFStringRef)arg4;
-(BOOL)appBoolByHostForKey:(id)arg1;
-(void)setAppBool:(BOOL)arg1 byHostForKey:(id)arg2;
-(BOOL)appBoolForKey:(id)arg1;
-(void)setAppBool:(BOOL)arg1 forKey:(id)arg2;
-(void)setValue:(void*)arg1 forKey:(id)arg2 appID:(id)arg3;
-(void)setMultiple:(id)arg1 remove:(id)arg2 appID:(id)arg3;
-(void)synchronizeAppID:(id)arg1;
-(id)copyKeyListForAppID:(id)arg1;
-(id)copyMultipleForCurrentKeys:(id)arg1 appID:(id)arg2;
-(id)copyValueForKey:(id)arg1 appID:(id)arg2;
-(void)setAppValue:(id)arg1 forKey:(id)arg2;
-(id)appValueForKey:(id)arg1;
-(void)removeAppValueForKey:(id)arg1;

@end


@class NSString;

@interface IMUserDefaults : NSObject <IMUserDefaults>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setEnableEngram:(BOOL)arg1 ;
+(void)setPhoneNumberValidationMode:(long long)arg1 ;
+(long long)phoneNumberValidationMode;
+(void)setPhoneNumberValidationPreflightTestData:(id)arg1 ;
+(id)phoneNumberValidationPreflightTestData;
+(BOOL)isPiscoDisabled;
+(BOOL)isAbsintheV4Enabled;
+(BOOL)isBAACertDisabled;
+(BOOL)isDeviceScoringEnabled;
+(BOOL)isDebugPiscoLoggingEnabled;
+(void)setEnableLiveDeliveryWarmUp:(BOOL)arg1 ;
+(BOOL)isLiveDeliveryWarmUpEnabled;
+(id)sharedDefaults;
+(BOOL)isEngramEnabled;
-(void)setValue:(void*)arg1 forKey:(id)arg2 applicationID:(CFStringRef)arg3 userName:(CFStringRef)arg4 hostName:(CFStringRef)arg5 ;
-(void)setMultiple:(id)arg1 remove:(id)arg2 applicationID:(CFStringRef)arg3 userName:(CFStringRef)arg4 hostName:(CFStringRef)arg5 ;
-(void)synchronizeApplicationID:(CFStringRef)arg1 userName:(CFStringRef)arg2 hostName:(CFStringRef)arg3 ;
-(id)copyKeyListForApplicationID:(CFStringRef)arg1 userName:(CFStringRef)arg2 hostName:(CFStringRef)arg3 ;
-(id)copyMultipleForCurrentKeys:(id)arg1 applicationID:(CFStringRef)arg2 userName:(CFStringRef)arg3 hostName:(CFStringRef)arg4 ;
-(id)copyValueForKey:(id)arg1 applicationID:(CFStringRef)arg2 userName:(CFStringRef)arg3 hostName:(CFStringRef)arg4 ;
-(BOOL)appBoolByHostForKey:(id)arg1 ;
-(void)setAppBool:(BOOL)arg1 byHostForKey:(id)arg2 ;
-(BOOL)appBoolForKey:(id)arg1 ;
-(void)setAppBool:(BOOL)arg1 forKey:(id)arg2 ;
-(void)setValue:(void*)arg1 forKey:(id)arg2 appID:(id)arg3 ;
-(void)setMultiple:(id)arg1 remove:(id)arg2 appID:(id)arg3 ;
-(void)synchronizeAppID:(id)arg1 ;
-(id)copyKeyListForAppID:(id)arg1 ;
-(id)copyMultipleForCurrentKeys:(id)arg1 appID:(id)arg2 ;
-(id)copyValueForKey:(id)arg1 appID:(id)arg2 ;
-(void)setAppValue:(id)arg1 forKey:(id)arg2 ;
-(id)appValueForKey:(id)arg1 ;
-(void)removeAppValueForKey:(id)arg1 ;
@end

