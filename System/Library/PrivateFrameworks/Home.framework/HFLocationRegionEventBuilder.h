/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFEventBuilder.h>
#import <libobjc.A.dylib/HFLocationEventBuilder.h>

@class CLCircularRegion, NSString;

@interface HFLocationRegionEventBuilder : HFEventBuilder <HFLocationEventBuilder> {

	CLCircularRegion* _region;

}

@property (nonatomic,copy) CLCircularRegion * region;                     //@synthesize region=_region - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long eventType; 
-(unsigned long long)eventType;
-(id)buildNewEventFromCurrentState;
-(BOOL)isRegionAtHome:(id)arg1 ;
-(NSString *)description;
-(void)setRegion:(CLCircularRegion *)arg1 ;
-(CLCircularRegion *)region;
-(id)initWithEvent:(id)arg1 ;
@end
