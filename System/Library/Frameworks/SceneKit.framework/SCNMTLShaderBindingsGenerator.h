/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SceneKit/SceneKit-Structs.h>
@class NSMutableDictionary;

@interface SCNMTLShaderBindingsGenerator : NSObject {

	os_unfair_lock_s _generateLock;
	SCD_Struct_SC147* _current;
	NSMutableDictionary* _nodeBindings;
	NSMutableDictionary* _frameBindings;
	NSMutableDictionary* _shadableBindings;
	NSMutableDictionary* _passBindings;
	NSMutableDictionary* _lightBindings;
	SCD_Struct_SC57 _sceneBuffer;

}
+(void)allocateRegistry;
+(void)registerSemantic:(id)arg1 withBlock:(/*^block*/id)arg2 ;
+(void)registerShadableArgumentBindingBlockForBuffers:(/*^block*/id)arg1 textures:(/*^block*/id)arg2 samplers:(/*^block*/id)arg3 ;
+(void)registerArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(BOOL)arg3 block:(/*^block*/id)arg4 ;
+(void)registerArgument:(id)arg1 frequency:(int)arg2 block:(/*^block*/id)arg3 ;
+(void)registerUserBlockTrampoline:(/*^block*/id)arg1 ;
+(void)deallocateRegistry;
-(void)addResourceBindingsForArgument:(id)arg1 frequency:(int)arg2 needsRenderResource:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)addPassResourceBindingsForArgument:(id)arg1 ;
-(void)_parseArguments:(id)arg1 function:(id)arg2 renderPipeline:(id)arg3 ;
-(long long)_searchArguments:(id)arg1 forArgumentNamed:(id)arg2 type:(unsigned long long)arg3 ;
-(id)_dictionaryForFrequency:(int)arg1 ;
-(void)_checkForAssociatedSamplerOnBinding:(id)arg1 argument:(id)arg2 ;
-(void)generateBindingsForPipeline:(id)arg1 withReflection:(id)arg2 program:(_C3DFXProgram*)arg3 material:(C3DMaterialRef)arg4 geometry:(_C3DGeometry*)arg5 pass:(_C3DFXPass*)arg6 ;
-(id)init;
-(void)dealloc;
@end

