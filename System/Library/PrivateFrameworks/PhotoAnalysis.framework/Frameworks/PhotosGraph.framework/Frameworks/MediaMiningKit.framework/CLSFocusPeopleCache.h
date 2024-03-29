/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, PHPhotoLibrary;

@interface CLSFocusPeopleCache : NSObject {

	NSSet* _peopleUUIDs;
	unsigned long long _maximumNumberOfPeople;
	PHPhotoLibrary* _photoLibrary;

}

@property (assign,nonatomic,__weak) PHPhotoLibrary * photoLibrary;                  //@synthesize photoLibrary=_photoLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long maximumNumberOfPeople;              //@synthesize maximumNumberOfPeople=_maximumNumberOfPeople - In the implementation block
@property (nonatomic,readonly) NSSet * peopleUUIDs;                                 //@synthesize peopleUUIDs=_peopleUUIDs - In the implementation block
+(id)_personSortDescriptors;
-(PHPhotoLibrary *)photoLibrary;
-(void)setPhotoLibrary:(PHPhotoLibrary *)arg1 ;
-(id)_collectValidPeopleUUIDs;
-(unsigned long long)maximumNumberOfPeople;
-(void)setMaximumNumberOfPeople:(unsigned long long)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 maximumNumberOfPeople:(unsigned long long)arg2 ;
-(NSSet *)peopleUUIDs;
-(void)invalidate;
@end

