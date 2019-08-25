/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class NSDictionary;

@interface BWCameraParameters : NSObject {

	NSDictionary* _cameraTuningParameters;

}

@property (nonatomic,readonly) NSDictionary * cameraTuningParameters;              //@synthesize cameraTuningParameters=_cameraTuningParameters - In the implementation block
+(void)initialize;
+(id)sharedInstance;
-(BOOL)useFPCParametersForCameraInfoByPortType:(id)arg1 sensorIDDict:(id)arg2 ;
-(BOOL)panoramaRequiresLTMLockingForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(id)_initWithModelSpecificName:(id)arg1 ;
-(id)sensorIDDictionaryForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(id)focalLengthCharacterizationForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(BOOL)disparityRefinementEnabledForStream:(OpaqueFigCaptureStreamRef)arg1 ;
-(NSDictionary *)cameraTuningParameters;
-(id)init;
-(void)dealloc;
@end
