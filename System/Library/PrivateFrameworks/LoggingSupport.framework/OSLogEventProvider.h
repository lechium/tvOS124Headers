/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, NSTimeZone, NSUUID, OSLogEventBacktrace, OSLogEventDecomposedMessage;


@protocol OSLogEventProvider
@property (nonatomic,readonly) NSString * composedMessage; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long logType; 
@property (nonatomic,readonly) unsigned long long size; 
@property (nonatomic,readonly) unsigned long long timeToLive; 
@property (nonatomic,readonly) unsigned long long traceIdentifier; 
@property (nonatomic,readonly) unsigned long long threadIdentifier; 
@property (nonatomic,readonly) NSDate * date; 
@property (nonatomic,readonly) NSTimeZone * timeZone; 
@property (nonatomic,readonly) timeval* unixDate; 
@property (nonatomic,readonly) timezone* unixTimeZone; 
@property (nonatomic,readonly) int processIdentifier; 
@property (nonatomic,readonly) unsigned long long activityIdentifier; 
@property (nonatomic,readonly) unsigned long long parentActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long transitionActivityIdentifier; 
@property (nonatomic,readonly) NSUUID * bootUUID; 
@property (nonatomic,readonly) unsigned long long continuousNanosecondsSinceBoot; 
@property (nonatomic,readonly) unsigned long long machContinuousTimestamp; 
@property (nonatomic,readonly) NSUUID * processImageUUID; 
@property (nonatomic,readonly) const char* processImageUUIDBytes; 
@property (nonatomic,readonly) NSString * processImagePath; 
@property (nonatomic,readonly) NSString * process; 
@property (nonatomic,readonly) NSUUID * senderImageUUID; 
@property (nonatomic,readonly) const char* senderImageUUIDBytes; 
@property (nonatomic,readonly) NSString * senderImagePath; 
@property (nonatomic,readonly) NSString * sender; 
@property (nonatomic,readonly) unsigned long long senderImageOffset; 
@property (nonatomic,readonly) OSLogEventBacktrace * backtrace; 
@property (nonatomic,readonly) NSString * subsystem; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * formatString; 
@property (nonatomic,readonly) OSLogEventDecomposedMessage * decomposedMessage; 
@property (nonatomic,readonly) unsigned long long signpostIdentifier; 
@property (nonatomic,readonly) unsigned long long signpostType; 
@property (nonatomic,readonly) unsigned long long signpostScope; 
@property (nonatomic,readonly) NSString * signpostName; 
@property (nonatomic,readonly) unsigned long long creatorActivityIdentifier; 
@property (nonatomic,readonly) unsigned long long creatorProcessUniqueIdentifier; 
@property (nonatomic,readonly) unsigned long long lossStartMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossStartUnixDate; 
@property (nonatomic,readonly) timezone* lossStartUnixTimeZone; 
@property (nonatomic,readonly) unsigned long long lossEndMachContinuousTimestamp; 
@property (nonatomic,readonly) timeval* lossEndUnixDate; 
@property (nonatomic,readonly) timezone* lossEndUnixTimeZone; 
@property (nonatomic,readonly) SCD_Struct_OS1 lossCount; 
@required
-(NSString *)process;
-(unsigned long long)signpostType;
-(unsigned long long)timeToLive;
-(unsigned long long)threadIdentifier;
-(unsigned long long)activityIdentifier;
-(NSString *)composedMessage;
-(unsigned long long)logType;
-(unsigned long long)traceIdentifier;
-(timeval*)unixDate;
-(timezone*)unixTimeZone;
-(unsigned long long)parentActivityIdentifier;
-(unsigned long long)transitionActivityIdentifier;
-(NSUUID *)bootUUID;
-(unsigned long long)continuousNanosecondsSinceBoot;
-(unsigned long long)machContinuousTimestamp;
-(const char*)processImageUUIDBytes;
-(NSUUID *)senderImageUUID;
-(const char*)senderImageUUIDBytes;
-(unsigned long long)senderImageOffset;
-(OSLogEventDecomposedMessage *)decomposedMessage;
-(unsigned long long)signpostScope;
-(NSString *)signpostName;
-(unsigned long long)creatorActivityIdentifier;
-(unsigned long long)creatorProcessUniqueIdentifier;
-(unsigned long long)lossStartMachContinuousTimestamp;
-(timeval*)lossStartUnixDate;
-(timezone*)lossStartUnixTimeZone;
-(unsigned long long)lossEndMachContinuousTimestamp;
-(timeval*)lossEndUnixDate;
-(timezone*)lossEndUnixTimeZone;
-(SCD_Struct_OS1)lossCount;
-(unsigned long long)signpostIdentifier;
-(NSUUID *)processImageUUID;
-(NSString *)processImagePath;
-(NSString *)senderImagePath;
-(NSString *)subsystem;
-(OSLogEventBacktrace *)backtrace;
-(unsigned long long)size;
-(unsigned long long)type;
-(NSDate *)date;
-(NSString *)sender;
-(NSTimeZone *)timeZone;
-(NSString *)category;
-(NSString *)formatString;
-(int)processIdentifier;

@end

