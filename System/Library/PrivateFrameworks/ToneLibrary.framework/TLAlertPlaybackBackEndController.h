/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TLAlertPlaybackBackEndController <NSObject>
@optional
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(BOOL)arg2;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@required
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4;

@end
