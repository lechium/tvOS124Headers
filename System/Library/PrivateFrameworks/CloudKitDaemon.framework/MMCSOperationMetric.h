/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

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
