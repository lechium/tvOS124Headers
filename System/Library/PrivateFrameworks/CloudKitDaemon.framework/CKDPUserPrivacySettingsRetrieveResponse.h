/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable <NSCopying> {

	NSMutableArray* _applicationBundles;
	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,readonly) BOOL hasUserPrivacySettings; 
@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
@property (nonatomic,retain) NSMutableArray * applicationBundles;                        //@synthesize applicationBundles=_applicationBundles - In the implementation block
+(Class)applicationBundleType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addApplicationBundle:(id)arg1 ;
-(unsigned long long)applicationBundlesCount;
-(void)clearApplicationBundles;
-(id)applicationBundleAtIndex:(unsigned long long)arg1 ;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(BOOL)hasUserPrivacySettings;
-(NSMutableArray *)applicationBundles;
-(void)setApplicationBundles:(NSMutableArray *)arg1 ;
-(CKDPUserPrivacySettings *)userPrivacySettings;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

