/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKViewElement.h>

@protocol IKDataSourceElementImplementing;
@class NSDictionary, NSArray, IKChangeSet;

@interface IKDataSourceElement : IKViewElement {

	BOOL _areItemsBound;
	struct {
		BOOL hasResetImplicitUpdates;
		BOOL hasProxyElementForLoadedChildElement;
		BOOL hasCanProxyUnloadedChildElement;
	}  _implFlags;
	NSDictionary* _indexTitles;
	NSArray* _autoHighlightedChildElements;
	long long _autoHighlightIndex;
	id<IKDataSourceElementImplementing> _impl;

}

@property (nonatomic,copy) NSArray * autoHighlightedChildElements;                    //@synthesize autoHighlightedChildElements=_autoHighlightedChildElements - In the implementation block
@property (assign,nonatomic) long long autoHighlightIndex;                            //@synthesize autoHighlightIndex=_autoHighlightIndex - In the implementation block
@property (nonatomic,copy) NSDictionary * indexTitles;                                //@synthesize indexTitles=_indexTitles - In the implementation block
@property (nonatomic,readonly) id<IKDataSourceElementImplementing> impl;              //@synthesize impl=_impl - In the implementation block
@property (getter=areItemsBound,nonatomic,readonly) BOOL itemsBound; 
@property (nonatomic,readonly) NSArray * prototypes; 
@property (nonatomic,copy,readonly) NSArray * proxiedItemElements; 
@property (nonatomic,readonly) IKChangeSet * itemsChangeSet; 
+(unsigned long long)updateTypeForChangeInAttribute:(id)arg1 fromValue:(id)arg2 toValue:(id)arg3 ;
-(id<IKDataSourceElementImplementing>)impl;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(void)configureUpdatesWithElement:(id)arg1 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(void)appDocumentDidMarkStylesDirty;
-(void)resetImplicitUpdates;
-(id)proxyElementForLoadedChildElement:(id)arg1 ;
-(BOOL)canProxyUnloadedChildElement:(id)arg1 ;
-(id)_parsedIndexTitlesFromString:(id)arg1 ;
-(NSArray *)autoHighlightedChildElements;
-(void)setAutoHighlightedChildElements:(NSArray *)arg1 ;
-(void)setAutoHighlightIndex:(long long)arg1 ;
-(long long)indexOfItemForElement:(id)arg1 ;
-(void)resetUpdates;
-(id)lastItemElement;
-(void)enumerateItemElementsUsingBlock:(/*^block*/id)arg1 ;
-(id)prototypeForItemAtIndex:(long long)arg1 ;
-(void)loadIndex:(long long)arg1 ;
-(void)unloadIndex:(long long)arg1 ;
-(long long)autoHighlightIndex;
-(void)resetProperty:(unsigned long long)arg1 ;
-(IKChangeSet *)itemsChangeSet;
-(NSArray *)prototypes;
-(id)firstItemElement;
-(NSArray *)proxiedItemElements;
-(void)dealloc;
-(id)debugDescription;
-(long long)numberOfItems;
-(NSDictionary *)indexTitles;
-(void)setIndexTitles:(NSDictionary *)arg1 ;
-(id)elementForItemAtIndex:(long long)arg1 ;
-(BOOL)areItemsBound;
@end

