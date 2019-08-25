/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHAGraphRegistration.h>
#import <libobjc.A.dylib/PHAServiceOperationHandling.h>

@class PHAServiceClientHandler, PGManager, PFDispatchQueue, NSString;

@interface PHAGraphServiceClientHandler : NSObject <PHAGraphRegistration, PHAServiceOperationHandling> {

	PHAServiceClientHandler* _serviceClientHandler;
	PGManager* _pgGraphManager;
	PFDispatchQueue* _requestQueue;
	unsigned long long _requestCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(id)arg1 options:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)generateSuggestionsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestZeroKeywordsWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSynonymsDictionariesWithContext:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)requestGraphSearchMetadataWithOptions:(id)arg1 context:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)requestSearchIndexKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestAssetSearchKeywordsForAssetCollectionUUIDs:(id)arg1 ofType:(unsigned long long)arg2 withOptions:(id)arg3 context:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)requestSearchInformationForTripUUIDs:(id)arg1 withOptions:(id)arg2 context:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)handleOperation:(id)arg1 ;
-(void)graphUpdateDidStop;
-(void)graphUpdateIsConsistent;
-(void)graphUpdateMadeProgress:(double)arg1 ;
-(id)initWithServiceClientHandler:(id)arg1 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)photoAnalysisGraphManager:(id)arg1 willShutdownGraph:(id)arg2 ;
-(BOOL)wantsLiveGraphUpdates;
-(BOOL)wantsGraphUpdateNotifications;
-(id)currentlyUnavailableError;
-(id)libraryTemporarilyUnavailableError;
-(id)fetchOptionsWithCurrentPhotoLibraryFromFetchOptions:(id)arg1 ;
-(id)phaGraphManager;
-(void)_beginGraphOperation;
-(void)_endGraphOperation;
-(void)operationWillStart:(id)arg1 ;
@end
