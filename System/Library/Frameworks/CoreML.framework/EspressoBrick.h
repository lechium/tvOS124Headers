/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EspressoBrick <NSObject>
@optional
-(void)setMappedWeights:(void*)arg1 sizeInBytes:(unsigned long long)arg2;
-(void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
-(void)encodeToMetalCommandBuffer:(id)arg1 inputTensors:(id)arg2 outputTensors:(id)arg3;

@required
-(id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;
-(BOOL)hasGPUSupport;
-(id)initWithParameters:(id)arg1;

@end

