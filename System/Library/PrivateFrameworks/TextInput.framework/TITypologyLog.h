/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID, NSDate, NSString, NSDictionary, TIRollingLog;

@interface TITypologyLog : NSObject <NSCopying> {

	NSUUID* _uuid;
	NSDate* _date;
	NSString* _systemVersion;
	NSString* _buildVersion;
	NSString* _clientIdentifier;
	NSDictionary* _config;
	TIRollingLog* _records;
	TIRollingLog* _traceLog;

}

@property (nonatomic,copy) NSString * clientIdentifier;               //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (nonatomic,readonly) TIRollingLog * records;                //@synthesize records=_records - In the implementation block
@property (nonatomic,readonly) TIRollingLog * traceLog;               //@synthesize traceLog=_traceLog - In the implementation block
@property (nonatomic,readonly) NSUUID * uuid;                         //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) NSDate * date;                         //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * buildVersion;               //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSDictionary * config;                   //@synthesize config=_config - In the implementation block
-(id)propertyList;
-(id)filename;
-(NSString *)clientIdentifier;
-(id)textSummary;
-(id)initWithTypologyLog:(id)arg1 ;
-(id)recordSummary;
-(TIRollingLog *)traceLog;
-(id)initWithPropertyList:(id)arg1 ;
-(void)logToHumanReadableTrace:(id)arg1 ;
-(void)logRecord:(id)arg1 ;
-(void)enumerateRecordsWithBlock:(/*^block*/id)arg1 ;
-(void)enumerateHumanReadableTraceEntriesWithBlock:(/*^block*/id)arg1 ;
-(id)init;
-(NSUUID *)uuid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)date;
-(id)timestamp;
-(NSString *)systemVersion;
-(NSString *)buildVersion;
-(TIRollingLog *)records;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(NSDictionary *)config;
-(void)setConfig:(NSDictionary *)arg1 ;
@end

