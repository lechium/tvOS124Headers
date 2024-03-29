/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetector.h>

@interface VNEspressoModelFileBasedDetector : VNDetector {

	void* _espressoContext;
	void* _espressoPlan;
	SCD_Struct_VN32* _espressoNetwork;
	unsigned long long _networkRequiredInputImageWidth;
	unsigned long long _networkRequiredInputImageHeight;

}

@property (nonatomic,readonly) void* espressoContext;                                           //@synthesize espressoContext=_espressoContext - In the implementation block
@property (nonatomic,readonly) void* espressoPlan;                                              //@synthesize espressoPlan=_espressoPlan - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VN32* espressoNetwork;                                //@synthesize espressoNetwork=_espressoNetwork - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageWidth;               //@synthesize networkRequiredInputImageWidth=_networkRequiredInputImageWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long networkRequiredInputImageHeight;              //@synthesize networkRequiredInputImageHeight=_networkRequiredInputImageHeight - In the implementation block
+(id)configurationOptionKeysForDetectorKey;
-(void*)espressoContext;
-(BOOL)completeInitializationAndReturnError:(id*)arg1 ;
-(BOOL)supportsProcessingDevice:(id)arg1 ;
-(SCD_Struct_VN32*)espressoNetwork;
-(void*)espressoPlan;
-(unsigned long long)networkRequiredInputImageWidth;
-(unsigned long long)networkRequiredInputImageHeight;
-(id)espressoModelFileNameForConfigurationOptions:(id)arg1 ;
-(id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)arg1 ;
-(BOOL)_loadEspressoModelWithConfigurationOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)getWidth:(unsigned long long*)arg1 height:(unsigned long long*)arg2 ofEspressoModelNetworkBlobNamed:(id)arg3 error:(id*)arg4 ;
-(int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)arg1 ;
-(void)dealloc;
@end

