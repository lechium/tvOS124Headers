/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MTLArgumentEncoder <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (copy) NSString * label; 
@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long alignment; 
@required
-(void)setArgumentBuffer:(id)arg1 startOffset:(unsigned long long)arg2 arrayElement:(unsigned long long)arg3;
-(void)setRenderPipelineState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setRenderPipelineStates:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setIndirectCommandBuffer:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setIndirectCommandBuffers:(const id*)arg1 withRange:(NSRange)arg2;
-(id)newArgumentEncoderForBufferAtIndex:(unsigned long long)arg1;
-(void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
-(void)setTexture:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setBuffers:(const id*)arg1 offsets:(const unsigned long long*)arg2 withRange:(NSRange)arg3;
-(void)setTextures:(const id*)arg1 withRange:(NSRange)arg2;
-(void)setSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;
-(void)setSamplerStates:(const id*)arg1 withRange:(NSRange)arg2;
-(unsigned long long)encodedLength;
-(void)setArgumentBuffer:(id)arg1 offset:(unsigned long long)arg2;
-(void*)constantDataAtIndex:(unsigned long long)arg1;
-(id<MTLDevice>)device;
-(unsigned long long)alignment;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

