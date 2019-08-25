/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <PhotosImagingFoundation/IPAImageSizePolicy.h>

@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {

	NSArray* _policies;

}
-(CGSize)transformSize:(CGSize)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(double)transformScaleForSize:(CGSize)arg1 ;
-(BOOL)isBestFitPolicy;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

