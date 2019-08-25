/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>

@class UIImageView, UIStackView, UIFocusGuide, AVDarkModeCompatibleLabel, AVTomatoRatingView, AVInfoPanelExpandingSummaryView, NSLayoutConstraint, NSDateFormatter, NSURLSessionDataTask, NSArray, NSDate, AVPlayerController;

@interface AVInfoPanelDescriptionViewController : UIViewController {

	UIImageView* _posterView;
	UIStackView* _nextToPosterStackView;
	UIFocusGuide* _posterFocusGuide;
	AVDarkModeCompatibleLabel* _titleLabel;
	AVDarkModeCompatibleLabel* _subtitleLabel;
	AVDarkModeCompatibleLabel* _seasonEpisodeLabel;
	AVDarkModeCompatibleLabel* _durationLabel;
	AVDarkModeCompatibleLabel* _genreLabel;
	AVDarkModeCompatibleLabel* _dateLabel;
	AVDarkModeCompatibleLabel* _mediaContentRatingLabel;
	UIImageView* _mediaContentRatingImageView;
	UIImageView* _closedCaptionBadge;
	UIImageView* _videoResolutionBadge;
	UIImageView* _colorDepthBadge;
	UIImageView* _audioFormatBadge;
	AVTomatoRatingView* _tomatoRatingView;
	AVInfoPanelExpandingSummaryView* _summaryView;
	NSLayoutConstraint* _posterViewWidthConstraint;
	NSLayoutConstraint* _posterViewHeightConstraint;
	NSDateFormatter* _yearFormatter;
	NSDateFormatter* _monthDayYearFormatter;
	NSURLSessionDataTask* _posterFetchingTask;
	BOOL _closedCaptioned;
	NSArray* _metadata;
	NSDate* _creationDate;
	double _duration;
	long long _videoResolution;
	long long _videoRange;
	long long _audioFormat;
	AVPlayerController* _playerController;

}

@property (nonatomic,copy) NSArray * metadata;                                           //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                                        //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) double duration;                                            //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isClosedCaptioned,nonatomic) BOOL closedCaptioned;              //@synthesize closedCaptioned=_closedCaptioned - In the implementation block
@property (assign,nonatomic) long long videoResolution;                                  //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) long long videoRange;                                       //@synthesize videoRange=_videoRange - In the implementation block
@property (assign,nonatomic) long long audioFormat;                                      //@synthesize audioFormat=_audioFormat - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
@property (assign,nonatomic,__weak) AVPlayerController * playerController;               //@synthesize playerController=_playerController - In the implementation block
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
-(AVPlayerController *)playerController;
-(void)setVideoRange:(long long)arg1 ;
-(void)_updateVideoResolutionBadge;
-(void)_updateDynamicRangeBadge;
-(void)_updateAudioFormatBadge;
-(id)_metadataItemForIdentifiers:(id)arg1 ;
-(void)_updateViewsWithNewMetadata;
-(void)_updatePosterViewWithImage:(id)arg1 ;
-(void)_loadPosterFromMetadataItem:(id)arg1 ;
-(void)_loadPosterFromURL:(id)arg1 ;
-(id)_releaseDateStringStyle:(long long)arg1 ;
-(id)_durationString;
-(void)_presentFullScreenDescription;
-(BOOL)isClosedCaptioned;
-(void)setClosedCaptioned:(BOOL)arg1 ;
-(long long)videoRange;
-(long long)audioFormat;
-(void)setAudioFormat:(long long)arg1 ;
-(long long)videoResolution;
-(void)setVideoResolution:(long long)arg1 ;
-(void)loadView;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
-(BOOL)hasContent;
@end
