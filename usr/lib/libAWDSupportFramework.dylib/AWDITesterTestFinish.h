/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDITesterTestFinish : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _testName;
	unsigned _testStatus;
	NSString* _uniqueKey;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                       //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasUniqueKey; 
@property (nonatomic,retain) NSString * uniqueKey;                      //@synthesize uniqueKey=_uniqueKey - In the implementation block
@property (assign,nonatomic) BOOL hasTestStatus; 
@property (assign,nonatomic) unsigned testStatus;                       //@synthesize testStatus=_testStatus - In the implementation block
-(void)setTestName:(NSString *)arg1 ;
-(void)setTestStatus:(unsigned)arg1 ;
-(BOOL)hasTestName;
-(BOOL)hasTestStatus;
-(NSString *)testName;
-(unsigned)testStatus;
-(void)setHasTestStatus:(BOOL)arg1 ;
-(void)setUniqueKey:(NSString *)arg1 ;
-(BOOL)hasUniqueKey;
-(NSString *)uniqueKey;
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
@end
