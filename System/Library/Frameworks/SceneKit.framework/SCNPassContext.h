/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@interface SCNPassContext : NSObject {

	SCD_Struct_SC48* _context;

}

@property (nonatomic,readonly) double time; 
@property (nonatomic,readonly) id<MTLCommandQueue> commandQueue; 
@property (nonatomic,readonly) id<MTLCommandBuffer> commandBuffer; 
@property (nonatomic,readonly) id<MTLDevice> device; 
-(id<MTLCommandBuffer>)commandBuffer;
-(id<MTLCommandQueue>)commandQueue;
-(double)time;
-(id)inputTextureWithName:(id)arg1 ;
-(id)outputTextureWithName:(id)arg1 ;
-(id<MTLDevice>)device;
@end

