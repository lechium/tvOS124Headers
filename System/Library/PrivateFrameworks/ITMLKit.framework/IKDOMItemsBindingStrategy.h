/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMBindingStrategy.h>

@class NSIndexSet, NSDictionary, IKChangeSet;

@interface IKDOMItemsBindingStrategy : IKDOMBindingStrategy {

	NSIndexSet* _autoHighlightedIndexes;
	NSDictionary* _usedAppPrototypesByType;
	IKChangeSet* _itemsChangeSet;

}

@property (nonatomic,copy) NSIndexSet * autoHighlightedIndexes;                   //@synthesize autoHighlightedIndexes=_autoHighlightedIndexes - In the implementation block
@property (nonatomic,retain) NSDictionary * usedAppPrototypesByType;              //@synthesize usedAppPrototypesByType=_usedAppPrototypesByType - In the implementation block
@property (nonatomic,retain) IKChangeSet * itemsChangeSet;                        //@synthesize itemsChangeSet=_itemsChangeSet - In the implementation block
-(void)didResolveKeys:(id)arg1 ;
-(void)_updateChildDOMElements;
-(void)setItemsChangeSet:(IKChangeSet *)arg1 ;
-(NSDictionary *)usedAppPrototypesByType;
-(id)_appDataItemFromDataItem:(id)arg1 prototype:(id)arg2 autoHighlighted:(BOOL*)arg3 ;
-(void)setAutoHighlightedIndexes:(NSIndexSet *)arg1 ;
-(void)setUsedAppPrototypesByType:(NSDictionary *)arg1 ;
-(void)_reevaluateVisibleIndexRange;
-(NSIndexSet *)autoHighlightedIndexes;
-(id)initWithDOMBindingController:(id)arg1 ;
-(NSRange)visibleItemsRange;
-(void)willUpdateWithItems:(id)arg1 indexTitles:(id)arg2 usedPrototypesByType:(id)arg3 changeSet:(id)arg4 ;
-(IKChangeSet *)itemsChangeSet;
@end

