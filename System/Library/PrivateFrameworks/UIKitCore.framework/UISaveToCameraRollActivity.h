/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIActivity.h>

@interface UISaveToCameraRollActivity : UIActivity {

	long long _imageCount;
	long long _livePhotoCount;
	long long _videoCount;

}

@property (assign,nonatomic) long long imageCount;                  //@synthesize imageCount=_imageCount - In the implementation block
@property (assign,nonatomic) long long livePhotoCount;              //@synthesize livePhotoCount=_livePhotoCount - In the implementation block
@property (assign,nonatomic) long long videoCount;                  //@synthesize videoCount=_videoCount - In the implementation block
+(unsigned long long)_xpcAttributes;
-(id)activityType;
-(id)activityTitle;
-(id)_activityImage;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(void)prepareWithActivityItems:(id)arg1 ;
-(void)performActivity;
-(/*^block*/id)_backgroundPreheatBlock;
-(long long)imageCount;
-(void)setImageCount:(long long)arg1 ;
-(long long)livePhotoCount;
-(void)setLivePhotoCount:(long long)arg1 ;
-(long long)videoCount;
-(void)setVideoCount:(long long)arg1 ;
@end

