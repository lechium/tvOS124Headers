/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOMapService, NSString, NSArray, NSData;

@interface RTCalendarExporter : NSObject {

	GEOMapService* _mapService;
	BOOL _compress;
	NSString* _calendarName;
	NSString* _calendarColor;
	NSArray* _locationsOfInterest;

}

@property (assign,nonatomic) BOOL compress;                            //@synthesize compress=_compress - In the implementation block
@property (nonatomic,copy) NSString * calendarName;                    //@synthesize calendarName=_calendarName - In the implementation block
@property (nonatomic,copy) NSString * calendarColor;                   //@synthesize calendarColor=_calendarColor - In the implementation block
@property (nonatomic,copy) NSArray * locationsOfInterest;              //@synthesize locationsOfInterest=_locationsOfInterest - In the implementation block
@property (readonly) NSData * data; 
-(NSArray *)locationsOfInterest;
-(void)setLocationsOfInterest:(NSArray *)arg1 ;
-(BOOL)compress;
-(BOOL)writeToURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithMapService:(id)arg1 ;
-(void)setCompress:(BOOL)arg1 ;
-(NSString *)calendarName;
-(void)setCalendarName:(NSString *)arg1 ;
-(NSString *)calendarColor;
-(void)setCalendarColor:(NSString *)arg1 ;
-(id)init;
-(NSData *)data;
-(id)calendar;
-(id)components;
-(id)document;
@end
