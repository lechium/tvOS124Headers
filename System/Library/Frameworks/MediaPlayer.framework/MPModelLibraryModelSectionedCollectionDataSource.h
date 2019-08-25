/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPModelLazySectionedCollectionDataSource.h>

@class MPMediaLibraryEntityTranslationContext, MPModelLibraryRequest, NSString;

@interface MPModelLibraryModelSectionedCollectionDataSource : NSObject <MPModelLazySectionedCollectionDataSource> {

	MPMediaLibraryEntityTranslationContext* _itemTranslationContext;
	MPMediaLibraryEntityTranslationContext* _sectionTranslationContext;
	vector<long long, std::__1::allocator<long long> >* _allowedSectionPersistentIDs;
	map<long long, unsigned long, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, unsigned long> > >* _allowedSectionPersistentIDToSectionQueryResultsIndexMap;
	MPModelLibraryRequest* _request;
	shared_ptr<std::__1::map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > > >* _itemEntityQueryResults;
	shared_ptr<mlcore::EntityQueryResult>* _sectionEntityQueryResult;

}

@property (nonatomic,readonly) shared_ptr<std::__1::map<long long itemEntityQueryResults;                    //@synthesize itemEntityQueryResults=_itemEntityQueryResults - In the implementation block
@property (nonatomic,readonly) shared_ptr<mlcore::EntityQueryResult>* sectionEntityQueryResult;              //@synthesize sectionEntityQueryResult=_sectionEntityQueryResult - In the implementation block
@property (nonatomic,readonly) MPModelLibraryRequest * request;                                              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)sectionAtIndex:(unsigned long long)arg1 ;
-(id)initWithRequest:(id)arg1 sectionQueryResults:(shared_ptr<mlcore::EntityQueryResult>*)arg2 itemQueryResults:(map<long long, std::__1::shared_ptr<mlcore::EntityQueryResult>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::shared_ptr<mlcore::EntityQueryResult> > > >*)arg3 ;
-(id)itemAtIndexPath:(id)arg1 ;
-(BOOL)_allowedEntityIdentifiersContainsAllPersistentIDs;
-(void)_populateIndexMap;
-(BOOL)hasSameContentAsDataSource:(id)arg1 ;
-(id)identifiersForItemAtIndexPath:(id)arg1 ;
-(id)identifiersForSectionAtIndex:(long long)arg1 ;
-(id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1 ;
-(unsigned long long)_adjustedIndexForSectionIndex:(long long)arg1 ;
-(shared_ptr<std::__1::map<long long)itemEntityQueryResults;
-(shared_ptr<mlcore::EntityQueryResult>*)sectionEntityQueryResult;
-(unsigned long long)numberOfSections;
-(unsigned long long)numberOfItemsInSection:(unsigned long long)arg1 ;
-(MPModelLibraryRequest *)request;
@end

