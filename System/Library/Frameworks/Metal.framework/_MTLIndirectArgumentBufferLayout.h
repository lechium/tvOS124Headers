/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _MTLIndirectArgumentBufferLayout : NSObject

@property (readonly) BOOL bufferLayoutMatchesFrontEndLayout; 
@property (readonly) unsigned long long encodedLength; 
@property (readonly) unsigned long long alignment; 
@property (readonly) unsigned hashValue; 
@property (readonly) unsigned hashOffset; 
@property (readonly) unsigned hashMask; 
@property (readonly) unsigned hashSignature; 
-(void*)virtualAddressForBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForTextureAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForSamplerAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForRenderPipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForComputePipelineAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(unsigned long long)uniqueIdentifierForIndirectCommandBufferAtIndex:(unsigned long long)arg1 inIndirectArgumentBuffer:(id)arg2 atOffset:(unsigned long long)arg3 ;
-(BOOL)bufferLayoutMatchesFrontEndLayout;
-(unsigned)hashOffset;
-(unsigned)hashMask;
-(unsigned)hashSignature;
-(unsigned long long)constantOffsetAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)encodedLength;
-(unsigned)hashValue;
-(unsigned long long)alignment;
-(id)init;
-(void)dealloc;
@end

