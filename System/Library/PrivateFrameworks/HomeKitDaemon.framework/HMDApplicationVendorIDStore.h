/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding> {

	NSMutableDictionary* _applicationVendorIdMapping;
	NSMutableDictionary* _applicationMachUUIDMapping;
	NSObject*<OS_dispatch_queue> _clientQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * applicationVendorIdMapping;              //@synthesize applicationVendorIdMapping=_applicationVendorIdMapping - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * applicationMachUUIDMapping;              //@synthesize applicationMachUUIDMapping=_applicationMachUUIDMapping - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)sharedStore;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)vendorIDForApplication:(id)arg1 ;
-(void)checkCorrectness;
-(NSMutableDictionary *)applicationVendorIdMapping;
-(id)_vendorIDForApplication:(id)arg1 ;
-(void)_extractVendorIDForApplication:(id)arg1 ;
-(void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
-(BOOL)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(BOOL)arg4 ;
-(id)_machUUIDsForApplication:(id)arg1 ;
-(NSMutableDictionary *)applicationMachUUIDMapping;
-(void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(BOOL)arg3 ;
-(void)addVendorIDData:(id)arg1 applicationBundleId:(id)arg2 ;
-(void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 ;
-(void)removeVendorIDForApplicationBundleId:(id)arg1 ;
-(id)machUUIDsForApplication:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_save;
@end
