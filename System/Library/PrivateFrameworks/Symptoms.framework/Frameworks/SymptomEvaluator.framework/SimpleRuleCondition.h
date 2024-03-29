/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>

@protocol SymptomAdditionalProtocol;
@class NSMutableDictionary, NSString;

@interface SimpleRuleCondition : NSObject <ConfigurableObjectProtocol> {

	NSMutableDictionary* _resetSources;
	int _conditionType;
	NSString* _conditionName;
	long long _conditionMinCount;
	NSString* _conditionPrevSymptom;
	long long _conditionMaxAge;
	long long _conditionFlags;
	NSString* _conditionStringID;
	long long _conditionStringLength;
	id<SymptomAdditionalProtocol> _additionalHandler;
	SEL _additionalSelector;

}

@property (nonatomic,retain) NSString * conditionName;                                     //@synthesize conditionName=_conditionName - In the implementation block
@property (assign,nonatomic) long long conditionMinCount;                                  //@synthesize conditionMinCount=_conditionMinCount - In the implementation block
@property (assign,nonatomic) int conditionType;                                            //@synthesize conditionType=_conditionType - In the implementation block
@property (nonatomic,retain) NSString * conditionPrevSymptom;                              //@synthesize conditionPrevSymptom=_conditionPrevSymptom - In the implementation block
@property (assign,nonatomic) long long conditionMaxAge;                                    //@synthesize conditionMaxAge=_conditionMaxAge - In the implementation block
@property (assign,nonatomic) long long conditionFlags;                                     //@synthesize conditionFlags=_conditionFlags - In the implementation block
@property (nonatomic,retain) NSString * conditionStringID;                                 //@synthesize conditionStringID=_conditionStringID - In the implementation block
@property (assign,nonatomic) long long conditionStringLength;                              //@synthesize conditionStringLength=_conditionStringLength - In the implementation block
@property (nonatomic,retain) id<SymptomAdditionalProtocol> additionalHandler;              //@synthesize additionalHandler=_additionalHandler - In the implementation block
@property (assign,nonatomic) SEL additionalSelector;                                       //@synthesize additionalSelector=_additionalSelector - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)configureClass:(id)arg1 ;
+(id)objectWithName:(id)arg1 ;
-(void)setConditionType:(int)arg1 ;
-(int)conditionType;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)_reset:(id)arg1 ;
-(void)setConditionName:(NSString *)arg1 ;
-(BOOL)evaluatePrevSymptom:(id)arg1 showingWorkAt:(id)arg2 ;
-(BOOL)evaluateHandler:(id)arg1 showingWorkAt:(id)arg2 ;
-(BOOL)evaluate:(id)arg1 showingWorkAt:(id)arg2 ;
-(NSString *)conditionName;
-(long long)conditionMinCount;
-(void)setConditionMinCount:(long long)arg1 ;
-(NSString *)conditionPrevSymptom;
-(void)setConditionPrevSymptom:(NSString *)arg1 ;
-(long long)conditionMaxAge;
-(void)setConditionMaxAge:(long long)arg1 ;
-(long long)conditionFlags;
-(void)setConditionFlags:(long long)arg1 ;
-(NSString *)conditionStringID;
-(void)setConditionStringID:(NSString *)arg1 ;
-(long long)conditionStringLength;
-(void)setConditionStringLength:(long long)arg1 ;
-(id<SymptomAdditionalProtocol>)additionalHandler;
-(void)setAdditionalHandler:(id<SymptomAdditionalProtocol>)arg1 ;
-(SEL)additionalSelector;
-(void)setAdditionalSelector:(SEL)arg1 ;
-(NSString *)description;
@end

