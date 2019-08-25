/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUICore/VUIAsynchronousOperation.h>

@class VUIMediaEntityFetchRequest, VUIMediaEntityFetchResponse, NSError, VUIMPMediaLibrary, VUIMediaEntityKind, NSMutableSet, MPMediaPredicate, NSArray, NSDictionary, VUIMediaEntityType;

@interface VUIMPMediaEntitiesSingleFetchOperation : VUIAsynchronousOperation {

	BOOL _processPredicateAfterFetch;
	BOOL _processRangeAfterFetch;
	VUIMediaEntityFetchRequest* _request;
	VUIMediaEntityFetchResponse* _response;
	NSError* _error;
	VUIMPMediaLibrary* _mediaLibrary;
	VUIMediaEntityKind* _mediaEntityKind;
	NSMutableSet* _prefetchProperties;
	MPMediaPredicate* _mediaQueryPredicate;
	NSArray* _mediaQuerySortOrderingProperties;
	NSDictionary* _mediaQuerySortOrderingDirectionMappings;
	NSArray* _postFetchSortDescriptors;
	VUIMediaEntityType* _currentFetchMediaEntityType;

}

@property (nonatomic,retain) VUIMediaEntityFetchRequest * request;                                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) VUIMediaEntityFetchResponse * response;                                //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSError * error;                                                       //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;                                    //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,retain) VUIMediaEntityKind * mediaEntityKind;                                //@synthesize mediaEntityKind=_mediaEntityKind - In the implementation block
@property (nonatomic,retain) NSMutableSet * prefetchProperties;                                   //@synthesize prefetchProperties=_prefetchProperties - In the implementation block
@property (nonatomic,retain) MPMediaPredicate * mediaQueryPredicate;                              //@synthesize mediaQueryPredicate=_mediaQueryPredicate - In the implementation block
@property (nonatomic,retain) NSArray * mediaQuerySortOrderingProperties;                          //@synthesize mediaQuerySortOrderingProperties=_mediaQuerySortOrderingProperties - In the implementation block
@property (nonatomic,retain) NSDictionary * mediaQuerySortOrderingDirectionMappings;              //@synthesize mediaQuerySortOrderingDirectionMappings=_mediaQuerySortOrderingDirectionMappings - In the implementation block
@property (nonatomic,retain) NSArray * postFetchSortDescriptors;                                  //@synthesize postFetchSortDescriptors=_postFetchSortDescriptors - In the implementation block
@property (assign,nonatomic) BOOL processPredicateAfterFetch;                                     //@synthesize processPredicateAfterFetch=_processPredicateAfterFetch - In the implementation block
@property (assign,nonatomic) BOOL processRangeAfterFetch;                                         //@synthesize processRangeAfterFetch=_processRangeAfterFetch - In the implementation block
@property (nonatomic,retain) VUIMediaEntityType * currentFetchMediaEntityType;                    //@synthesize currentFetchMediaEntityType=_currentFetchMediaEntityType - In the implementation block
+(id)_sortIndexesWithMediaQuerySection:(id)arg1 ;
-(void)setRequest:(VUIMediaEntityFetchRequest *)arg1 ;
-(void)setResponse:(VUIMediaEntityFetchResponse *)arg1 ;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(id)init;
-(VUIMediaEntityFetchRequest *)request;
-(VUIMediaEntityFetchResponse *)response;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithMediaLibrary:(id)arg1 request:(id)arg2 ;
-(void)executionDidBegin;
-(id)_coalesceResponses:(id)arg1 ;
-(id)_mediaEntityKind;
-(void)setMediaEntityKind:(VUIMediaEntityKind *)arg1 ;
-(void)_populatePrefetchProperties;
-(void)_processRange;
-(void)_processSortDescriptors;
-(void)_processPredicate;
-(id)_mediaQuery;
-(id)_itemsFetchResponseWithMediaQuery:(id)arg1 ;
-(id)_collectionsFetchResponseWithMediaQuery:(id)arg1 ;
-(void)setProcessRangeAfterFetch:(BOOL)arg1 ;
-(VUIMediaEntityKind *)mediaEntityKind;
-(BOOL)_shouldSortUsingMediaQuery;
-(void)setMediaQuerySortOrderingProperties:(NSArray *)arg1 ;
-(void)setMediaQuerySortOrderingDirectionMappings:(NSDictionary *)arg1 ;
-(NSMutableSet *)prefetchProperties;
-(void)setPostFetchSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)postFetchSortDescriptors;
-(id)_mediaQueryPredicateForPredicate:(id)arg1 ;
-(void)setProcessPredicateAfterFetch:(BOOL)arg1 ;
-(void)setMediaQueryPredicate:(MPMediaPredicate *)arg1 ;
-(id)_mediaQueryPredicateForCompoundPredicate:(id)arg1 ;
-(id)_mediaQueryPropertyPredicateForComparisonPredicate:(id)arg1 ;
-(id)_keyPathMediaQueryPropertyPredicateWithKeyPathExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3 ;
-(id)_bitTestMediaQueryPropertyPredicateWithKeyPathBitTestExpression:(id)arg1 operatorType:(unsigned long long)arg2 constantExpression:(id)arg3 ;
-(id)_mediaEntityPropertyDescriptorForFilteringWithKeyPath:(id)arg1 ;
-(id)_baseMediaQuery;
-(void)_addEntityLimitToMediaQuery:(id)arg1 ;
-(void)_addPredicateToMediaQuery:(id)arg1 ;
-(void)_addSortingPropertiesToMediaQuery:(id)arg1 ;
-(void)_addPrefetchPropertiesToMediaQuery:(id)arg1 ;
-(BOOL)processRangeAfterFetch;
-(MPMediaPredicate *)mediaQueryPredicate;
-(BOOL)_isSortingBeingPerformedByMediaQuery;
-(NSArray *)mediaQuerySortOrderingProperties;
-(NSDictionary *)mediaQuerySortOrderingDirectionMappings;
-(BOOL)processPredicateAfterFetch;
-(id)_mediaEntities:(id)arg1 subarrayWithRange:(NSRange)arg2 ;
-(id)_fetchResponseWithMediaEntities:(id)arg1 mediaQuerySections:(id)arg2 ;
-(id)_processFetchedMediaEntities:(id)arg1 ;
-(void)setPrefetchProperties:(NSMutableSet *)arg1 ;
-(VUIMediaEntityType *)currentFetchMediaEntityType;
-(void)setCurrentFetchMediaEntityType:(VUIMediaEntityType *)arg1 ;
@end

