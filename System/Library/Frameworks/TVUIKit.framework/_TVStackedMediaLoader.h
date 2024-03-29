/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/_TVStackedVideoAssetLoaderDelegate.h>

@protocol _TVStackedMediaLoaderDelegate;
@class _TVStackedMediaDocument, NSArray, NSString;

@interface _TVStackedMediaLoader : NSObject <_TVStackedVideoAssetLoaderDelegate> {

	long long _state;
	id<_TVStackedMediaLoaderDelegate> _delegate;
	_TVStackedMediaDocument* _document;
	NSArray* _videoLoaders;

}

@property (nonatomic,retain) _TVStackedMediaDocument * document;                             //@synthesize document=_document - In the implementation block
@property (nonatomic,retain) NSArray * videoLoaders;                                         //@synthesize videoLoaders=_videoLoaders - In the implementation block
@property (assign,nonatomic) long long state;                                                //@synthesize state=_state - In the implementation block
@property (assign,nonatomic,__weak) id<_TVStackedMediaLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_becomeActive;
-(void)becomeActive;
-(void)stackedVideoAssetLoader:(id)arg1 completedWithSuccess:(BOOL)arg2 playerLayer:(id)arg3 error:(id)arg4 forEntry:(id)arg5 ;
-(void)becomeInactive;
-(void)_transitionPreviewToVideo;
-(void)previewToVideoTransitionCompleted;
-(void)_transitionVideoToPreview;
-(void)videoToPreviewTransitionCompleted;
-(void)_cancelVideoLoaders;
-(id)_prettyEvent:(long long)arg1 ;
-(id)_prettyState:(long long)arg1 ;
-(void)_handleEventVideoAssetLoaded;
-(void)_handleEventVideoAssetFailed;
-(void)_handleEventBecomeActive;
-(void)_handleEventBecomeInactive;
-(void)_handleEventPreviewToVideoTransitionCompleted;
-(void)_handleEventVideoToPreviewTransitionCompleted;
-(BOOL)_allLoadersHaveLoaded;
-(void)_releaseVideoLoaders;
-(void)_createVideoLoaders;
-(BOOL)_loadVideoAssets;
-(NSArray *)videoLoaders;
-(void)setVideoLoaders:(NSArray *)arg1 ;
-(void)_processEvent:(long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<_TVStackedMediaLoaderDelegate>)arg1 ;
-(long long)state;
-(id<_TVStackedMediaLoaderDelegate>)delegate;
-(void)setState:(long long)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(_TVStackedMediaDocument *)arg1 ;
-(_TVStackedMediaDocument *)document;
@end

