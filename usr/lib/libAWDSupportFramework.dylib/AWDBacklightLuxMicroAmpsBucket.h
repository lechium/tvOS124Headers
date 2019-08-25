/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDBacklightLuxMicroAmpsBucket : PBCodable <NSCopying> {

	unsigned _bucketDuration;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasBucketDuration; 
@property (assign,nonatomic) unsigned bucketDuration;              //@synthesize bucketDuration=_bucketDuration - In the implementation block
-(void)setBucketDuration:(unsigned)arg1 ;
-(void)setHasBucketDuration:(BOOL)arg1 ;
-(BOOL)hasBucketDuration;
-(unsigned)bucketDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

