/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:24 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSSet, NSString, NSURL;

@interface PKPaymentMarketsConfiguration : NSObject <NSSecureCoding> {

	NSSet* _markets;
	NSString* _version;
	NSURL* _url;

}

@property (copy,readonly) NSSet * markets;                 //@synthesize markets=_markets - In the implementation block
@property (copy,readonly) NSString * version;              //@synthesize version=_version - In the implementation block
@property (copy,readonly) NSURL * url;                     //@synthesize url=_url - In the implementation block
+(void)paymentMarketsConfigurationWithURL:(id)arg1 forDeviceClass:(id)arg2 version:(id)arg3 completion:(/*^block*/id)arg4 ;
+(BOOL)supportsSecureCoding;
-(id)initWithDictionary:(id)arg1 url:(id)arg2 forDeviceClass:(id)arg3 version:(id)arg4 ;
-(id)marketsForLocation:(id)arg1 ;
-(id)marketsForLocation:(id)arg1 ofType:(long long)arg2 ;
-(id)closestMarketForLocation:(id)arg1 ;
-(id)marketsForRegions:(id)arg1 ;
-(id)supportedCredentialTypesForLocation:(id)arg1 ;
-(id)expressCredentialTypesForLocation:(id)arg1 ;
-(id)supportedTransitNetworksForLocation:(id)arg1 ;
-(id)expressTransitNetworksForLocation:(id)arg1 ;
-(NSSet *)markets;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(NSURL *)url;
@end

