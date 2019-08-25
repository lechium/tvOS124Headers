/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SCNMTLRenderPass.h>

@protocol MTLTexture, MTLBuffer;
@class SCNMTLComputePipeline;

@interface SCNMTLReduceDepthPass : SCNMTLRenderPass {

	SCNMTLComputePipeline* _initCS;
	SCNMTLComputePipeline* _stepCS;
	SCNMTLComputePipeline* _tailCS;
	id<MTLTexture> _reduceTmpTexture[2];
	id<MTLBuffer> _reduceResult;

}
-(void)setup:(id)arg1 ;
-(void)dealloc;
-(void)execute:(id)arg1 ;
@end

