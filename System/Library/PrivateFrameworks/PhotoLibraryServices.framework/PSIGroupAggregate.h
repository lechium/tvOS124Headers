/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSArray, NSMutableArray, NSObject, NSString;

@interface PSIGroupAggregate : NSObject {

	NSArray* _searchTokens;
	NSMutableArray* _groupAggregateItems;
	NSMutableArray* _aggregatedGroupIds;
	NSMutableArray* _aggregateItemPool;
	NSObject*<OS_dispatch_queue> _groupResultsQueue;
	NSString* _transientToken;

}

@property (nonatomic,readonly) NSArray * searchTokens;              //@synthesize searchTokens=_searchTokens - In the implementation block
@property (nonatomic,copy) NSString * transientToken;               //@synthesize transientToken=_transientToken - In the implementation block
+(void)postProcessGroupResults:(id)arg1 dedupedGroupResults:(out id*)arg2 ;
+(BOOL)_canDedupeGroupResult:(id)arg1 withGroupResult:(id)arg2 ;
+(BOOL)_prefer:(id)arg1 over:(id)arg2 ;
-(id)newGroupResultWithDateFilter:(id)arg1 ;
-(NSString *)transientToken;
-(void)setTransientToken:(NSString *)arg1 ;
-(BOOL)pushGroup:(id)arg1 ;
-(id)initWithSearchTokens:(id)arg1 groupResultsQueue:(id)arg2 ;
-(NSArray *)searchTokens;
-(NSRange)_rangeOfString:(id)arg1 inGroup:(id)arg2 extendingSearchRange:(BOOL)arg3 matchingFullToken:(BOOL)arg4 excludingRanges:(id)arg5 ;
-(id)aggregateItemWithSearchToken:(id)arg1 rangeMatchingToken:(id)arg2 group:(id)arg3 ;
-(CFArrayRef)_newSortedGroupIds;
-(id)newGroupResult;
-(BOOL)_verifySortedGroupIdsUnique;
-(void)dealloc;
-(void)pop;
@end
