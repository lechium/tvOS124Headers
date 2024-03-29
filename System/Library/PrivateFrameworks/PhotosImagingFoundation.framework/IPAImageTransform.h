/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/IPAImageTransform.h>

@protocol IPAImageTransform
@required
-(id)inverseTransform;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(BOOL)canAlignToPixelsExactly;
-(CGPoint*)mapPoint:(CGPoint)arg1;

@end


@protocol IPAImageGeometry;
@interface IPAImageTransform : NSObject <IPAImageTransform> {

	id<IPAImageGeometry> _inputGeometry;
	id<IPAImageGeometry> _intrinsicGeometry;

}
+(id)identityTransformForGeometry:(id)arg1 ;
+(id)compositeTransforms:(id)arg1 ;
-(id)inverseTransform;
-(id)initWithInputGeometry:(id)arg1 intrinsicGeometry:(id)arg2 ;
-(id)intrinsicGeometry;
-(id)inputGeometry;
-(Vector2d)mapVector:(Vector2d)arg1 ;
-(BOOL)canAlignToPixelsExactly;
-(CGPoint)mapPoint:(CGPoint)arg1 ;
-(id)init;
-(id)description;
@end

