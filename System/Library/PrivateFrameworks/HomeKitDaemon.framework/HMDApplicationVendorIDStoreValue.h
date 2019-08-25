/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface HMDApplicationVendorIDStoreValue : HMFObject <NSSecureCoding> {

	BOOL _spiClient;
	NSData* _vendorIdSha1;
	NSString* _applicationBundleId;
	NSString* _companionAppBundleId;

}

@property (nonatomic,readonly) NSData * vendorIdSha1;                        //@synthesize vendorIdSha1=_vendorIdSha1 - In the implementation block
@property (nonatomic,readonly) NSString * applicationBundleId;               //@synthesize applicationBundleId=_applicationBundleId - In the implementation block
@property (nonatomic,readonly) NSString * companionAppBundleId;              //@synthesize companionAppBundleId=_companionAppBundleId - In the implementation block
@property (nonatomic,readonly) BOOL spiClient;                               //@synthesize spiClient=_spiClient - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSData *)vendorIdSha1;
-(NSString *)applicationBundleId;
-(NSString *)companionAppBundleId;
-(BOOL)spiClient;
-(id)initWithVendorIDSha1:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

