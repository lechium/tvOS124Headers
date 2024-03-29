/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSCore.framework/MPSCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLCommandBuffer;
#import <MPSCore/MPSCore-Structs.h>
@interface MPSCommandBufferImageCache : NSObject {

	MPSDevice* _device;
	id<MTLCommandBuffer> _cmdBuffer;
	long long _debugMode;
	HeapNode* _freeList[65];
	CacheFrame* _frameList;
	ResourceNode* _retainedResources;
	MPSAutoCache* _userCacheFrame;
	unsigned long long _minimumBin;
	unsigned long long _batchSize;
	BOOL _needsRetain;
	unsigned long long _totalAllocationBytes;
	unsigned long long _cacheDelay;

}

@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer;              //@synthesize cmdBuffer=_cmdBuffer - In the implementation block
@property (assign,nonatomic) unsigned long long batchSizeHint;                  //@synthesize batchSize=_batchSize - In the implementation block
-(id)initWithCommandBuffer:(id)arg1 ;
-(id)newHeapBlock:(unsigned long long)arg1 ;
-(void)releaseHeapBlock:(id)arg1 ;
-(unsigned long long)batchSizeHint;
-(void)setBatchSizeHint:(unsigned long long)arg1 ;
-(id<MTLCommandBuffer>)commandBuffer;
-(void)dealloc;
-(id)debugDescription;
@end

