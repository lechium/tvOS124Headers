/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RTEventHistogram.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventHistogramBase : NSObject <RTEventHistogram, NSSecureCoding>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)addEvent:(id)arg1 ;
-(void)addEvents:(id)arg1 ;
-(void)addEventId:(id)arg1 ;
-(id)allSortedEventIdsWithComparator:(/*^block*/id)arg1 ;
-(id)allEventIds;
-(double)weightForEventId:(id)arg1 ;
-(id)topN:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(id)allSortedByWeightEventIds;
-(void)addEventIds:(id)arg1 ;
-(void)addEvent:(id)arg1 weight:(double)arg2 ;
-(void)addEventId:(id)arg1 weight:(double)arg2 ;
-(id)topN:(unsigned long long)arg1 ;
-(id)top;
-(id)topUsingComparator:(/*^block*/id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)reset;
-(void)clear;
@end
