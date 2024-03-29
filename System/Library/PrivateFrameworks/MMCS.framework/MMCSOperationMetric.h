/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MMCS/MMCSOperationMetric.h>
@class NSDate, NSMutableSet, NSArray;


@protocol MMCSOperationMetric <NSObject>
@property (readonly) NSDate * startDate; 
@property (readonly) double duration; 
@property (assign) double queueing; 
@property (assign) double executing; 
@property (assign) unsigned long long bytesUploaded; 
@property (assign) unsigned long long bytesDownloaded; 
@property (assign) unsigned long long connections; 
@property (assign) unsigned long long connectionsCreated; 
@property (readonly) NSMutableSet * requestUUIDs; 
@property (readonly) NSArray * rangesCopy; 
@required
-(NSDate *)startDate;
-(unsigned long long)connections;
-(unsigned long long)bytesDownloaded;
-(NSMutableSet *)requestUUIDs;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3;
-(void)addRange:(id)arg1;
-(unsigned long long)connectionsCreated;
-(void)setConnectionsCreated:(unsigned long long)arg1;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1;
-(void)setBytesDownloaded:(unsigned long long)arg1;
-(void)setConnections:(unsigned long long)arg1;
-(double)queueing;
-(void)setQueueing:(double)arg1;
-(double)executing;
-(NSArray *)rangesCopy;
-(void)setExecuting:(double)arg1;
-(double)duration;

@end


@class NSDate, NSMutableSet, NSArray, NSMutableArray, NSString;

@interface MMCSOperationMetric : NSObject <MMCSOperationMetric> {

	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;
	NSMutableSet* _requestUUIDs;
	NSDate* _startDate;
	double _duration;
	NSMutableArray* _ranges;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (nonatomic,retain) NSMutableArray * ranges;                  //@synthesize ranges=_ranges - In the implementation block
@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
@property (readonly) NSMutableSet * requestUUIDs;                      //@synthesize requestUUIDs=_requestUUIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSArray * rangesCopy; 
-(NSDate *)startDate;
-(id)initWithDate:(id)arg1 ;
-(unsigned long long)connections;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)rangesCompleted;
-(id)describeRanges;
-(long long)compareExecutingStartTime:(id)arg1 ;
-(unsigned long long)bytesDownloaded;
-(double)other;
-(NSMutableSet *)requestUUIDs;
-(id)newRangeWithOperationState:(unsigned long long)arg1 startDate:(id)arg2 duration:(double)arg3 ;
-(void)addRange:(id)arg1 ;
-(unsigned long long)connectionsCreated;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(void)setConnections:(unsigned long long)arg1 ;
-(double)queueing;
-(void)setQueueing:(double)arg1 ;
-(double)executing;
-(NSMutableArray *)ranges;
-(void)setRanges:(NSMutableArray *)arg1 ;
-(NSArray *)rangesCopy;
-(double)absoluteStart;
-(double)absoluteStop;
-(long long)compareStartTime:(id)arg1 ;
-(void)setExecuting:(double)arg1 ;
-(NSString *)description;
-(void)setDuration:(double)arg1 ;
-(double)duration;
@end

