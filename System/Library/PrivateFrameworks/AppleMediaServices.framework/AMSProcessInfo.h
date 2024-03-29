/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSData;

@interface AMSProcessInfo : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	NSString* _partnerHeader;
	NSData* _auditTokenData;
	NSString* _bundleIdentifier;
	NSString* _clientVersion;
	NSString* _proxyAppBundleID;

}

@property (nonatomic,retain) NSData * auditTokenData;                  //@synthesize auditTokenData=_auditTokenData - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * clientVersion;                 //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,retain) NSString * partnerHeader; 
@property (nonatomic,retain) NSString * proxyAppBundleID;              //@synthesize proxyAppBundleID=_proxyAppBundleID - In the implementation block
+(id)valueForEntitlement:(id)arg1 ;
+(id)currentProcess;
+(BOOL)isBuddyRunning;
+(BOOL)boolForEntitlement:(id)arg1 ;
+(BOOL)boolForMachLookupAccess:(id)arg1 ;
+(id)stringForEntitlement:(id)arg1 ;
-(void)setClientVersion:(NSString *)arg1 ;
-(NSString *)clientVersion;
-(id)generateConfigurationFromBagContract:(id)arg1 ;
-(NSData *)auditTokenData;
-(NSString *)partnerHeader;
-(void)setPartnerHeader:(NSString *)arg1 ;
-(id)generateConfiguration;
-(void)setAuditTokenData:(NSData *)arg1 ;
-(NSString *)proxyAppBundleID;
-(void)setProxyAppBundleID:(NSString *)arg1 ;
-(id)init;
-(NSString *)bundleIdentifier;
-(id)initWithBundleIdentifier:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

