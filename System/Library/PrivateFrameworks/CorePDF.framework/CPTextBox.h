/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPRegion.h>

@interface CPTextBox : CPRegion {

	double rotationAngle;

}
-(void)accept:(id)arg1 ;
-(BOOL)isBoxRegion;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(id)init;
-(CGRect)bounds;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRotated;
@end

