/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MPULayoutInterpolator : NSObject <NSCopying> {

	vector<MPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MPU::LayoutInterpolator::EntriesContainer> >* _entriesContainers;
	BOOL _hasEntryWithSpecificSecondaryReferenceMetric;

}
-(void)addValue:(double)arg1 forReferenceMetric:(double)arg2 secondaryReferenceMetric:(double)arg3 ;
-(double)valueForReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 ;
-(void)addValue:(double)arg1 forReferenceMetric:(double)arg2 ;
-(double)_interpolatedValueForPrimaryReferenceMetric:(double)arg1 secondaryReferenceMetric:(double)arg2 betweenFirstEntriesContainer:(EntriesContainer*)arg3 andSecondEntriesContainer:(EntriesContainer*)arg4 ;
-(double)valueForReferenceMetric:(double)arg1 ;
-(vector<MPU::Point3D, std::__1::allocator<MPU::Point3D> >*)_sortedPointsFor3DInterpolationFromEntriesContainer:(EntriesContainer*)arg1 usingQueriedPoint:(Point3D)arg2 fallbackSecondaryReferenceMetric:(double)arg3 ;
-(void)_sortPointsFor3DInterpolation:(vector<MPU::Point3D, std::__1::allocator<MPU::Point3D> >*)arg1 usingQueriedPoint:(Point3D)arg2 ;
-(Point3D)_pointForEntry:(Entry)arg1 andPrimaryReferenceMetric:(double)arg2 usingFallbackSecondaryReferenceMetric:(double)arg3 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

