/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PSIDate, NSString;

@interface PSIDateFilter : NSObject <NSCopying> {

	PSIDate* _singleDate;
	PSIDate* _startDate;
	PSIDate* _endDate;
	NSString* _displayString;

}

@property (readonly) PSIDate * singleDate;                           //@synthesize singleDate=_singleDate - In the implementation block
@property (readonly) PSIDate * startDate;                            //@synthesize startDate=_startDate - In the implementation block
@property (readonly) PSIDate * endDate;                              //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,copy) NSString * displayString;                 //@synthesize displayString=_displayString - In the implementation block
@property (readonly) long long int64RepresentationMask; 
-(PSIDate *)startDate;
-(PSIDate *)endDate;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)initWithStartDateComponents:(id)arg1 endDateComponents:(id)arg2 ;
-(id)initWithStartDateComponents:(id)arg1 ;
-(id)initWithEndDateComponents:(id)arg1 ;
-(id)initWithSingleDateComponents:(id)arg1 ;
-(long long)int64RepresentationMask;
-(PSIDate *)singleDate;
-(id)initWithSingleDate:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayString;
-(void)setDisplayString:(NSString *)arg1 ;
@end

