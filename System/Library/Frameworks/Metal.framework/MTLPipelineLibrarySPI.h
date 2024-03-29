/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol MTLPipelineLibrarySPI <MTLPipelineLibrary>
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSArray * pipelineNames; 
@property (assign) BOOL disableRunTimeCompilation; 
@property (nonatomic,readonly) id<MTLPipelineCache> pipelineCache; 
@property (nonatomic,readonly) id<MTLPipelineCache> functionCache; 
@required
-(BOOL)disableRunTimeCompilation;
-(void)setDisableRunTimeCompilation:(BOOL)arg1;
-(id)newComputePipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(id)newRenderPipelineStateWithName:(id)arg1 options:(unsigned long long)arg2 reflection:(id*)arg3 error:(id*)arg4;
-(id)newComputePipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(id)newRenderPipelineDescriptorWithName:(id)arg1 error:(id*)arg2;
-(NSArray *)pipelineNames;
-(id<MTLPipelineCache>)pipelineCache;
-(id<MTLPipelineCache>)functionCache;
-(id<MTLDevice>)device;
-(NSString *)label;
-(void)setLabel:(id)arg1;

@end

