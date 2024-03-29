/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface CNTimeIntervalFormatter : NSFormatter {

	NSNumberFormatter* _numberFormatterWith3SigFigs;
	NSNumberFormatter* _numberFormatterWith4SigFigs;

}

@property (nonatomic,readonly) NSNumberFormatter * numberFormatterWith3SigFigs;              //@synthesize numberFormatterWith3SigFigs=_numberFormatterWith3SigFigs - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * numberFormatterWith4SigFigs;              //@synthesize numberFormatterWith4SigFigs=_numberFormatterWith4SigFigs - In the implementation block
+(id)numberFormatterWithSignificantDigits:(unsigned long long)arg1 ;
+(id)multiplierForOrder:(long long)arg1 ;
+(id)stringForTimeInterval:(double)arg1 ;
+(id)sharedFormatter;
-(NSNumberFormatter *)numberFormatterWith3SigFigs;
-(NSNumberFormatter *)numberFormatterWith4SigFigs;
-(id)stringForTimeInterval:(double)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

