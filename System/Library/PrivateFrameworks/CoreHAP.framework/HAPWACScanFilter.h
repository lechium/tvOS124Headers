/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSObject;

@interface HAPWACScanFilter : HMFObject {

	NSDictionary* _identifiersForDiscoveredAccessories;
	NSDictionary* _lastSeenTracking;
	double _ageOutTimePeriod;
	unsigned long long _filterMethod;
	NSObject*<OS_dispatch_queue> _propertyQueue;

}

@property (nonatomic,retain) NSDictionary * identifiersForDiscoveredAccessories;              //@synthesize identifiersForDiscoveredAccessories=_identifiersForDiscoveredAccessories - In the implementation block
@property (nonatomic,retain) NSDictionary * lastSeenTracking;                                 //@synthesize lastSeenTracking=_lastSeenTracking - In the implementation block
@property (assign,nonatomic) double ageOutTimePeriod;                                         //@synthesize ageOutTimePeriod=_ageOutTimePeriod - In the implementation block
@property (assign,nonatomic) unsigned long long filterMethod;                                 //@synthesize filterMethod=_filterMethod - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                    //@synthesize propertyQueue=_propertyQueue - In the implementation block
-(id)filterScanResult:(id)arg1 ;
-(id)removedAccessories;
-(NSDictionary *)identifiersForDiscoveredAccessories;
-(NSDictionary *)lastSeenTracking;
-(void)setIdentifiersForDiscoveredAccessories:(NSDictionary *)arg1 ;
-(void)setLastSeenTracking:(NSDictionary *)arg1 ;
-(double)ageOutTimePeriod;
-(id)initWithFilterMethod:(unsigned long long)arg1 ;
-(void)setAgeOutTimePeriod:(double)arg1 ;
-(unsigned long long)filterMethod;
-(void)setFilterMethod:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)dealloc;
@end

