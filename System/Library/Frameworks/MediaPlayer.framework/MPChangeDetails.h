/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSIndexSet, NSArray;

@interface MPChangeDetails : NSObject {

	NSMutableDictionary* _sectionMoves;
	NSMutableIndexSet* _updatedSectionMoveFromIndexes;
	NSMutableDictionary* _itemMoves;
	NSMutableSet* _updatedItemMoveFromIndexPaths;
	NSIndexSet* _insertedSections;
	NSIndexSet* _deletedSections;
	NSIndexSet* _updatedSections;
	NSArray* _insertedItemIndexPaths;
	NSArray* _deletedItemIndexPaths;
	NSArray* _updatedItemIndexPaths;

}

@property (nonatomic,copy) NSIndexSet * insertedSections;                      //@synthesize insertedSections=_insertedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * deletedSections;                       //@synthesize deletedSections=_deletedSections - In the implementation block
@property (nonatomic,copy) NSIndexSet * updatedSections;                       //@synthesize updatedSections=_updatedSections - In the implementation block
@property (nonatomic,copy) NSArray * insertedItemIndexPaths;                   //@synthesize insertedItemIndexPaths=_insertedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * deletedItemIndexPaths;                    //@synthesize deletedItemIndexPaths=_deletedItemIndexPaths - In the implementation block
@property (nonatomic,copy) NSArray * updatedItemIndexPaths;                    //@synthesize updatedItemIndexPaths=_updatedItemIndexPaths - In the implementation block
@property (nonatomic,readonly) BOOL hasChanges; 
@property (nonatomic,copy,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,copy,readonly) NSIndexSet * updatedIndexes; 
+(id)changeDetailsWithPreviousCount:(long long)arg1 finalCount:(long long)arg2 isEqualBlock:(/*^block*/id)arg3 isUpdatedBlock:(/*^block*/id)arg4 ;
-(BOOL)hasChanges;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(void)appendSectionMoveFromIndex:(long long)arg1 toIndex:(long long)arg2 updated:(BOOL)arg3 ;
-(void)appendItemMoveFromIndexPath:(id)arg1 toIndexPath:(id)arg2 updated:(BOOL)arg3 ;
-(void)setInsertedSections:(NSIndexSet *)arg1 ;
-(void)setDeletedSections:(NSIndexSet *)arg1 ;
-(void)setUpdatedSections:(NSIndexSet *)arg1 ;
-(void)setInsertedItemIndexPaths:(NSArray *)arg1 ;
-(void)setDeletedItemIndexPaths:(NSArray *)arg1 ;
-(void)setUpdatedItemIndexPaths:(NSArray *)arg1 ;
-(NSArray *)insertedItemIndexPaths;
-(NSArray *)deletedItemIndexPaths;
-(NSArray *)updatedItemIndexPaths;
-(void)enumerateItemMovesWithBlock:(/*^block*/id)arg1 ;
-(void)_finalize;
-(NSIndexSet *)updatedSections;
-(void)enumerateSectionMovesWithBlock:(/*^block*/id)arg1 ;
-(void)removeSectionMoveFromIndex:(long long)arg1 ;
-(void)removeItemMoveFromIndexPath:(id)arg1 ;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedSections;
-(NSIndexSet *)insertedSections;
-(NSIndexSet *)deletedIndexes;
-(NSIndexSet *)updatedIndexes;
-(id)description;
-(id)debugDescription;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

