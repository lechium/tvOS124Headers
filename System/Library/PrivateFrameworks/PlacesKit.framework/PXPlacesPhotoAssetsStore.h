/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PlacesKit.framework/PlacesKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>

@protocol OS_dispatch_queue;
@class NSArray, PXPlacesStore, NSMutableArray, NSObject, NSString;

@interface PXPlacesPhotoAssetsStore : NSObject <PHPhotoLibraryChangeObserver> {

	BOOL _didInitiateLoad;
	BOOL _didCompleteLoad;
	NSArray* _fetchResults;
	PXPlacesStore* _store;
	NSMutableArray* _completions;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,retain) NSArray * fetchResults;                                //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) PXPlacesStore * store;                                 //@synthesize store=_store - In the implementation block
@property (assign,nonatomic) BOOL didInitiateLoad;                                  //@synthesize didInitiateLoad=_didInitiateLoad - In the implementation block
@property (assign,nonatomic) BOOL didCompleteLoad;                                  //@synthesize didCompleteLoad=_didCompleteLoad - In the implementation block
@property (nonatomic,retain) NSMutableArray * completions;                          //@synthesize completions=_completions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (readonly) id<PXPlacesGeotaggedItemDataSource> dataSource; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSMutableArray *)completions;
-(void)setCompletions:(NSMutableArray *)arg1 ;
-(void)photoLibraryDidChange:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSArray *)fetchResults;
-(void)setFetchResults:(NSArray *)arg1 ;
-(PXPlacesStore *)store;
-(void)setStore:(PXPlacesStore *)arg1 ;
-(id)initWithFetchResults:(id)arg1 ;
-(BOOL)didCompleteLoad;
-(BOOL)didInitiateLoad;
-(void)setDidInitiateLoad:(BOOL)arg1 ;
-(void)_handleAssetsImport;
-(void)_addItems:(id)arg1 intoStore:(id)arg2 ;
-(void)setDidCompleteLoad:(BOOL)arg1 ;
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id<PXPlacesGeotaggedItemDataSource>)dataSource;
@end

