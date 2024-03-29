/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VSObservanceDelegate.h>

@class NSDictionary, NSExpression, NSArray, NSString;

@interface VSExpressionEvaluator : NSObject <VSObservanceDelegate> {

	BOOL _monitoringForChanges;
	BOOL _hasDeterminedValue;
	NSDictionary* _substitutionVariables;
	NSExpression* _expression;
	id _object;
	id _value;
	NSArray* _observers;

}

@property (nonatomic,retain) id value;                                                             //@synthesize value=_value - In the implementation block
@property (assign,getter=isMonitoringForChanges,nonatomic) BOOL monitoringForChanges;              //@synthesize monitoringForChanges=_monitoringForChanges - In the implementation block
@property (nonatomic,copy) NSArray * observers;                                                    //@synthesize observers=_observers - In the implementation block
@property (assign,nonatomic) BOOL hasDeterminedValue;                                              //@synthesize hasDeterminedValue=_hasDeterminedValue - In the implementation block
@property (nonatomic,copy) NSExpression * expression;                                              //@synthesize expression=_expression - In the implementation block
@property (assign,nonatomic) id object;                                                            //@synthesize object=_object - In the implementation block
@property (nonatomic,copy) NSDictionary * substitutionVariables;                                   //@synthesize substitutionVariables=_substitutionVariables - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)automaticallyNotifiesObserversOfValue;
-(NSExpression *)expression;
-(NSDictionary *)substitutionVariables;
-(void)setSubstitutionVariables:(NSDictionary *)arg1 ;
-(void)setExpression:(NSExpression *)arg1 ;
-(void)observeChange:(id)arg1 forObservance:(id)arg2 ;
-(void)_stopMonitoringForChanges;
-(id)_observersForExpression:(id)arg1 ;
-(id)_observersForPredicate:(id)arg1 ;
-(void)setMonitoringForChanges:(BOOL)arg1 ;
-(BOOL)hasDeterminedValue;
-(void)setHasDeterminedValue:(BOOL)arg1 ;
-(void)_updateComputedResult:(id)arg1 ;
-(void)_startMonitoringForChanges;
-(void)_updateComputedResultIfNeeded;
-(BOOL)isMonitoringForChanges;
-(void)dealloc;
-(id)object;
-(id)value;
-(void)setValue:(id)arg1 ;
-(void)setObservers:(NSArray *)arg1 ;
-(NSArray *)observers;
-(void)setObject:(id)arg1 ;
@end

