/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MIPSmartPlaylistInfo : PBCodable <NSCopying> {

	unsigned _evaluationOrder;
	int _limitKind;
	unsigned _limitOrder;
	unsigned _limitValue;
	NSData* _smartCriteria;
	BOOL _dynamic;
	BOOL _enabledItemsOnly;
	BOOL _filtered;
	BOOL _genius;
	BOOL _limited;
	BOOL _reverseLimitOrder;
	SCD_Struct_MI13 _has;

}

@property (assign,nonatomic) BOOL hasDynamic; 
@property (assign,nonatomic) BOOL dynamic;                           //@synthesize dynamic=_dynamic - In the implementation block
@property (assign,nonatomic) BOOL hasFiltered; 
@property (assign,nonatomic) BOOL filtered;                          //@synthesize filtered=_filtered - In the implementation block
@property (assign,nonatomic) BOOL hasLimited; 
@property (assign,nonatomic) BOOL limited;                           //@synthesize limited=_limited - In the implementation block
@property (assign,nonatomic) BOOL hasLimitKind; 
@property (assign,nonatomic) int limitKind;                          //@synthesize limitKind=_limitKind - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationOrder; 
@property (assign,nonatomic) unsigned evaluationOrder;               //@synthesize evaluationOrder=_evaluationOrder - In the implementation block
@property (assign,nonatomic) BOOL hasLimitOrder; 
@property (assign,nonatomic) unsigned limitOrder;                    //@synthesize limitOrder=_limitOrder - In the implementation block
@property (assign,nonatomic) BOOL hasLimitValue; 
@property (assign,nonatomic) unsigned limitValue;                    //@synthesize limitValue=_limitValue - In the implementation block
@property (assign,nonatomic) BOOL hasEnabledItemsOnly; 
@property (assign,nonatomic) BOOL enabledItemsOnly;                  //@synthesize enabledItemsOnly=_enabledItemsOnly - In the implementation block
@property (assign,nonatomic) BOOL hasReverseLimitOrder; 
@property (assign,nonatomic) BOOL reverseLimitOrder;                 //@synthesize reverseLimitOrder=_reverseLimitOrder - In the implementation block
@property (nonatomic,readonly) BOOL hasSmartCriteria; 
@property (nonatomic,retain) NSData * smartCriteria;                 //@synthesize smartCriteria=_smartCriteria - In the implementation block
@property (assign,nonatomic) BOOL hasGenius; 
@property (assign,nonatomic) BOOL genius;                            //@synthesize genius=_genius - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)limitValue;
-(void)setSmartCriteria:(NSData *)arg1 ;
-(void)setHasDynamic:(BOOL)arg1 ;
-(BOOL)hasDynamic;
-(void)setFiltered:(BOOL)arg1 ;
-(void)setHasFiltered:(BOOL)arg1 ;
-(BOOL)hasFiltered;
-(void)setLimited:(BOOL)arg1 ;
-(void)setHasLimited:(BOOL)arg1 ;
-(BOOL)hasLimited;
-(void)setLimitKind:(int)arg1 ;
-(void)setHasLimitKind:(BOOL)arg1 ;
-(BOOL)hasLimitKind;
-(void)setEvaluationOrder:(unsigned)arg1 ;
-(void)setHasEvaluationOrder:(BOOL)arg1 ;
-(BOOL)hasEvaluationOrder;
-(void)setLimitOrder:(unsigned)arg1 ;
-(void)setHasLimitOrder:(BOOL)arg1 ;
-(BOOL)hasLimitOrder;
-(void)setLimitValue:(unsigned)arg1 ;
-(void)setHasLimitValue:(BOOL)arg1 ;
-(BOOL)hasLimitValue;
-(void)setEnabledItemsOnly:(BOOL)arg1 ;
-(void)setHasEnabledItemsOnly:(BOOL)arg1 ;
-(BOOL)hasEnabledItemsOnly;
-(void)setReverseLimitOrder:(BOOL)arg1 ;
-(void)setHasReverseLimitOrder:(BOOL)arg1 ;
-(BOOL)hasReverseLimitOrder;
-(BOOL)hasSmartCriteria;
-(void)setGenius:(BOOL)arg1 ;
-(void)setHasGenius:(BOOL)arg1 ;
-(BOOL)hasGenius;
-(BOOL)dynamic;
-(BOOL)filtered;
-(BOOL)limited;
-(int)limitKind;
-(unsigned)evaluationOrder;
-(unsigned)limitOrder;
-(BOOL)enabledItemsOnly;
-(BOOL)reverseLimitOrder;
-(NSData *)smartCriteria;
-(BOOL)genius;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDynamic:(BOOL)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

