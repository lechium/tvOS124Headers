/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, REDependencyGraph;

@interface REOrderingArray : NSObject {

	NSArray* _orderedObjects;
	REDependencyGraph* _dependencyGraph;
	BOOL _needsUpdate;
	unsigned long long _batchCount;
	NSArray* _comparators;

}

@property (nonatomic,readonly) NSArray * comparators;                 //@synthesize comparators=_comparators - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
-(void)performBatchUpdates:(/*^block*/id)arg1 ;
-(void)updateObject:(id)arg1 ;
-(id)initWithComparators:(id)arg1 ;
-(void)sortAllObjects;
-(NSArray *)comparators;
-(void)_createDependenciesForObject:(id)arg1 ;
-(void)_performOrMarkUpdate;
-(void)_updateContentOrder;
-(void)addObject:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
@end

