/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVCKDataClientResultsControllerDataSource, TVCKDataClientResultsControllerDelegate;
@class TVCKDataClient, NSArray, TVCKDataQuery, NSDictionary;

@interface TVCKDataClientResultsController : NSObject {

	BOOL _initialResultsNeedUpdating;
	BOOL _pausedUpdateHandling;
	/*^block*/id _dataQueryBlock;
	id<TVCKDataClientResultsControllerDataSource> _dataSource;
	id<TVCKDataClientResultsControllerDelegate> _delegate;
	TVCKDataClient* _dataClient;
	NSArray* _results;
	long long _status;
	unsigned long long _queryAttempt;
	TVCKDataQuery* _query;
	NSDictionary* _pausedDataClientDataUpdateInfo;

}

@property (nonatomic,retain) TVCKDataClient * dataClient;                                                  //@synthesize dataClient=_dataClient - In the implementation block
@property (nonatomic,copy) NSArray * results;                                                              //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long status;                                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) unsigned long long queryAttempt;                                              //@synthesize queryAttempt=_queryAttempt - In the implementation block
@property (nonatomic,retain) TVCKDataQuery * query;                                                        //@synthesize query=_query - In the implementation block
@property (assign,nonatomic) BOOL initialResultsNeedUpdating;                                              //@synthesize initialResultsNeedUpdating=_initialResultsNeedUpdating - In the implementation block
@property (assign,nonatomic) BOOL pausedUpdateHandling;                                                    //@synthesize pausedUpdateHandling=_pausedUpdateHandling - In the implementation block
@property (nonatomic,copy) NSDictionary * pausedDataClientDataUpdateInfo;                                  //@synthesize pausedDataClientDataUpdateInfo=_pausedDataClientDataUpdateInfo - In the implementation block
@property (nonatomic,copy) id dataQueryBlock;                                                              //@synthesize dataQueryBlock=_dataQueryBlock - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKDataClientResultsControllerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic,__weak) id<TVCKDataClientResultsControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
+(id)artistsResultsControllerWithDataClient:(id)arg1 ;
+(id)artistsResultsControllerForGenre:(id)arg1 ;
+(id)artistsWithMusicVideosResultsControllerWithDataClient:(id)arg1 ;
+(id)artistResultsControllerForID:(id)arg1 dataClient:(id)arg2 ;
+(id)albumsResultsControllerWithDataClient:(id)arg1 ;
+(id)albumsResultsControllerForArtist:(id)arg1 genre:(id)arg2 ;
+(id)albumsResultsControllerForGenre:(id)arg1 ;
+(id)albumsResultsControllerForComposer:(id)arg1 ;
+(id)compilationAlbumsResultsControllerWithDataClient:(id)arg1 ;
+(id)recentlyAddedAlbumsResultsControllerWithDataClient:(id)arg1 ;
+(id)albumResultsControllerForID:(id)arg1 dataClient:(id)arg2 ;
+(id)songsResultsControllerWithDataClient:(id)arg1 ;
+(id)songsResultsControllerForAlbum:(id)arg1 genre:(id)arg2 ;
+(id)songsResultsControllerForArtist:(id)arg1 genre:(id)arg2 ;
+(id)songsResultsControllerForSingleAlbumArtist:(id)arg1 genre:(id)arg2 ;
+(id)songsResultsControllerForComposer:(id)arg1 ;
+(id)songsResultsControllerForPlaylist:(id)arg1 ;
+(id)songsResultsControllerForGeniusMix:(id)arg1 ;
+(id)musicVideosResultsControllerForArtist:(id)arg1 ;
+(id)genresResultsControllerWithDataClient:(id)arg1 ;
+(id)composersResultsControllerWithDataClient:(id)arg1 ;
+(id)playlistsResultsControllerWithDataClient:(id)arg1 ;
+(id)geniusMixesResultsControllerWithDataClient:(id)arg1 ;
+(id)radioStationsResultsControllerWithDataClient:(id)arg1 ;
+(id)playbackResultsControllerForArtist:(id)arg1 genre:(id)arg2 ;
+(id)playbackResultsControllerForAlbum:(id)arg1 genre:(id)arg2 ;
+(id)playbackResultsControllerForComposer:(id)arg1 genre:(id)arg2 ;
-(void)setQuery:(TVCKDataQuery *)arg1 ;
-(TVCKDataClient *)dataClient;
-(id)initWithDataClient:(id)arg1 ;
-(BOOL)pausedUpdateHandling;
-(void)setPausedDataClientDataUpdateInfo:(NSDictionary *)arg1 ;
-(void)_handleDataClientDataUpdated:(id)arg1 ;
-(void)setInitialResultsNeedUpdating:(BOOL)arg1 ;
-(void)_attemptQuery;
-(id)dataQueryBlock;
-(void)_notifyWillChangeResultsForQuery:(id)arg1 ;
-(void)_notifyDidChangeResultsForQuery:(id)arg1 ;
-(void)_notifyDidFailQuery:(id)arg1 ;
-(BOOL)initialResultsNeedUpdating;
-(void)_dataClientDataUpdated:(id)arg1 ;
-(void)setPausedUpdateHandling:(BOOL)arg1 ;
-(NSDictionary *)pausedDataClientDataUpdateInfo;
-(void)pauseUpdateHandling;
-(void)resumeUpdateHandling;
-(void)setDataQueryBlock:(id)arg1 ;
-(void)setDataClient:(TVCKDataClient *)arg1 ;
-(unsigned long long)queryAttempt;
-(void)setQueryAttempt:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TVCKDataClientResultsControllerDelegate>)arg1 ;
-(id<TVCKDataClientResultsControllerDelegate>)delegate;
-(void)stop;
-(id<TVCKDataClientResultsControllerDataSource>)dataSource;
-(void)setDataSource:(id<TVCKDataClientResultsControllerDataSource>)arg1 ;
-(void)start;
-(long long)status;
-(TVCKDataQuery *)query;
-(void)setStatus:(long long)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
@end

