/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriInstrumentation/SiriInstrumentation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SISchemaTextToSpeechBegin : PBCodable <NSCopying> {

	NSString* _aceID;
	int _audioOutputRoute;
	SCD_Struct_SI1 _has;

}

@property (nonatomic,readonly) BOOL hasAceID; 
@property (nonatomic,retain) NSString * aceID;                      //@synthesize aceID=_aceID - In the implementation block
@property (assign,nonatomic) BOOL hasAudioOutputRoute; 
@property (assign,nonatomic) int audioOutputRoute;                  //@synthesize audioOutputRoute=_audioOutputRoute - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setAceID:(NSString *)arg1 ;
-(BOOL)hasAceID;
-(NSString *)aceID;
-(int)audioOutputRoute;
-(void)setAudioOutputRoute:(int)arg1 ;
-(void)setHasAudioOutputRoute:(BOOL)arg1 ;
-(BOOL)hasAudioOutputRoute;
-(id)audioOutputRouteAsString:(int)arg1 ;
-(int)StringAsAudioOutputRoute:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

