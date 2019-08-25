/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/DNDSBackingStoreRecord.h>
#import <libobjc.A.dylib/DNDSSyncRecord.h>

@class NSString, NSNumber;

@interface DNDSModeAssertionRecord : NSObject <NSCopying, NSMutableCopying, DNDSBackingStoreRecord, DNDSSyncRecord> {

	NSString* _assertionUUID;
	NSNumber* _assertionStartDateTimestamp;
	NSString* _assertionClientIdentifier;
	NSString* _assertionDetailsIdentifier;
	NSString* _assertionDetailsModeIdentifier;
	NSString* _assertionDetailsLifetimeType;
	NSNumber* _assertionDetailsUserRequested;
	NSNumber* _assertionDetailsSyncSuppressionOptions;
	NSString* _assertionDetailsCalendarEventLifetimeEventUniqueIdentifier;
	NSNumber* _assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp;
	NSNumber* _assertionDetailsCalendarEventLifetimeOnlyDuringEvent;
	NSNumber* _assertionDetailsDateIntervalLifetimeStartDateTimestamp;
	NSNumber* _assertionDetailsDateIntervalLifetimeEndDateTimestamp;

}

@property (nonatomic,copy,readonly) NSString * assertionUUID;                                                             //@synthesize assertionUUID=_assertionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionStartDateTimestamp;                                               //@synthesize assertionStartDateTimestamp=_assertionStartDateTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionClientIdentifier;                                                 //@synthesize assertionClientIdentifier=_assertionClientIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionDetailsIdentifier;                                                //@synthesize assertionDetailsIdentifier=_assertionDetailsIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionDetailsModeIdentifier;                                            //@synthesize assertionDetailsModeIdentifier=_assertionDetailsModeIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionDetailsUserRequested;                                             //@synthesize assertionDetailsUserRequested=_assertionDetailsUserRequested - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionDetailsSyncSuppressionOptions;                                    //@synthesize assertionDetailsSyncSuppressionOptions=_assertionDetailsSyncSuppressionOptions - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionDetailsLifetimeType;                                              //@synthesize assertionDetailsLifetimeType=_assertionDetailsLifetimeType - In the implementation block
@property (nonatomic,copy,readonly) NSString * assertionDetailsCalendarEventLifetimeEventUniqueIdentifier;                //@synthesize assertionDetailsCalendarEventLifetimeEventUniqueIdentifier=_assertionDetailsCalendarEventLifetimeEventUniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp;              //@synthesize assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp=_assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionDetailsCalendarEventLifetimeOnlyDuringEvent;                      //@synthesize assertionDetailsCalendarEventLifetimeOnlyDuringEvent=_assertionDetailsCalendarEventLifetimeOnlyDuringEvent - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionDetailsDateIntervalLifetimeStartDateTimestamp;                    //@synthesize assertionDetailsDateIntervalLifetimeStartDateTimestamp=_assertionDetailsDateIntervalLifetimeStartDateTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * assertionDetailsDateIntervalLifetimeEndDateTimestamp;                      //@synthesize assertionDetailsDateIntervalLifetimeEndDateTimestamp=_assertionDetailsDateIntervalLifetimeEndDateTimestamp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)migrateDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)_initWithRecord:(id)arg1 ;
-(NSString *)assertionDetailsLifetimeType;
-(NSString *)assertionDetailsCalendarEventLifetimeEventUniqueIdentifier;
-(NSNumber *)assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp;
-(NSNumber *)assertionDetailsCalendarEventLifetimeOnlyDuringEvent;
-(NSNumber *)assertionStartDateTimestamp;
-(NSNumber *)assertionDetailsDateIntervalLifetimeEndDateTimestamp;
-(NSNumber *)assertionDetailsUserRequested;
-(NSNumber *)assertionDetailsSyncSuppressionOptions;
-(NSString *)assertionDetailsIdentifier;
-(NSString *)assertionDetailsModeIdentifier;
-(NSString *)assertionUUID;
-(NSString *)assertionClientIdentifier;
-(NSNumber *)assertionDetailsDateIntervalLifetimeStartDateTimestamp;
-(id)_initWithAssertionUUID:(id)arg1 assertionStartDateTimestamp:(id)arg2 assertionClientIdentifier:(id)arg3 assertionDetailsIdentifier:(id)arg4 assertionDetailsModeIdentifier:(id)arg5 assertionDetailsLifetimeType:(id)arg6 assertionDetailsUserRequested:(id)arg7 assertionDetailsSyncSuppressionOptions:(id)arg8 assertionDetailsCalendarEventLifetimeEventUniqueIdentifier:(id)arg9 assertionDetailsCalendarEventLifetimeOccurrenceDateTimestamp:(id)arg10 assertionDetailsCalendarEventLifetimeOnlyDuringEvent:(id)arg11 assertionDetailsDateIntervalLifetimeStartDateTimestamp:(id)arg12 assertionDetailsDateIntervalLifetimeEndDateTimestamp:(id)arg13 ;
-(id)initWithSyncDictionaryRepresentation:(id)arg1 ;
-(id)syncDictionaryRepresentation;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

