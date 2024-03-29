/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDDEDExtensionCompleted : PBCodable <NSCopying> {

	unsigned long long _duration;
	unsigned long long _numbytes;
	unsigned long long _numfiles;
	unsigned long long _timestamp;
	int _error;
	NSString* _extension;
	SCD_Struct_AW3 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasExtension; 
@property (nonatomic,retain) NSString * extension;                      //@synthesize extension=_extension - In the implementation block
@property (assign,nonatomic) BOOL hasNumfiles; 
@property (assign,nonatomic) unsigned long long numfiles;               //@synthesize numfiles=_numfiles - In the implementation block
@property (assign,nonatomic) BOOL hasNumbytes; 
@property (assign,nonatomic) unsigned long long numbytes;               //@synthesize numbytes=_numbytes - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) int error;                                 //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned long long duration;               //@synthesize duration=_duration - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasDuration;
-(BOOL)hasError;
-(void)setHasDuration:(BOOL)arg1 ;
-(BOOL)hasExtension;
-(void)setNumfiles:(unsigned long long)arg1 ;
-(void)setNumbytes:(unsigned long long)arg1 ;
-(void)setHasNumfiles:(BOOL)arg1 ;
-(BOOL)hasNumfiles;
-(void)setHasNumbytes:(BOOL)arg1 ;
-(BOOL)hasNumbytes;
-(unsigned long long)numfiles;
-(unsigned long long)numbytes;
-(void)setHasError:(BOOL)arg1 ;
-(id)errorAsString:(int)arg1 ;
-(int)StringAsError:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(unsigned long long)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)duration;
-(void)setExtension:(NSString *)arg1 ;
-(NSString *)extension;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)error;
-(void)setError:(int)arg1 ;
@end

