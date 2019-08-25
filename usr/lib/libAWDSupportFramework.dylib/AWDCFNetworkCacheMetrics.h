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

@class NSString;

@interface AWDCFNetworkCacheMetrics : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned long long _totalBytesWritten;
	NSString* _bundleID;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesWritten; 
@property (assign,nonatomic) unsigned long long totalBytesWritten;              //@synthesize totalBytesWritten=_totalBytesWritten - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(void)setTotalBytesWritten:(unsigned long long)arg1 ;
-(void)setHasTotalBytesWritten:(BOOL)arg1 ;
-(BOOL)hasTotalBytesWritten;
-(BOOL)hasBundleID;
-(unsigned long long)totalBytesWritten;
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
-(NSString *)bundleID;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

