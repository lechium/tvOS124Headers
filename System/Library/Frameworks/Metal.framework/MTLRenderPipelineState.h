/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLRenderPipelineState <NSObject>
@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) BOOL supportIndirectCommandBuffers; 
@required
-(BOOL)supportIndirectCommandBuffers;
-(id<MTLDevice>)device;
-(NSString *)label;

@end

