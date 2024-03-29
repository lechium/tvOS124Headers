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

@class SISchemaClientAnyEvent, SISchemaClientTurnContext;

@interface SISchemaClientTurnBasedEvent : PBCodable <NSCopying> {

	SISchemaClientAnyEvent* _event;
	SISchemaClientTurnContext* _turnContext;

}

@property (nonatomic,readonly) BOOL hasTurnContext; 
@property (nonatomic,retain) SISchemaClientTurnContext * turnContext;              //@synthesize turnContext=_turnContext - In the implementation block
@property (nonatomic,readonly) BOOL hasEvent; 
@property (nonatomic,retain) SISchemaClientAnyEvent * event;                       //@synthesize event=_event - In the implementation block
-(BOOL)hasEvent;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setTurnContext:(SISchemaClientTurnContext *)arg1 ;
-(id)si_dictionaryRepresentation;
-(BOOL)hasTurnContext;
-(SISchemaClientTurnContext *)turnContext;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SISchemaClientAnyEvent *)event;
-(void)setEvent:(SISchemaClientAnyEvent *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

