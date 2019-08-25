/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirTraffic/AirTraffic-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSArray, NSDictionary, NSError, ATSession;

@interface ATSessionTask : NSObject <NSSecureCoding, NSCopying> {

	BOOL _finished;
	BOOL _running;
	BOOL _cancelled;
	NSString* _sessionTaskIdentifier;
	NSString* _sessionGroupingKey;
	NSString* _localizedDescription;
	double _progress;
	unsigned long long _totalItemCount;
	unsigned long long _completedItemCount;
	NSNumber* _totalBytesToTransfer;
	NSNumber* _totalBytesTransferred;
	NSArray* _currentItemDescriptions;
	NSArray* _currentItems;
	NSDictionary* _properties;
	NSError* _error;
	ATSession* _session;
	double _startTime;
	double _finishTime;

}

@property (getter=isRunning) BOOL running;                             //@synthesize running=_running - In the implementation block
@property (getter=isFinished) BOOL finished;                           //@synthesize finished=_finished - In the implementation block
@property (getter=isCancelled) BOOL cancelled;                         //@synthesize cancelled=_cancelled - In the implementation block
@property (__weak) ATSession * session;                                //@synthesize session=_session - In the implementation block
@property (copy) NSString * sessionTaskIdentifier;                     //@synthesize sessionTaskIdentifier=_sessionTaskIdentifier - In the implementation block
@property (copy) NSString * localizedDescription;                      //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (copy) NSString * sessionGroupingKey;                        //@synthesize sessionGroupingKey=_sessionGroupingKey - In the implementation block
@property (assign) double progress;                                    //@synthesize progress=_progress - In the implementation block
@property (assign) unsigned long long totalItemCount;                  //@synthesize totalItemCount=_totalItemCount - In the implementation block
@property (assign) unsigned long long completedItemCount;              //@synthesize completedItemCount=_completedItemCount - In the implementation block
@property (copy) NSError * error;                                      //@synthesize error=_error - In the implementation block
@property (copy) NSArray * currentItemDescriptions;                    //@synthesize currentItemDescriptions=_currentItemDescriptions - In the implementation block
@property (copy) NSArray * currentItems;                               //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSDictionary * properties;                            //@synthesize properties=_properties - In the implementation block
@property (copy) NSNumber * totalBytesToTransfer;                      //@synthesize totalBytesToTransfer=_totalBytesToTransfer - In the implementation block
@property (copy) NSNumber * totalBytesTransferred;                     //@synthesize totalBytesTransferred=_totalBytesTransferred - In the implementation block
@property (assign) double startTime;                                   //@synthesize startTime=_startTime - In the implementation block
@property (assign) double finishTime;                                  //@synthesize finishTime=_finishTime - In the implementation block
@property (readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(void)setTotalBytesTransferred:(NSNumber *)arg1 ;
-(NSNumber *)totalBytesTransferred;
-(void)setSession:(ATSession *)arg1 ;
-(ATSession *)session;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)setFinishTime:(double)arg1 ;
-(NSArray *)currentItems;
-(unsigned long long)totalItemCount;
-(NSString *)sessionTaskIdentifier;
-(id)baseClassRepresentation;
-(double)finishTime;
-(void)setSessionTaskIdentifier:(NSString *)arg1 ;
-(void)setSessionGroupingKey:(NSString *)arg1 ;
-(NSArray *)currentItemDescriptions;
-(NSString *)sessionGroupingKey;
-(void)setCompletedItemCount:(unsigned long long)arg1 ;
-(void)setTotalItemCount:(unsigned long long)arg1 ;
-(NSNumber *)totalBytesToTransfer;
-(unsigned long long)completedItemCount;
-(void)setTotalBytesToTransfer:(NSNumber *)arg1 ;
-(void)setCurrentItemDescriptions:(NSArray *)arg1 ;
-(void)setCurrentItems:(NSArray *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(double)duration;
-(BOOL)isRunning;
-(void)cancel;
-(void)start;
-(BOOL)isCancelled;
-(double)progress;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)localizedDescription;
-(void)_start;
-(void)setProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)properties;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(BOOL)isFinished;
-(void)setRunning:(BOOL)arg1 ;
@end

