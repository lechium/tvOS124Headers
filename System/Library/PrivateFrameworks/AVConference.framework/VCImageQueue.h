/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@interface VCImageQueue : NSObject {

	CAImageQueueRef _caQueue;
	OpaqueFigImageQueueRef _figQueue;
	opaque_pthread_mutex_t _enqueueLock;
	unsigned _slot;
	unsigned _frameRate;
	BOOL _imageQueueProtected;
	long long _streamToken;

}

@property (assign) unsigned frameRate;                    //@synthesize frameRate=_frameRate - In the implementation block
@property (assign) BOOL imageQueueProtected; 
@property (assign) long long streamToken;                 //@synthesize streamToken=_streamToken - In the implementation block
+(id)drawingContext;
-(unsigned)frameRate;
-(void)setFrameRate:(unsigned)arg1 ;
-(id)initWithFrameRate:(unsigned char)arg1 imageQueueProtected:(BOOL)arg2 ;
-(id)initWithFrameRate:(unsigned char)arg1 ;
-(unsigned)setVideoDestination:(id)arg1 ;
-(void)getQueueRepresentation:(void*)arg1 ;
-(BOOL)enqueueFrame:(CVBufferRef)arg1 atTime:(SCD_Struct_AV54)arg2 ;
-(BOOL)imageQueueProtected;
-(void)setImageQueueProtected:(BOOL)arg1 ;
-(void)setStreamToken:(long long)arg1 ;
-(long long)streamToken;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)pause;
@end

