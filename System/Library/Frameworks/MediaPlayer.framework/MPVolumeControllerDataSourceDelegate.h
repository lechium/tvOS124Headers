/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPVolumeControllerDataSourceDelegate <NSObject>
@required
-(void)volumeControllerDataSource:(id)arg1 didChangeVolume:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeMuted:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeWarning:(long long)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeLabel:(id)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimit:(float)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeEUVolumeLimitEnforced:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeAudioCategory:(id)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeControlAvailability:(BOOL)arg2;
-(void)volumeControllerDataSource:(id)arg1 didChangeVolumeCapabilities:(unsigned)arg2;

@end

