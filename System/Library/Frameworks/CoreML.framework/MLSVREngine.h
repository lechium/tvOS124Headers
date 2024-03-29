/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLModelSpecificationLoader.h>

@class NSString;

@interface MLSVREngine : NSObject <MLModelSpecificationLoader> {

	BOOL _isInputSizeLowerBoundOnly;
	BOOL _freeModelOnDealloc;
	unsigned long long _inputSize;
	svm_model* _model;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign) svm_model* model;                                //@synthesize model=_model - In the implementation block
@property (assign) BOOL freeModelOnDealloc;                         //@synthesize freeModelOnDealloc=_freeModelOnDealloc - In the implementation block
@property (readonly) BOOL isInputSizeLowerBoundOnly;                //@synthesize isInputSizeLowerBoundOnly=_isInputSizeLowerBoundOnly - In the implementation block
@property (readonly) unsigned long long inputSize;                  //@synthesize inputSize=_inputSize - In the implementation block
+(id)loadModelFromSpecification:(MLModelSpecification*)arg1 configuration:(id)arg2 error:(id*)arg3 ;
-(void)setModel:(svm_model*)arg1 ;
-(id)initWithSVMModel:(svm_model*)arg1 freeOnDealloc:(BOOL)arg2 isInputSizeLowerBoundOnly:(BOOL)arg3 inputSize:(unsigned long long)arg4 ;
-(svm_node*)allocSVMNodeVector:(unsigned long long)arg1 ;
-(void)fillSVMNodeVector:(svm_node*)arg1 values:(double*)arg2 count:(unsigned long long)arg3 ;
-(void)deallocSVMNodeVector:(svm_node*)arg1 ;
-(id)initWithLibSVMFile:(id)arg1 ;
-(BOOL)isInputSizeLowerBoundOnly;
-(BOOL)freeModelOnDealloc;
-(void)setFreeModelOnDealloc:(BOOL)arg1 ;
-(unsigned long long)inputSize;
-(id)predict:(id)arg1 ;
-(void)dealloc;
-(svm_model*)model;
@end

