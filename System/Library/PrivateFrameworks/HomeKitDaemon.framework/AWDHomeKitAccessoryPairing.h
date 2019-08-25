/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _certified;
	unsigned _duration;
	int _errorCode;
	unsigned _retryCount;
	int _transportType;
	AWDHomeKitVendorInformation* _vendorDetails;
	BOOL _isAdd;
	BOOL _isAddedViaWAC;
	BOOL _isSecureWAC;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                            //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsAdd; 
@property (assign,nonatomic) BOOL isAdd;                                               //@synthesize isAdd=_isAdd - In the implementation block
@property (assign,nonatomic) BOOL hasIsAddedViaWAC; 
@property (assign,nonatomic) BOOL isAddedViaWAC;                                       //@synthesize isAddedViaWAC=_isAddedViaWAC - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
@property (assign,nonatomic) BOOL hasIsSecureWAC; 
@property (assign,nonatomic) BOOL isSecureWAC;                                         //@synthesize isSecureWAC=_isSecureWAC - In the implementation block
@property (assign,nonatomic) BOOL hasRetryCount; 
@property (assign,nonatomic) unsigned retryCount;                                      //@synthesize retryCount=_retryCount - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setRetryCount:(unsigned)arg1 ;
-(void)setHasRetryCount:(BOOL)arg1 ;
-(BOOL)hasRetryCount;
-(unsigned)retryCount;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)errorCode;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setIsAdd:(BOOL)arg1 ;
-(void)setHasIsAdd:(BOOL)arg1 ;
-(BOOL)hasIsAdd;
-(void)setIsAddedViaWAC:(BOOL)arg1 ;
-(void)setHasIsAddedViaWAC:(BOOL)arg1 ;
-(BOOL)hasIsAddedViaWAC;
-(void)setIsSecureWAC:(BOOL)arg1 ;
-(void)setHasIsSecureWAC:(BOOL)arg1 ;
-(BOOL)hasIsSecureWAC;
-(BOOL)isAdd;
-(BOOL)isAddedViaWAC;
-(BOOL)isSecureWAC;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

