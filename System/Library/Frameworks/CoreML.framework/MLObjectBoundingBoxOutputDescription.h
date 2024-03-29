/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MLObjectBoundingBoxOutputDescription : NSObject {

	int _format;
	NSString* _confidenceFeatureName;
	NSString* _coordinatesFeatureName;
	NSArray* _labelNames;

}

@property (assign) int format;                                     //@synthesize format=_format - In the implementation block
@property (retain) NSString * confidenceFeatureName;               //@synthesize confidenceFeatureName=_confidenceFeatureName - In the implementation block
@property (retain) NSString * coordinatesFeatureName;              //@synthesize coordinatesFeatureName=_coordinatesFeatureName - In the implementation block
@property (retain) NSArray * labelNames;                           //@synthesize labelNames=_labelNames - In the implementation block
-(void)setFormat:(int)arg1 ;
-(void)setConfidenceFeatureName:(NSString *)arg1 ;
-(void)setCoordinatesFeatureName:(NSString *)arg1 ;
-(void)setLabelNames:(NSArray *)arg1 ;
-(NSString *)coordinatesFeatureName;
-(NSString *)confidenceFeatureName;
-(NSArray *)labelNames;
-(int)format;
@end

