/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDDateRangeProtocol.h>

@class NSDate;

@interface _CDDateRange : NSObject <_CDDateRangeProtocol> {

	NSDate* _startDate;
	NSDate* _endDate;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) double duration; 
+(id)periodWithStart:(id)arg1 end:(id)arg2 ;
+(id)periodWithStart:(id)arg1 duration:(double)arg2 ;
+(id)periodWithEnd:(id)arg1 duration:(double)arg2 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)contains:(id)arg1 ;
-(id)initWithStart:(id)arg1 andEnd:(id)arg2 ;
-(id)description;
-(double)duration;
@end
