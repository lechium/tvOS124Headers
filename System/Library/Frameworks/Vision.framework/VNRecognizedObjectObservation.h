/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNDetectedObjectObservation.h>

@class NSArray;

@interface VNRecognizedObjectObservation : VNDetectedObjectObservation {

	NSArray* _labels;

}

@property (nonatomic,copy,readonly) NSArray * labels;              //@synthesize labels=_labels - In the implementation block
-(NSArray *)labels;
-(id)initWithRequestRevision:(unsigned long long)arg1 boundingBox:(CGRect)arg2 confidence:(float)arg3 labels:(id)arg4 ;
@end

