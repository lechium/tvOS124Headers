/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString;

@interface _CDStatsPrinter : NSObject {

	NSMutableString* _s;
	unsigned long long _indent;

}
-(void)appendDescription:(id)arg1 ;
-(void)appendDescription:(id)arg1 dateValue:(id)arg2 ;
-(void)appendDescription:(id)arg1 stringValue:(id)arg2 ;
-(void)appendDescription:(id)arg1 integerValue:(long long)arg2 ;
-(void)pushIndent;
-(void)popIndent;
-(void)appendDescription:(id)arg1 elapsedTimeIntervalValue:(double)arg2 ;
-(void)appendDescription:(id)arg1 unsignedIntegerValue:(unsigned long long)arg2 ;
-(void)appendStringValue:(id)arg1 ;
-(id)lineWithDescription:(id)arg1 tab:(BOOL)arg2 ;
-(void)appendLine:(id)arg1 ;
-(id)lineWithDescription:(id)arg1 ;
-(void)appendDescription:(id)arg1 unsignedLongLongValue:(unsigned long long)arg2 ;
-(void)appendDescription:(id)arg1 longLongValue:(long long)arg2 ;
-(void)appendDescription:(id)arg1 boolValue:(BOOL)arg2 ;
-(void)appendDescription:(id)arg1 enabledValue:(BOOL)arg2 ;
-(void)appendDescription:(id)arg1 dateWithTimeIntervalValue:(double)arg2 ;
-(void)appendDescription:(id)arg1 unsignedShortValue:(unsigned short)arg2 ;
-(void)appendDescription:(id)arg1 intValue:(int)arg2 ;
-(void)appendDescription:(id)arg1 successRateWithSuccessCount:(unsigned long long)arg2 failureCount:(unsigned long long)arg3 ;
-(id)init;
-(id)description;
@end

