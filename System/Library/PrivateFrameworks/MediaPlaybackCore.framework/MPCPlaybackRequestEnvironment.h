/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, MPCPlaybackDelegationProperties, MPCPrivateListeningStateSource, ICUserIdentity;

@interface MPCPlaybackRequestEnvironment : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSString* _clientIdentifier;
	NSString* _clientVersion;
	MPCPlaybackDelegationProperties* _delegationProperties;
	NSString* _requestingBundleIdentifier;
	NSString* _requestingBundleVersion;
	MPCPrivateListeningStateSource* _privateListeningStateSource;
	ICUserIdentity* _userIdentity;

}

@property (nonatomic,copy,readonly) NSString * clientIdentifier;                                               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientVersion;                                                  //@synthesize clientVersion=_clientVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleIdentifier;                                     //@synthesize requestingBundleIdentifier=_requestingBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestingBundleVersion;                                        //@synthesize requestingBundleVersion=_requestingBundleVersion - In the implementation block
@property (nonatomic,copy,readonly) MPCPlaybackDelegationProperties * delegationProperties;                    //@synthesize delegationProperties=_delegationProperties - In the implementation block
@property (nonatomic,copy,readonly) MPCPrivateListeningStateSource * privateListeningStateSource;              //@synthesize privateListeningStateSource=_privateListeningStateSource - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)clientIdentifier;
-(NSString *)clientVersion;
-(NSString *)requestingBundleIdentifier;
-(NSString *)requestingBundleVersion;
-(id)_createStoreRequestContext;
-(MPCPrivateListeningStateSource *)privateListeningStateSource;
-(MPCPlaybackDelegationProperties *)delegationProperties;
-(id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
@end

