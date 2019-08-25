/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, MTLType, NSArray;


@protocol MTLFunctionSPI <MTLFunction>
@property (copy,readonly) NSString * filePath; 
@property (readonly) long long lineNumber; 
@property (copy,readonly) NSString * unpackedFilePath; 
@property (readonly) MTLType * returnType; 
@property (readonly) NSArray * arguments; 
@required
-(const SCD_Struct_MT42*)bitCodeHash;
-(id)reflectionWithOptions:(unsigned long long)arg1;
-(void)reflectionWithOptions:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1;
-(id)newIndirectArgumentEncoderWithBufferIndex:(unsigned long long)arg1 reflection:(id*)arg2;
-(id)bitcodeData;
-(NSString *)unpackedFilePath;
-(long long)lineNumber;
-(MTLType *)returnType;
-(NSArray *)arguments;
-(NSString *)filePath;

@end
