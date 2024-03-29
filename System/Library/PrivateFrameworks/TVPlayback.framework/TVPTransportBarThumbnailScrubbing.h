/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TVPVideoView;


@protocol TVPTransportBarThumbnailScrubbing <NSObject>
@property (nonatomic,readonly) long long scrubPreviewMode; 
@property (nonatomic,readonly) TVPVideoView * scrubVideoView; 
@required
-(TVPVideoView *)scrubVideoView;
-(void)setScrubPreviewMode:(long long)arg1 animated:(BOOL)arg2;
-(void)setScrubImage:(id)arg1;
-(void)setScrubVideoPlayer:(id)arg1;
-(long long)scrubPreviewMode;

@end

