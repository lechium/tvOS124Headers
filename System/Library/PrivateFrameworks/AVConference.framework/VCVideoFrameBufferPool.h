/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableDictionary;

@interface VCVideoFrameBufferPool : NSObject {

	int _maxBufferCount;
	NSMutableDictionary* _bufferPool;

}
-(BOOL)addFrame:(CVBufferRef)arg1 time:(long long)arg2 ;
-(BOOL)releaseFrameWithTime:(long long)arg1 ;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
@end
