/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, EKAvailabilitySpan;

@interface EKAvailabilityCachedSpan : NSObject {

	NSDate* _creationDate;
	EKAvailabilitySpan* _span;

}

@property (nonatomic,retain) NSDate * creationDate;                  //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) EKAvailabilitySpan * span;              //@synthesize span=_span - In the implementation block
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(EKAvailabilitySpan *)span;
-(void)setSpan:(EKAvailabilitySpan *)arg1 ;
-(id)description;
@end

