/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDLMeshBufferZone <NSObject>
@property (nonatomic,readonly) unsigned long long capacity; 
@property (nonatomic,readonly) id<MDLMeshBufferAllocator> allocator; 
@required
-(id<MDLMeshBufferAllocator>)allocator;
-(unsigned long long)capacity;

@end
