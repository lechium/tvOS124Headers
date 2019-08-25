/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLDevice;
#import <SceneKit/SceneKit-Structs.h>
@class NSString, NSMutableArray, SCNFixedSizePage;

@interface SCNMTLBufferAllocator : NSObject {

	id<MTLDevice> _device;
	unsigned long long _bufferSize;
	unsigned long long _elementSize;
	NSString* _name;
	NSMutableArray* _pages;
	SCNFixedSizePage* _currentAllocatorPage;
	os_unfair_lock_s _allocatorLock;

}

@property (nonatomic,readonly) unsigned long long bufferSize;               //@synthesize bufferSize=_bufferSize - In the implementation block
@property (nonatomic,readonly) unsigned long long elementSize;              //@synthesize elementSize=_elementSize - In the implementation block
-(id)initWithDevice:(id)arg1 fixedSizeElement:(unsigned long long)arg2 buffersize:(unsigned long long)arg3 name:(id)arg4 ;
-(id)newSubBufferWithBytes:(const void*)arg1 length:(unsigned long long)arg2 blitEncoder:(id)arg3 ;
-(id)_newSubBuffer;
-(unsigned long long)elementSize;
-(unsigned long long)bufferSize;
-(void)dealloc;
@end
