/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSLocale, NSNumberFormatter;

@interface NSMeasurementFormatter : NSFormatter <NSSecureCoding> {

	void* _formatter;

}

@property (assign) unsigned long long unitOptions; 
@property (assign) long long unitStyle; 
@property (copy) NSLocale * locale; 
@property (copy) NSNumberFormatter * numberFormatter; 
+(BOOL)supportsSecureCoding;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(NSNumberFormatter *)numberFormatter;
-(unsigned long long)unitOptions;
-(void)setUnitOptions:(unsigned long long)arg1 ;
-(id)stringFromUnit:(id)arg1 ;
-(id)stringFromMeasurement:(id)arg1 ;
-(id)measurementFromString:(id)arg1 ;
-(long long)unitStyle;
-(void)setUnitStyle:(long long)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end
