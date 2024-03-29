/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSIndexSet, NSDictionary;

@interface IKDiffEvaluator : NSObject {

	NSArray* _objects;
	NSArray* _oldObjects;
	NSIndexSet* _addedIndexes;
	NSIndexSet* _removedIndexes;
	NSDictionary* _movedIndexesByNewIndex;
	NSDictionary* _oldIndexesByNewIndex;

}

@property (nonatomic,copy,readonly) NSArray * objects;                                  //@synthesize objects=_objects - In the implementation block
@property (nonatomic,copy,readonly) NSArray * oldObjects;                               //@synthesize oldObjects=_oldObjects - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * addedIndexes;                          //@synthesize addedIndexes=_addedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * removedIndexes;                        //@synthesize removedIndexes=_removedIndexes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * movedIndexesByNewIndex;              //@synthesize movedIndexesByNewIndex=_movedIndexesByNewIndex - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * oldIndexesByNewIndex;                //@synthesize oldIndexesByNewIndex=_oldIndexesByNewIndex - In the implementation block
-(id)initWithObjects:(id)arg1 oldObjects:(id)arg2 hashing:(/*^block*/id)arg3 ;
-(void)enumerateCommonObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)_evaluateWithHashing:(/*^block*/id)arg1 ;
-(NSArray *)oldObjects;
-(NSDictionary *)oldIndexesByNewIndex;
-(NSIndexSet *)removedIndexes;
-(NSArray *)objects;
-(NSIndexSet *)addedIndexes;
-(NSDictionary *)movedIndexesByNewIndex;
@end

