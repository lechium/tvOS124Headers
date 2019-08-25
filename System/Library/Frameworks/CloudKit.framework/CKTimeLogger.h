/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface CKTimeLogger : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _childLoggers;
	NSMutableDictionary* _logs;
	CKTimeLogger* _parentLogger;
	NSString* _relationMessage;
	double _relationTime;
	NSString* _observedObjectClassName;
	NSString* _observedObjectDescription;
	NSMutableDictionary* _currentSessions;
	NSString* _parentLoggerDescription;

}

@property (retain) NSMutableDictionary * currentSessions;                       //@synthesize currentSessions=_currentSessions - In the implementation block
@property (assign,nonatomic,__weak) CKTimeLogger * parentLogger;                //@synthesize parentLogger=_parentLogger - In the implementation block
@property (nonatomic,retain) NSString * relationMessage;                        //@synthesize relationMessage=_relationMessage - In the implementation block
@property (assign,nonatomic) double relationTime;                               //@synthesize relationTime=_relationTime - In the implementation block
@property (nonatomic,retain) NSString * observedObjectClassName;                //@synthesize observedObjectClassName=_observedObjectClassName - In the implementation block
@property (nonatomic,retain) NSString * observedObjectDescription;              //@synthesize observedObjectDescription=_observedObjectDescription - In the implementation block
@property (nonatomic,retain) NSString * parentLoggerDescription;                //@synthesize parentLoggerDescription=_parentLoggerDescription - In the implementation block
@property (readonly) NSArray * childLoggers; 
@property (readonly) NSDictionary * logs; 
+(id)loggerForObject:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSDictionary *)logs;
-(void)setCurrentSessions:(NSMutableDictionary *)arg1 ;
-(void)setObservedObject:(id)arg1 ;
-(void)setObservedObjectDescription:(NSString *)arg1 ;
-(void)setParentLoggerDescription:(NSString *)arg1 ;
-(NSString *)observedObjectDescription;
-(NSString *)parentLoggerDescription;
-(NSArray *)childLoggers;
-(void)setParentLogger:(CKTimeLogger *)arg1 ;
-(void)setRelationMessage:(NSString *)arg1 ;
-(void)setObservedObjectClassName:(NSString *)arg1 ;
-(NSMutableDictionary *)currentSessions;
-(void)removeChildLogger:(id)arg1 ;
-(void)addChildLogger:(id)arg1 ;
-(void)appendStatusReportToString:(id)arg1 withIndent:(unsigned long long)arg2 showingPointers:(BOOL)arg3 ;
-(id)logsForType:(id)arg1 ;
-(NSString *)relationMessage;
-(double)relationTime;
-(void)appendStatusReportForType:(id)arg1 toString:(id)arg2 withIndent:(unsigned long long)arg3 showingPointers:(BOOL)arg4 ;
-(void)treeTraversalWithBlock:(/*^block*/id)arg1 ;
-(void)appendBriefStatusReportToString:(id)arg1 ;
-(void)addLog:(id)arg1 forType:(id)arg2 ;
-(void)intervalLoggingSessionOfType:(id)arg1 message:(id)arg2 ;
-(void)togglePauseLoggingSessionOfType:(id)arg1 message:(id)arg2 ;
-(void)dumpLogs;
-(void)dumpLogsForType:(id)arg1 ;
-(CKTimeLogger *)parentLogger;
-(void)setRelationTime:(double)arg1 ;
-(NSString *)observedObjectClassName;
-(id)CKStatusReportArray;
-(id)initForObject:(id)arg1 ;
-(void)relateAsChildToParent:(id)arg1 message:(id)arg2 ;
-(void)beginLoggingSessionOfType:(id)arg1 message:(id)arg2 ;
-(void)endLoggingSessionOfType:(id)arg1 message:(id)arg2 ;
-(void)addCustomLogOfType:(id)arg1 message:(id)arg2 from:(double)arg3 to:(double)arg4 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

