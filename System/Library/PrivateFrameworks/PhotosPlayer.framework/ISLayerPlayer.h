/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable;

@interface ISLayerPlayer : NSObject {

	NSHashTable* _layers;

}
-(void)addLayer:(id)arg1 ;
-(void)play;
-(void)seekToTime:(double)arg1 ;
-(void)setRate:(float)arg1 ;
-(void)removeLayer:(id)arg1 ;
-(void)_enumerateLayersWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(double)currentTime;
-(void)pause;
@end

