/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNDetector.h>
#import <libobjc.A.dylib/VNDetectorKeyProviding.h>

@class NSString;

@interface VNFaceDetector : VNDetector <VNDetectorKeyProviding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldDumpDebugIntermediates;
+(Class)detectorClassForConfigurationOptions:(id)arg1 error:(id*)arg2 ;
+(void)recordDefaultConfigurationOptionsInDictionary:(id)arg1 ;
+(void)fullyPopulateConfigurationOptions:(id)arg1 ;
-(void)purgeIntermediates;
@end

