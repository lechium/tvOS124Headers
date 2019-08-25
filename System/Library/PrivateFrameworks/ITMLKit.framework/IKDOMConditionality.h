/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet, IKDOMElement, NSString;

@interface IKDOMConditionality : NSObject {

	BOOL _mutable;
	NSArray* _inclusionExpressions;
	NSArray* _exclusionExpressions;
	NSSet* _dependentPathStrings;
	IKDOMElement* _domElement;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * inclusionExpressions;              //@synthesize inclusionExpressions=_inclusionExpressions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * exclusionExpressions;              //@synthesize exclusionExpressions=_exclusionExpressions - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                 //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (getter=isMutable,nonatomic,readonly) BOOL mutable;                    //@synthesize mutable=_mutable - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;                //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
+(id)_applySpecializationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)_applyGeneralizationOnDOMElement:(id)arg1 withDOMElement:(id)arg2 ;
+(id)conditionalityWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(BOOL)isMutable;
-(IKDOMElement *)domElement;
-(BOOL)passesForDataItem:(id)arg1 ;
-(NSSet *)dependentPathStrings;
-(id)initWithDOMElement:(id)arg1 mutable:(BOOL)arg2 ;
-(NSArray *)inclusionExpressions;
-(NSArray *)exclusionExpressions;
-(void)applyOnDOMElement:(id)arg1 ;
-(NSString *)identifier;
-(long long)compare:(id)arg1 ;
@end

