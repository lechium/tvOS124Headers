/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface AWDCoreRoutineDeletionStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _deleteType;
	NSMutableArray* _groups;
	BOOL _syncEnabled;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSyncEnabled; 
@property (assign,nonatomic) BOOL syncEnabled;                          //@synthesize syncEnabled=_syncEnabled - In the implementation block
@property (assign,nonatomic) BOOL hasDeleteType; 
@property (assign,nonatomic) unsigned deleteType;                       //@synthesize deleteType=_deleteType - In the implementation block
@property (nonatomic,retain) NSMutableArray * groups;                   //@synthesize groups=_groups - In the implementation block
+(Class)groupsType;
-(void)addGroups:(id)arg1 ;
-(void)clearGroups;
-(id)groupsAtIndex:(unsigned long long)arg1 ;
-(void)setSyncEnabled:(BOOL)arg1 ;
-(void)setHasSyncEnabled:(BOOL)arg1 ;
-(BOOL)hasSyncEnabled;
-(void)setDeleteType:(unsigned)arg1 ;
-(void)setHasDeleteType:(BOOL)arg1 ;
-(BOOL)hasDeleteType;
-(BOOL)syncEnabled;
-(unsigned)deleteType;
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
-(NSMutableArray *)groups;
-(void)setGroups:(NSMutableArray *)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)groupsCount;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

