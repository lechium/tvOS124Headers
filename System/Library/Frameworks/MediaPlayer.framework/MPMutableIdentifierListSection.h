/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MPMutableIdentifierListSection <NSObject>
@property (nonatomic,copy,readonly) NSArray * itemIdentifiers; 
@required
-(NSArray *)itemIdentifiers;
-(void)updateItem:(id)arg1;
-(void)insertItemsAtHead:(id)arg1;
-(void)insertItems:(id)arg1 afterItem:(id)arg2;
-(void)moveItemToHead:(id)arg1;
-(void)moveItem:(id)arg1 afterItem:(id)arg2;
-(void)insertItemsAtTail:(id)arg1;
-(void)moveItemToTail:(id)arg1;
-(void)applyChanges:(id)arg1 itemLookupBlock:(/*^block*/id)arg2;
-(void)removeItem:(id)arg1;

@end

