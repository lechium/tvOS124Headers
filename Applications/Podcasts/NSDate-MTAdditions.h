//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSDate.h"

@interface NSDate (MTAdditions)
+ (id)mt_lessVerboseDateFormatter;	// IMP=0x000000010003478c
+ (id)mt_verboseDateFormatter;	// IMP=0x0000000100034674
+ (id)mt_dateFormatterNoYearAbbrevMonth;	// IMP=0x000000010003455c
+ (id)mt_dateFormatterNoYear;	// IMP=0x0000000100034444
+ (id)mt_dateFormatterShortStyleWithYear;	// IMP=0x0000000100034354
+ (id)mt_dateFormatterNoDayWithYear;	// IMP=0x000000010003423c
+ (id)mt_dateFormatterJustYear;	// IMP=0x00000001000340f4
+ (id)mt_dateFormatterWithYear;	// IMP=0x0000000100033fdc
+ (double)maxWidthForMicroFriendlyDateStringWithFont:(id)arg1;	// IMP=0x0000000100033e9c
+ (id)dayOfWeekFromDate:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x0000000100033648
- (id)mt_dateWithDeltaDays:(long long)arg1;	// IMP=0x00000001000349b4
- (_Bool)isLessThanWeekOld;	// IMP=0x00000001000348a4
- (_Bool)isSameDayOfWeekAs:(id)arg1;	// IMP=0x0000000100033df4
- (_Bool)inSameYearAs:(id)arg1;	// IMP=0x0000000100033d00
- (_Bool)isThisYear;	// IMP=0x0000000100033ca0
- (id)timeString;	// IMP=0x0000000100033bd8
- (id)verboseDisplayStringWithoutTime;	// IMP=0x0000000100033b74
- (id)lessVerboseDisplayString;	// IMP=0x0000000100033a44
- (id)verboseDisplayString;	// IMP=0x0000000100033914
- (id)nanoFriendlyDisplayString;	// IMP=0x0000000100033424
- (id)microFriendlyDisplayString;	// IMP=0x0000000100033200
- (id)abbreviatedFriendlyDisplayString;	// IMP=0x0000000100032fdc
- (id)yearString;	// IMP=0x0000000100032f78
- (id)friendlyDisplayString;	// IMP=0x0000000100032d54
@end
