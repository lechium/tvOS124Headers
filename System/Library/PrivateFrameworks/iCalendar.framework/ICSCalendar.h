/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSComponent.h>

@class NSMutableSet, NSMutableDictionary, NSMutableArray, NSString, ICSDuration, ICSColor;

@interface ICSCalendar : ICSComponent {

	NSMutableSet* _keys;
	NSMutableDictionary* _masters;
	NSMutableDictionary* _occurrences;
	NSMutableDictionary* _timezones;
	NSMutableArray* _parsingErrors;

}

@property (nonatomic,retain) NSString * calscale; 
@property (assign,nonatomic) int method; 
@property (nonatomic,retain) NSString * prodid; 
@property (nonatomic,retain) NSString * version; 
@property (nonatomic,retain) ICSDuration * x_apple_auto_refresh; 
@property (nonatomic,retain) ICSColor * x_apple_calendar_color; 
@property (assign) BOOL x_apple_ignore_on_restore; 
@property (nonatomic,retain) NSString * x_wr_caldesc; 
@property (nonatomic,retain) NSString * x_wr_calname; 
@property (nonatomic,retain) NSString * x_wr_relcalid; 
@property (nonatomic,retain) NSString * x_wr_timezone; 
@property (assign) int x_calendarserver_access; 
+(int)methodFromICSString:(id)arg1 ;
+(int)calendarServerAccessFromICSString:(id)arg1 ;
+(id)calendarWithKnownTimeZones;
+(id)defaultProdid;
+(void)setDefaultProdid:(id)arg1 ;
+(id)ICSStringFromCalendarServerAccess:(int)arg1 ;
+(long long)compareCalendarServerAccess:(int)arg1 withAccess:(int)arg2 ;
+(id)ICSStringFromMethod:(int)arg1 ;
+(id)name;
-(void)addComponent:(id)arg1 ;
-(void)setMethod:(int)arg1 ;
-(void)setComponents:(id)arg1 ;
-(id)componentForKey:(id)arg1 ;
-(id)propertiesToIncludeForChecksumVersion:(int)arg1 ;
-(id)_initWithVersionAndProdID:(BOOL)arg1 ;
-(void)setCalscale:(NSString *)arg1 ;
-(id)systemCalendarForDate:(id)arg1 options:(int)arg2 ;
-(void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2 ;
-(void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2 ;
-(id)_timeZonesForComponents:(id)arg1 options:(int)arg2 ;
-(void)_addComponent:(id)arg1 ;
-(NSString *)calscale;
-(NSString *)prodid;
-(ICSDuration *)x_apple_auto_refresh;
-(void)setX_apple_auto_refresh:(ICSDuration *)arg1 ;
-(ICSColor *)x_apple_calendar_color;
-(void)setX_apple_calendar_color:(ICSColor *)arg1 ;
-(void)setX_wr_caldesc:(NSString *)arg1 ;
-(NSString *)x_wr_caldesc;
-(NSString *)x_wr_calname;
-(NSString *)x_wr_relcalid;
-(void)setX_wr_relcalid:(NSString *)arg1 ;
-(NSString *)x_wr_timezone;
-(void)setX_wr_timezone:(NSString *)arg1 ;
-(void)setComponents:(id)arg1 timeZones:(BOOL)arg2 ;
-(void)addParsingError:(id)arg1 ;
-(id)parsingErrors;
-(void)fixComponent;
-(void)fixPropertiesInheritance;
-(void)fixEntities;
-(void)setComponents:(id)arg1 options:(int)arg2 ;
-(id)systemTimeZoneForDate:(id)arg1 ;
-(void)setProdid:(NSString *)arg1 ;
-(id)componentKeys;
-(id)componentOccurrencesForKey:(id)arg1 ;
-(id)systemDateForDate:(id)arg1 options:(int)arg2 ;
-(id)timeZoneForKey:(id)arg1 ;
-(void)setX_wr_calname:(NSString *)arg1 ;
-(id)init;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)_init;
-(int)method;
@end

