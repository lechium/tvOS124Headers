/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetPropertySet.h>

@class NSDate;

@interface PHAssetCurationProperties : PHAssetPropertySet {

	float _interestingSubjectScore;
	NSDate* _addedDate;

}

@property (nonatomic,readonly) NSDate * addedDate;                         //@synthesize addedDate=_addedDate - In the implementation block
@property (nonatomic,readonly) float interestingSubjectScore;              //@synthesize interestingSubjectScore=_interestingSubjectScore - In the implementation block
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
-(NSDate *)addedDate;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(float)interestingSubjectScore;
@end
