/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGSuggester.h>

@class PGSuggestionSession, NSString;

@interface PGAbstractSuggester : NSObject <PGSuggester> {

	PGSuggestionSession* _session;

}

@property (assign,nonatomic,__weak) PGSuggestionSession * session;              //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(id)suggesterWithSession:(id)arg1 ;
+(id)sharingSuggestionResultsForMomentNodes:(id)arg1 ;
+(id)assetCollectionFilteringSharedAssetsForAssetCollection:(id)arg1 loggingConnection:(id)arg2 ;
+(id)suggestedPersonLocalIdentifiersFromSharingSuggestionResults:(id)arg1 forMomentNodes:(id)arg2 containsUnverifiedPersons:(BOOL*)arg3 ;
-(void)setSession:(PGSuggestionSession *)arg1 ;
-(PGSuggestionSession *)session;
-(id)initWithSession:(id)arg1 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
@end

