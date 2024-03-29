/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsBatchLookupResponseContainerPrivacySettings : PBCodable <NSCopying> {

	NSMutableArray* _applicationBundles;
	NSString* _applicationContainer;
	int _applicationContainerEnvironment;
	CKDPUserPrivacySettings* _userPrivacySettings;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasApplicationContainer; 
@property (nonatomic,retain) NSString * applicationContainer;                            //@synthesize applicationContainer=_applicationContainer - In the implementation block
@property (assign,nonatomic) BOOL hasApplicationContainerEnvironment; 
@property (assign,nonatomic) int applicationContainerEnvironment;                        //@synthesize applicationContainerEnvironment=_applicationContainerEnvironment - In the implementation block
@property (nonatomic,retain) NSMutableArray * applicationBundles;                        //@synthesize applicationBundles=_applicationBundles - In the implementation block
@property (nonatomic,readonly) BOOL hasUserPrivacySettings; 
@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
+(Class)applicationBundleType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)addApplicationBundle:(id)arg1 ;
-(void)setApplicationContainer:(NSString *)arg1 ;
-(unsigned long long)applicationBundlesCount;
-(void)clearApplicationBundles;
-(id)applicationBundleAtIndex:(unsigned long long)arg1 ;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(BOOL)hasApplicationContainer;
-(int)applicationContainerEnvironment;
-(void)setApplicationContainerEnvironment:(int)arg1 ;
-(void)setHasApplicationContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasApplicationContainerEnvironment;
-(id)applicationContainerEnvironmentAsString:(int)arg1 ;
-(int)StringAsApplicationContainerEnvironment:(id)arg1 ;
-(BOOL)hasUserPrivacySettings;
-(NSString *)applicationContainer;
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

