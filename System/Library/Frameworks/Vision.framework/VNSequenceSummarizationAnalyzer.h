/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNSequenceSummarizationAnalyzer : VNDetector {

	void* _mEspressoContext;
	void* _mEspressoPlan;
	SCD_Struct_VN32* _mEspressoNetwork;

}
+(id)configurationOptionKeysForDetectorKey;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(void)dealloc;
@end

