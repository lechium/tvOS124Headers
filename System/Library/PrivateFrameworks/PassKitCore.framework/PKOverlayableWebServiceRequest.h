/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKWebServiceRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface PKOverlayableWebServiceRequest : PKWebServiceRequest <NSSecureCoding> {

	NSMutableDictionary* _overlayParameters;
	NSMutableDictionary* _secureOverlayParameters;
	NSArray* _overridenKeys;
	BOOL _requiresConfigurationForRetry;
	BOOL _requiresConfigurationForRedirect;

}

@property (nonatomic,copy) NSDictionary * overlayParameters; 
@property (nonatomic,copy) NSDictionary * secureOverlayParameters; 
@property (assign,nonatomic) BOOL requiresConfigurationForRetry;                 //@synthesize requiresConfigurationForRetry=_requiresConfigurationForRetry - In the implementation block
@property (assign,nonatomic) BOOL requiresConfigurationForRedirect;              //@synthesize requiresConfigurationForRedirect=_requiresConfigurationForRedirect - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)overlayValueForKey:(id)arg1 ;
-(NSDictionary *)overlayParameters;
-(void)setOverlayParameters:(NSDictionary *)arg1 ;
-(void)setSecureOverlayValue:(id)arg1 forKey:(id)arg2 ;
-(id)secureOverlayValueForKey:(id)arg1 ;
-(NSDictionary *)secureOverlayParameters;
-(void)setSecureOverlayParameters:(NSDictionary *)arg1 ;
-(void)_applyOverlayToDictionary:(id)arg1 ;
-(void)_applySecureOverlayToDictionary:(id)arg1 ;
-(void)_setOverriddenKeys:(id)arg1 ;
-(void)_updateRequestForRedirect:(id)arg1 overrides:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)_updateRequestForRetry:(id)arg1 retryFields:(id)arg2 webService:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)hasOverlayParameters;
-(BOOL)requiresConfigurationForRetry;
-(void)setRequiresConfigurationForRetry:(BOOL)arg1 ;
-(BOOL)requiresConfigurationForRedirect;
-(void)setRequiresConfigurationForRedirect:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

