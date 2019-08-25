/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKDOMElement, NSString, _IKDOMPrototypeDerivationRules;

@interface IKDOMPrototype : NSObject {

	IKDOMElement* _domElement;
	NSString* _identifier;
	NSString* _type;
	NSString* _selector;
	_IKDOMPrototypeDerivationRules* _rules;

}

@property (nonatomic,copy,readonly) _IKDOMPrototypeDerivationRules * rules;              //@synthesize rules=_rules - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                         //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * selector;                                 //@synthesize selector=_selector - In the implementation block
+(id)prototypeWithDOMElement:(id)arg1 ;
-(IKDOMElement *)domElement;
-(id)variantForDataItem:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 selector:(id)arg2 ;
-(id)_derivativeWithDataItem:(id)arg1 ;
-(id)instantiateDOMElement;
-(_IKDOMPrototypeDerivationRules *)rules;
-(NSString *)identifier;
-(NSString *)selector;
-(NSString *)type;
@end
