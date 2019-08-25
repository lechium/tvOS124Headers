/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTMapItemProviderBase.h>
#import <libobjc.A.dylib/RTMapItemProvider.h>

@class RTMapsSupportManager, NSString;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider> {

	RTMapsSupportManager* _mapsSupportManager;

}

@property (nonatomic,retain) RTMapsSupportManager * mapsSupportManager;              //@synthesize mapsSupportManager=_mapsSupportManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)mapItemsWithinDistance:(double)arg1 location:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 error:(id*)arg5 ;
-(RTMapsSupportManager *)mapsSupportManager;
-(id)initWithDistanceCalculator:(id)arg1 mapsSupportManager:(id)arg2 ;
-(void)setMapsSupportManager:(RTMapsSupportManager *)arg1 ;
-(double)confidenceFromMapItemSource:(unsigned long long)arg1 ;
-(id)init;
@end

