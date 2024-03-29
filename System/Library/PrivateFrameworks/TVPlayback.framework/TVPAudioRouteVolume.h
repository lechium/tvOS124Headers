/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface TVPAudioRouteVolume : NSObject {

	float _stepSize;
	NSString* _category;

}

@property (nonatomic,readonly) NSString * category;                  //@synthesize category=_category - In the implementation block
@property (nonatomic,copy) NSNumber * volume; 
@property (assign,getter=isMuted,nonatomic) BOOL muted; 
@property (nonatomic,readonly) float stepSize;                       //@synthesize stepSize=_stepSize - In the implementation block
-(void)setVolume:(NSNumber *)arg1 ;
-(void)setMuted:(BOOL)arg1 ;
-(NSNumber *)volume;
-(BOOL)isMuted;
-(void)_listenForAVSystemControllerNotifications;
-(void)_mediaServerDied:(id)arg1 ;
-(void)_volumeDidChange:(id)arg1 ;
-(id)initWithCategory:(id)arg1 ;
-(BOOL)increase;
-(BOOL)decrease;
-(float)stepSize;
-(id)init;
-(void)dealloc;
-(NSString *)category;
@end

