/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVVideoComposition;

@interface ISPlaybackSettings : NSObject {

	float _audioVolume;
	AVVideoComposition* _videoComposition;

}

@property (nonatomic,retain) AVVideoComposition * videoComposition;              //@synthesize videoComposition=_videoComposition - In the implementation block
@property (assign,nonatomic) float audioVolume;                                  //@synthesize audioVolume=_audioVolume - In the implementation block
-(AVVideoComposition *)videoComposition;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(void)setAudioVolume:(float)arg1 ;
-(float)audioVolume;
-(id)init;
@end

