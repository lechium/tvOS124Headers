/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class SCNTechnique;

@interface SCNPass : NSObject {

	_C3DFXPass* _fxPass;
	SCNTechnique* _technique;

}

@property (nonatomic,copy) id initializationHandler; 
@property (nonatomic,copy) id executionHandler; 
-(id)initWithFXPass:(_C3DFXPass*)arg1 technique:(id)arg2 ;
-(void)setInitializationHandler:(id)arg1 ;
-(id)initializationHandler;
-(void)setExecutionHandler:(id)arg1 ;
-(id)executionHandler;
-(void)setValue:(id)arg1 forPassPropertyKey:(long long)arg2 ;
-(id)valueForPassPropertyKey:(long long)arg1 ;
-(void)dealloc;
-(void)invalidate;
@end

