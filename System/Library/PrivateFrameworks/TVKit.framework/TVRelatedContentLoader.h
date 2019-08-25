/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVPPlayback, TVRelatedContentLoaderDelegate;
@class NSObject, TVRelatedContentViewController;

@interface TVRelatedContentLoader : NSObject {

	NSObject*<TVPPlayback> _player;
	TVRelatedContentViewController* _relatedContentViewController;
	id<TVRelatedContentLoaderDelegate> _delegate;
	id _itemDidChangeObserver;
	id _metadataDidChangeObserver;
	id _beginningBoundaryTimeObserver;
	id _endingBoundaryTimeObserver;
	id _elapsedTimeObserver;

}

@property (assign,nonatomic,__weak) id itemDidChangeObserver;                                            //@synthesize itemDidChangeObserver=_itemDidChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) id metadataDidChangeObserver;                                        //@synthesize metadataDidChangeObserver=_metadataDidChangeObserver - In the implementation block
@property (nonatomic,retain) id beginningBoundaryTimeObserver;                                           //@synthesize beginningBoundaryTimeObserver=_beginningBoundaryTimeObserver - In the implementation block
@property (nonatomic,retain) id endingBoundaryTimeObserver;                                              //@synthesize endingBoundaryTimeObserver=_endingBoundaryTimeObserver - In the implementation block
@property (nonatomic,retain) id elapsedTimeObserver;                                                     //@synthesize elapsedTimeObserver=_elapsedTimeObserver - In the implementation block
@property (nonatomic,retain) NSObject*<TVPPlayback> player;                                              //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) TVRelatedContentViewController * relatedContentViewController;              //@synthesize relatedContentViewController=_relatedContentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<TVRelatedContentLoaderDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
-(void)setPlayer:(NSObject*<TVPPlayback>)arg1 ;
-(NSObject*<TVPPlayback>)player;
-(void)_removeObservers;
-(void)setRelatedContentViewController:(TVRelatedContentViewController *)arg1 ;
-(TVRelatedContentViewController *)relatedContentViewController;
-(id)DurationBinding;
-(void)_updateBoundDuration;
-(id)MediaItemEndActionBinding;
-(void)_updateBoundMediaItemEndAction;
-(void)_updateBoundaryTimeObserversForPlayer:(id)arg1 ;
-(void)_updateDurationUntilPlaybackWillAdvance;
-(void)_didLoadRelatedContent:(id)arg1 ;
-(BOOL)_shouldShowRelatedContent:(id)arg1 ;
-(id)_durationUntilPlaybackWillAdvance;
-(id)_presentationBeginTimeForCurrentMediaItem;
-(id)beginningBoundaryTimeObserver;
-(void)_crossedPresentationBeginTimeBoundary;
-(void)setBeginningBoundaryTimeObserver:(id)arg1 ;
-(id)endingBoundaryTimeObserver;
-(id)_presentationEndTimeForCurrentMediaItem;
-(void)_crossedPresentationEndTimeBoundary;
-(void)setEndingBoundaryTimeObserver:(id)arg1 ;
-(void)tvs_bindDurationBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(void)tvs_bindMediaItemEndActionBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3 ;
-(id)itemDidChangeObserver;
-(void)setItemDidChangeObserver:(id)arg1 ;
-(id)metadataDidChangeObserver;
-(void)setMetadataDidChangeObserver:(id)arg1 ;
-(id)elapsedTimeObserver;
-(void)setElapsedTimeObserver:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<TVRelatedContentLoaderDelegate>)arg1 ;
-(id<TVRelatedContentLoaderDelegate>)delegate;
@end

