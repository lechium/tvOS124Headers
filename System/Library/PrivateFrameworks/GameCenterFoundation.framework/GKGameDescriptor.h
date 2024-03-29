/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSNumber;

@interface GKGameDescriptor : GKInternalRepresentation {

	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _adamID;
	NSNumber* _externalVersion;
	NSString* _shortBundleVersion;

}

@property (nonatomic,retain) NSNumber * adamID;                        //@synthesize adamID=_adamID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersion;               //@synthesize externalVersion=_externalVersion - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                   //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * shortBundleVersion;              //@synthesize shortBundleVersion=_shortBundleVersion - In the implementation block
+(id)secureCodedPropertyKeys;
+(id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 adamID:(id)arg3 ;
+(id)gameDescriptorWithBundleID:(id)arg1 ;
+(id)gameDescriptorWithBundleID:(id)arg1 adamID:(id)arg2 ;
+(id)gameDescriptorWithBundleID:(id)arg1 bundleVersion:(id)arg2 shortBundleVersion:(id)arg3 adamID:(id)arg4 ;
+(BOOL)supportsSecureCoding;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setAdamID:(NSNumber *)arg1 ;
-(NSNumber *)adamID;
-(void)setShortBundleVersion:(NSString *)arg1 ;
-(NSNumber *)externalVersion;
-(void)setExternalVersion:(NSNumber *)arg1 ;
-(NSString *)shortBundleVersion;
-(id)initWithPushDictionary:(id)arg1 ;
-(id)dictionaryForRequest;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(void)setDictionary:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
@end

