/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <libobjc.A.dylib/MPSCNNConvolutionDataSource.h>

@class MPSCNNConvolutionDescriptor, NSString;

@interface VCPCNNMPSDataSource : NSObject <MPSCNNConvolutionDataSource> {

	unsigned _dataType;
	MPSCNNConvolutionDescriptor* _descriptor;
	void* _kernelWeights;
	float* _biasTerms;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void*)weights;
-(unsigned)dataType;
-(float*)biasTerms;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWith:(unsigned)arg1 convolutionDescriptor:(id)arg2 kernelWeights:(void*)arg3 biasTerm:(float*)arg4 ;
-(BOOL)load;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptor;
-(id)label;
-(void)purge;
@end

