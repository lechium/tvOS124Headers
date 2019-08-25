/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosPlayer/PhotosPlayer-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/ISChangeObserver.h>
#import <libobjc.A.dylib/ISBasePlayerOutput.h>

@protocol OS_dispatch_queue, ISBasePlayerUIViewChangeObserver;
@class NSObject, ISPlayerOutputContent, ISBasePlayer, UIView, UIImage, UIImageView, ISVideoPlayerUIView, ISWrappedAVAudioSession, NSString;

@interface ISBasePlayerUIView : UIView <ISChangeObserver, ISBasePlayerOutput> {

	NSObject*<OS_dispatch_queue> _audioSessionQueue;
	ISPlayerOutputContent* _content;
	SCD_Struct_IS7 _changeObserverRespondsTo;
	ISBasePlayer* _player;
	UIView* _customPhotoView;
	UIImage* _overrideImage;
	UIImageView* __photoView;
	ISVideoPlayerUIView* __videoView;
	UIView* __containerView;
	ISWrappedAVAudioSession* _wrappedAudioSession;
	id<ISBasePlayerUIViewChangeObserver> __changeObserver;
	CGPoint _scaleAnchorOffset;
	CGRect _contentsRect;

}

@property (nonatomic,readonly) UIImageView * _photoView;                                                                          //@synthesize _photoView=__photoView - In the implementation block
@property (nonatomic,readonly) ISVideoPlayerUIView * _videoView;                                                                  //@synthesize _videoView=__videoView - In the implementation block
@property (nonatomic,readonly) UIView * _containerView;                                                                           //@synthesize _containerView=__containerView - In the implementation block
@property (setter=_setWrappedAudioSession:,nonatomic,retain) ISWrappedAVAudioSession * wrappedAudioSession;                       //@synthesize wrappedAudioSession=_wrappedAudioSession - In the implementation block
@property (assign,setter=_setChangeObserver:,nonatomic,__weak) id<ISBasePlayerUIViewChangeObserver> _changeObserver;              //@synthesize _changeObserver=__changeObserver - In the implementation block
@property (nonatomic,retain) ISBasePlayer * player;                                                                               //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) CGPoint scaleAnchorOffset;                                                                           //@synthesize scaleAnchorOffset=_scaleAnchorOffset - In the implementation block
@property (nonatomic,retain) UIView * customPhotoView;                                                                            //@synthesize customPhotoView=_customPhotoView - In the implementation block
@property (nonatomic,retain) UIImage * overrideImage;                                                                             //@synthesize overrideImage=_overrideImage - In the implementation block
@property (getter=isDisplayingPhoto,nonatomic,readonly) BOOL displayingPhoto; 
@property (assign,nonatomic) CGRect contentsRect;                                                                                 //@synthesize contentsRect=_contentsRect - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)playerClass;
-(void)setOverrideImage:(UIImage *)arg1 ;
-(UIImage *)overrideImage;
-(void)_updatePhotoView;
-(ISVideoPlayerUIView *)_videoView;
-(void)setPlayer:(ISBasePlayer *)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(ISBasePlayer *)player;
-(id)generateSnapshotImage;
-(void)registerChangeObserver:(id)arg1 ;
-(void)unregisterChangeObserver:(id)arg1 ;
-(BOOL)isDisplayingPhoto;
-(void)_performCommonInitialization;
-(UIImageView *)_photoView;
-(UIView *)customPhotoView;
-(CGPoint)scaleAnchorOffset;
-(void)audioSessionDidChange;
-(void)_updatePlayerAudioSession;
-(void)_setWrappedAudioSession:(id)arg1 ;
-(void)playerDidChange;
-(ISWrappedAVAudioSession *)wrappedAudioSession;
-(void)_signalChange:(unsigned long long)arg1 withAnimationDuration:(double)arg2 ;
-(void)applyScale:(double)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applyOutputInfo:(id)arg1 withTransitionOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)setCustomPhotoView:(UIView *)arg1 ;
-(void)setScaleAnchorOffset:(CGPoint)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(void)layoutSubviews;
-(UIView *)_containerView;
-(id<ISBasePlayerUIViewChangeObserver>)_changeObserver;
-(void)_setChangeObserver:(id)arg1 ;
-(void)contentDidChange;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)setContent:(id)arg1 ;
-(CGRect)contentsRect;
@end

