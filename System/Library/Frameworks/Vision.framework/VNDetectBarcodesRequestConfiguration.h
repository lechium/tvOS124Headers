/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNImageBasedRequestConfiguration.h>

@class NSArray, NSString;

@interface VNDetectBarcodesRequestConfiguration : VNImageBasedRequestConfiguration {

	NSArray* _symbologies;
	NSString* _locateMode;

}

@property (nonatomic,copy) NSArray * symbologies;              //@synthesize symbologies=_symbologies - In the implementation block
@property (nonatomic,copy) NSString * locateMode;              //@synthesize locateMode=_locateMode - In the implementation block
-(id)initWithRequestClass:(Class)arg1 ;
-(NSString *)locateMode;
-(NSArray *)symbologies;
-(void)setSymbologies:(NSArray *)arg1 ;
-(void)setLocateMode:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

