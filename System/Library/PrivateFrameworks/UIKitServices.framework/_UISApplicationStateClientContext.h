/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSServiceFacilityClientContext.h>

@protocol FBSServiceFacilityClientHandle;
@class NSString;

@interface _UISApplicationStateClientContext : NSObject <FBSServiceFacilityClientContext> {

	id<FBSServiceFacilityClientHandle> _clientHandle;
	NSString* _bundleIdentifier;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                           //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSServiceFacilityClientHandle> clientHandle;              //@synthesize clientHandle=_clientHandle - In the implementation block
-(id<FBSServiceFacilityClientHandle>)clientHandle;
-(void)setClientHandle:(id<FBSServiceFacilityClientHandle>)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

