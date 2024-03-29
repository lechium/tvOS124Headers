/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsCore.framework/DataDetectorsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataDetectorsCore/DataDetectorsCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface DDScannerResult : NSObject <NSSecureCoding> {

	_DDResult* _coreResult;
	NSArray* _subResultsCache;

}

@property (assign) NSRange range; 
+(id)resultsFromCoreResults:(CFArrayRef)arg1 ;
+(id)resultFromCoreResult:(_DDResult*)arg1 ;
+(BOOL)supportsSecureCoding;
-(long long)score;
-(_DDResult*)coreResult;
-(void)offsetRangeBy:(long long)arg1 ;
-(id)initWithCoreResult:(_DDResult*)arg1 ;
-(SCD_Struct_DD4)cfRange;
-(id)contextualData;
-(id)subResults;
-(void)setSubResults:(id)arg1 ;
-(double)getDuration;
-(id)dateFromReferenceDate:(id)arg1 referenceTimezone:(id)arg2 timezoneRef:(id*)arg3 allDayRef:(BOOL*)arg4 ;
-(BOOL)extractStartDate:(id*)arg1 startTimezone:(id*)arg2 endDate:(id*)arg3 endTimezone:(id*)arg4 allDayRef:(BOOL*)arg5 referenceDate:(id)arg6 referenceTimezone:(id)arg7 ;
-(BOOL)getPhoneValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getMailValue:(id*)arg1 label:(id*)arg2 ;
-(BOOL)getIMScreenNameValue:(id*)arg1 type:(id*)arg2 ;
-(BOOL)getStreet:(id*)arg1 city:(id*)arg2 state:(id*)arg3 zip:(id*)arg4 country:(id*)arg5 ;
-(id)matchedString;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)type;
-(void)setType:(id)arg1 ;
-(id)value;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id)location;
-(NSRange)range;
-(id)rawValue;
-(void)setRange:(NSRange)arg1 ;
@end

