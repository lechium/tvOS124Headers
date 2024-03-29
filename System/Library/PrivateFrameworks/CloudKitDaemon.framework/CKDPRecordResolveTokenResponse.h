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

@class NSString, NSMutableArray, CKDPShareMetadata, CKDPRecord;

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying> {

	NSString* _container;
	int _containerEnvironment;
	NSMutableArray* _records;
	CKDPShareMetadata* _shareMetadata;
	CKDPRecord* _shareRecord;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasContainer; 
@property (nonatomic,retain) NSString * container;                           //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) BOOL hasContainerEnvironment; 
@property (assign,nonatomic) int containerEnvironment;                       //@synthesize containerEnvironment=_containerEnvironment - In the implementation block
@property (nonatomic,retain) NSMutableArray * records;                       //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) BOOL hasShareRecord; 
@property (nonatomic,retain) CKDPRecord * shareRecord;                       //@synthesize shareRecord=_shareRecord - In the implementation block
@property (nonatomic,readonly) BOOL hasShareMetadata; 
@property (nonatomic,retain) CKDPShareMetadata * shareMetadata;              //@synthesize shareMetadata=_shareMetadata - In the implementation block
+(Class)recordType;
-(void)setRecords:(NSMutableArray *)arg1 ;
-(unsigned long long)recordsCount;
-(void)clearRecords;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasContainer;
-(id)recordAtIndex:(unsigned long long)arg1 ;
-(void)setShareRecord:(CKDPRecord *)arg1 ;
-(void)setShareMetadata:(CKDPShareMetadata *)arg1 ;
-(int)containerEnvironment;
-(void)setContainerEnvironment:(int)arg1 ;
-(void)setHasContainerEnvironment:(BOOL)arg1 ;
-(BOOL)hasContainerEnvironment;
-(id)containerEnvironmentAsString:(int)arg1 ;
-(int)StringAsContainerEnvironment:(id)arg1 ;
-(BOOL)hasShareRecord;
-(BOOL)hasShareMetadata;
-(CKDPRecord *)shareRecord;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)container;
-(void)setContainer:(NSString *)arg1 ;
-(CKDPShareMetadata *)shareMetadata;
-(NSMutableArray *)records;
-(void)addRecord:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

