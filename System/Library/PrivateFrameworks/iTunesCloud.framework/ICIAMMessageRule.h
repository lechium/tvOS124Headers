/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray, ICIAMTriggerCondition;

@interface ICIAMMessageRule : PBCodable <NSCopying> {

	NSString* _identifier;
	int _ruleOperator;
	NSMutableArray* _subrules;
	ICIAMTriggerCondition* _triggerCondition;
	NSString* _triggerEventName;
	int _type;
	SCD_Struct_IC3 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                              //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasRuleOperator; 
@property (assign,nonatomic) int ruleOperator;                                      //@synthesize ruleOperator=_ruleOperator - In the implementation block
@property (nonatomic,retain) NSMutableArray * subrules;                             //@synthesize subrules=_subrules - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerCondition; 
@property (nonatomic,retain) ICIAMTriggerCondition * triggerCondition;              //@synthesize triggerCondition=_triggerCondition - In the implementation block
@property (nonatomic,readonly) BOOL hasTriggerEventName; 
@property (nonatomic,retain) NSString * triggerEventName;                           //@synthesize triggerEventName=_triggerEventName - In the implementation block
+(Class)subrulesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(BOOL)hasIdentifier;
-(void)addSubrules:(id)arg1 ;
-(unsigned long long)subrulesCount;
-(void)clearSubrules;
-(id)subrulesAtIndex:(unsigned long long)arg1 ;
-(void)setTriggerCondition:(ICIAMTriggerCondition *)arg1 ;
-(void)setTriggerEventName:(NSString *)arg1 ;
-(int)ruleOperator;
-(void)setRuleOperator:(int)arg1 ;
-(void)setHasRuleOperator:(BOOL)arg1 ;
-(BOOL)hasRuleOperator;
-(id)ruleOperatorAsString:(int)arg1 ;
-(int)StringAsRuleOperator:(id)arg1 ;
-(BOOL)hasTriggerCondition;
-(BOOL)hasTriggerEventName;
-(NSMutableArray *)subrules;
-(void)setSubrules:(NSMutableArray *)arg1 ;
-(ICIAMTriggerCondition *)triggerCondition;
-(NSString *)triggerEventName;
-(NSString *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(id)dictionaryRepresentation;
@end

