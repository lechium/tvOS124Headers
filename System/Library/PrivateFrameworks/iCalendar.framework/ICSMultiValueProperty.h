/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iCalendar/ICSProperty.h>

@interface ICSMultiValueProperty : ICSProperty
-(BOOL)isMultiValued;
-(void)_ICSStringWithOptions:(unsigned long long)arg1 appendingToString:(id)arg2 ;
-(void)_setParsedValues:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setValues:(id)arg1 valueType:(unsigned long long)arg2 ;
-(void)setValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)initWithValue:(id)arg1 type:(unsigned long long)arg2 ;
-(id)value;
-(id)values;
@end

