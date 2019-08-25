/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableOrderedSet, NSArray;

@interface WBSMutableOrderedSet : NSObject {

	NSMutableOrderedSet* _mutableOrderedSet;
	unsigned long long _maximumCount;

}

@property (nonatomic,readonly) NSArray * array; 
-(void)_moveObjectAtIndexToLast:(unsigned long long)arg1 ;
-(id)objectAtIndexWithoutAffectingRecency:(unsigned long long)arg1 ;
-(void)markObjectAsRecentlyUsed:(id)arg1 ;
-(id)initWithMaximumCount:(unsigned long long)arg1 ;
-(NSArray *)array;
-(void)addObject:(id)arg1 ;
-(id)init;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)removeObject:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(void)removeObjectsInArray:(id)arg1 ;
@end
