/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface BWStillImageTimeMachine : NSObject {

	OpaqueFigSimpleMutexRef _timeMachineMutex;
	opaqueCMSampleBuffer* _frames;
	BOOL _suspended;
	int _capacity;

}

@property (nonatomic,readonly) int capacity;              //@synthesize capacity=_capacity - In the implementation block
+(BOOL)afComplete:(opaqueCMSampleBufferRef)arg1 ;
+(void)initialize;
-(opaqueCMSampleBufferRef)copyBestFrame;
-(int)insertFrame:(opaqueCMSampleBufferRef)arg1 ;
-(void)suspendAndDrain;
-(void)_drain;
-(void)dealloc;
-(id)initWithCapacity:(int)arg1 ;
-(void)resume;
-(int)capacity;
-(void)drain;
@end

