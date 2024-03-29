/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNWActivity : PBCodable <NSCopying> {

	unsigned long long _activityDomain;
	unsigned long long _activityLabel;
	unsigned long long _timestamp;
	NSString* _activityUUID;
	NSString* _parentActivityUUID;
	BOOL _isRetry;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                   //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasActivityDomain; 
@property (assign,nonatomic) unsigned long long activityDomain;              //@synthesize activityDomain=_activityDomain - In the implementation block
@property (assign,nonatomic) BOOL hasActivityLabel; 
@property (assign,nonatomic) unsigned long long activityLabel;               //@synthesize activityLabel=_activityLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityUUID; 
@property (nonatomic,retain) NSString * activityUUID;                        //@synthesize activityUUID=_activityUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasParentActivityUUID; 
@property (nonatomic,retain) NSString * parentActivityUUID;                  //@synthesize parentActivityUUID=_parentActivityUUID - In the implementation block
@property (assign,nonatomic) BOOL hasIsRetry; 
@property (assign,nonatomic) BOOL isRetry;                                   //@synthesize isRetry=_isRetry - In the implementation block
-(BOOL)hasActivityUUID;
-(void)setParentActivityUUID:(NSString *)arg1 ;
-(void)setActivityDomain:(unsigned long long)arg1 ;
-(void)setHasActivityDomain:(BOOL)arg1 ;
-(BOOL)hasActivityDomain;
-(void)setActivityLabel:(unsigned long long)arg1 ;
-(void)setHasActivityLabel:(BOOL)arg1 ;
-(BOOL)hasActivityLabel;
-(BOOL)hasParentActivityUUID;
-(void)setIsRetry:(BOOL)arg1 ;
-(void)setHasIsRetry:(BOOL)arg1 ;
-(BOOL)hasIsRetry;
-(unsigned long long)activityDomain;
-(unsigned long long)activityLabel;
-(NSString *)parentActivityUUID;
-(BOOL)isRetry;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)activityUUID;
-(void)setActivityUUID:(NSString *)arg1 ;
@end

