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

@interface AWDITesterCertHomeKitTestFinish : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _accessoryManufacturer;
	NSString* _accessoryName;
	NSString* _testErrorDescription;
	unsigned _testIterations;
	NSString* _testName;
	NSString* _testResult;
	NSString* _testStatus;
	NSString* _testUUID;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryManufacturer; 
@property (nonatomic,retain) NSString * accessoryManufacturer;              //@synthesize accessoryManufacturer=_accessoryManufacturer - In the implementation block
@property (nonatomic,readonly) BOOL hasAccessoryName; 
@property (nonatomic,retain) NSString * accessoryName;                      //@synthesize accessoryName=_accessoryName - In the implementation block
@property (nonatomic,readonly) BOOL hasTestUUID; 
@property (nonatomic,retain) NSString * testUUID;                           //@synthesize testUUID=_testUUID - In the implementation block
@property (nonatomic,readonly) BOOL hasTestName; 
@property (nonatomic,retain) NSString * testName;                           //@synthesize testName=_testName - In the implementation block
@property (nonatomic,readonly) BOOL hasTestStatus; 
@property (nonatomic,retain) NSString * testStatus;                         //@synthesize testStatus=_testStatus - In the implementation block
@property (assign,nonatomic) BOOL hasTestIterations; 
@property (assign,nonatomic) unsigned testIterations;                       //@synthesize testIterations=_testIterations - In the implementation block
@property (nonatomic,readonly) BOOL hasTestResult; 
@property (nonatomic,retain) NSString * testResult;                         //@synthesize testResult=_testResult - In the implementation block
@property (nonatomic,readonly) BOOL hasTestErrorDescription; 
@property (nonatomic,retain) NSString * testErrorDescription;               //@synthesize testErrorDescription=_testErrorDescription - In the implementation block
-(void)setTestUUID:(NSString *)arg1 ;
-(void)setTestName:(NSString *)arg1 ;
-(void)setTestStatus:(NSString *)arg1 ;
-(void)setTestResult:(NSString *)arg1 ;
-(void)setTestErrorDescription:(NSString *)arg1 ;
-(BOOL)hasTestUUID;
-(BOOL)hasTestName;
-(BOOL)hasTestStatus;
-(void)setTestIterations:(unsigned)arg1 ;
-(void)setHasTestIterations:(BOOL)arg1 ;
-(BOOL)hasTestIterations;
-(BOOL)hasTestResult;
-(BOOL)hasTestErrorDescription;
-(NSString *)testUUID;
-(NSString *)testName;
-(NSString *)testStatus;
-(unsigned)testIterations;
-(NSString *)testResult;
-(NSString *)testErrorDescription;
-(BOOL)hasAccessoryName;
-(void)setAccessoryManufacturer:(NSString *)arg1 ;
-(BOOL)hasAccessoryManufacturer;
-(NSString *)accessoryManufacturer;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(NSString *)accessoryName;
-(void)setAccessoryName:(NSString *)arg1 ;
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

