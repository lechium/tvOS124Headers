/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet;

@interface PLMomentListCluster : NSObject {

	unsigned long long _month;
	unsigned long long _year;
	unsigned long long _numberOfMoments;
	unsigned long long _numberOfAssets;
	NSMutableSet* __moments;

}

@property (nonatomic,readonly) NSMutableSet * _moments;                         //@synthesize _moments=__moments - In the implementation block
@property (nonatomic,readonly) unsigned long long month;                        //@synthesize month=_month - In the implementation block
@property (nonatomic,readonly) unsigned long long year;                         //@synthesize year=_year - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfMoments;              //@synthesize numberOfMoments=_numberOfMoments - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfAssets;               //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
-(id)initWithMonth:(unsigned long long)arg1 year:(unsigned long long)arg2 ;
-(void)addMoment:(id)arg1 ;
-(void)removeMoment:(id)arg1 ;
-(unsigned long long)peak;
-(unsigned long long)numberOfMoments;
-(NSMutableSet *)_moments;
-(unsigned long long)numberOfAssets;
-(id)init;
-(void)dealloc;
-(unsigned long long)year;
-(unsigned long long)month;
@end

