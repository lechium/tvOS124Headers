/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLRenderPassDescriptor.h>

@interface MTLRenderPassDescriptorInternal : MTLRenderPassDescriptor {

	MTLRenderPassDescriptorPrivate _private;

}
+(id)renderPassDescriptor;
-(id)formattedDescription:(unsigned long long)arg1 ;
-(const MTLRenderPassDescriptorPrivate*)_descriptorPrivate;
-(void)setSamplePositions:(const SCD_Struct_MT47*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)getSamplePositions:(SCD_Struct_MT47*)arg1 count:(unsigned long long)arg2 ;
-(id)visibilityResultBuffer;
-(void)setRenderTargetWidth:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetWidth;
-(void)setRenderTargetHeight:(unsigned long long)arg1 ;
-(unsigned long long)renderTargetHeight;
-(void)setFineGrainedBackgroundVisibilityEnabled:(BOOL)arg1 ;
-(BOOL)fineGrainedBackgroundVisibilityEnabled;
-(void)setDitherEnabled:(BOOL)arg1 ;
-(BOOL)isDitherEnabled;
-(void)setOpenGLModeEnabled:(BOOL)arg1 ;
-(BOOL)openGLModeEnabled;
-(BOOL)validate:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(id)colorAttachments;
-(void)setVisibilityResultBuffer:(id)arg1 ;
-(id)depthAttachment;
-(id)stencilAttachment;
-(void)setDepthAttachment:(id)arg1 ;
-(void)setStencilAttachment:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

