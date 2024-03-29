/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _DKEvent, NSDate;

@interface _DKSyncWindow : NSObject {

	_DKEvent* _event;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,retain) _DKEvent * event;                //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(id)unionOfSortedSyncWindows:(id)arg1 ;
+(id)windowsThatOverlapWithWindowMinimumDate:(id)arg1 windowMaximumDate:(id)arg2 sortedSyncWindows:(id)arg3 ;
+(id)lastWindowMissingFromSortedWindows:(id)arg1 windowMinimumDate:(id)arg2 windowMaximumDate:(id)arg3 ;
+(id)syncWindowWithStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)redundantWindowsFromSortedWindows:(id)arg1 olderThanDate:(id)arg2 ;
+(id)linearDescriptionOfSortedWindows:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setEndDate:(NSDate *)arg1 ;
-(id)unionWithSyncWindow:(id)arg1 ;
-(BOOL)isEqualToWindow:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(long long)compare:(id)arg1 ;
-(_DKEvent *)event;
-(void)setEvent:(_DKEvent *)arg1 ;
-(id)initWithEvent:(id)arg1 ;
@end

