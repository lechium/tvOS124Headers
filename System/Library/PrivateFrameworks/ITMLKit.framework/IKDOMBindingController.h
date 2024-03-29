/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/IKJSDataObserving.h>

@protocol IKDOMBindingStrategy;
@class NSDictionary, NSMutableArray, IKAppContext, IKDOMElement, IKDataBinding, IKJSDataItem, _IKDOMMutationRules, NSString;

@interface IKDOMBindingController : NSObject <IKJSDataObserving> {

	NSDictionary* _bindingKeysByPathString;
	struct {
		BOOL hasKeysAffectingChildren;
		BOOL hasKeysAffectingSubtree;
		BOOL hasPrototypeDependentKeys;
		BOOL hasValueDidChangeForKey;
		BOOL hasDidResolveKeys;
	}  _strategyFlags;
	NSMutableArray* _scheduledUpdaters;
	BOOL _shouldResolveData;
	IKAppContext* _appContext;
	IKDOMElement* _domElement;
	IKDOMBindingController* _parent;
	IKDataBinding* _binding;
	IKJSDataItem* _dataItem;
	id<IKDOMBindingStrategy> _strategy;
	_IKDOMMutationRules* _mutationRules;
	NSDictionary* _prototypesByType;

}

@property (nonatomic,readonly) _IKDOMMutationRules * mutationRules;                 //@synthesize mutationRules=_mutationRules - In the implementation block
@property (nonatomic,readonly) NSDictionary * prototypesByType;                     //@synthesize prototypesByType=_prototypesByType - In the implementation block
@property (nonatomic,readonly) BOOL shouldResolveData;                              //@synthesize shouldResolveData=_shouldResolveData - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                    //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                    //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMBindingController * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) IKDataBinding * binding;                             //@synthesize binding=_binding - In the implementation block
@property (nonatomic,__weak,readonly) IKJSDataItem * dataItem;                      //@synthesize dataItem=_dataItem - In the implementation block
@property (nonatomic,readonly) id<IKDOMBindingStrategy> strategy;                   //@synthesize strategy=_strategy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instantiateDOMElementForItem:(id)arg1 withPrototype:(id)arg2 parentDOMElement:(id)arg3 existingDOMElement:(id)arg4 ;
+(id)parsedBindingForDOMElement:(id)arg1 ;
+(id)_parsedMutationRulesForDOMElement:(id)arg1 ;
+(id)_prototypesByTypeForDOMElement:(id)arg1 ;
+(void)prepareForDOMElement:(id)arg1 ;
+(id)domBindingControllerForDOMElement:(id)arg1 ;
-(IKDOMElement *)domElement;
-(void)dataObservable:(id)arg1 didChangePropertyPathWithString:(id)arg2 extraInfo:(id)arg3 ;
-(IKDataBinding *)binding;
-(void)scheduleUpdateUsingPreUpdate:(/*^block*/id)arg1 update:(/*^block*/id)arg2 ;
-(BOOL)_canBeReused;
-(id)initWithDOMElement:(id)arg1 ;
-(void)_resolveBinding;
-(void)_evaluateMutationRules;
-(BOOL)shouldResolveData;
-(NSDictionary *)prototypesByType;
-(_IKDOMMutationRules *)mutationRules;
-(id)findPrototypeForType:(id)arg1 ;
-(id<IKDOMBindingStrategy>)strategy;
-(IKJSDataItem *)dataItem;
-(void)dealloc;
-(IKDOMBindingController *)parent;
-(IKAppContext *)appContext;
@end

