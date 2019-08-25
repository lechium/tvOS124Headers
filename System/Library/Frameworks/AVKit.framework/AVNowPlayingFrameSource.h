/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVNowPlayingFrameSource <NSObject>
@required
-(unsigned long long)numberOfFramesForTransportBar:(id)arg1;
-(double)transportBar:(id)arg1 frameTimeForDisplayTime:(double)arg2;
-(double)transportBar:(id)arg1 displayTimeForFrameTime:(double)arg2;
-(void)transportBar:(id)arg1 didRevealFrameIndex:(unsigned long long)arg2;

@end

