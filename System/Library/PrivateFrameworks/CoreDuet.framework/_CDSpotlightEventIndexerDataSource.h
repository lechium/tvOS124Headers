/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _DKKnowledgeQuerying;
@class _DKEventStream;

@interface _CDSpotlightEventIndexerDataSource : NSObject {

	id<_DKKnowledgeQuerying> _knowledgeStore;
	_DKEventStream* _stream;

}

@property (nonatomic,readonly) id<_DKKnowledgeQuerying> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,readonly) _DKEventStream * stream;                              //@synthesize stream=_stream - In the implementation block
-(id)bundleIDToSearchableItemsDictionaryFromEvents:(id)arg1 ;
-(id)initWithKnowledgeStore:(id)arg1 eventStream:(id)arg2 ;
-(id)earliestEventCreationDateWithError:(id*)arg1 ;
-(id)searchableItemUniqueIdentifierWithDomain:(id)arg1 indexingIdentifier:(id)arg2 ;
-(id)searchableItemIdentifiersForTombstonedEventsInInterval:(id)arg1 latestTombstoneDate:(id*)arg2 error:(id*)arg3 ;
-(id)bundleIDToSearchableItemsDictionaryWithCreationDateInInterval:(id)arg1 limit:(long long)arg2 nextBatch:(BOOL*)arg3 latestCreationDate:(id*)arg4 error:(id*)arg5 ;
-(id<_DKKnowledgeQuerying>)knowledgeStore;
-(_DKEventStream *)stream;
@end

