/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:33 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface CKMetric : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	double _duration;
	double _queueing;
	double _executing;
	unsigned long long _bytesUploaded;
	unsigned long long _bytesDownloaded;
	unsigned long long _connections;
	unsigned long long _connectionsCreated;

}

@property (nonatomic,retain) NSDate * startDate;                       //@synthesize startDate=_startDate - In the implementation block
@property (assign) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign) double queueing;                                    //@synthesize queueing=_queueing - In the implementation block
@property (assign) double executing;                                   //@synthesize executing=_executing - In the implementation block
@property (assign) unsigned long long bytesUploaded;                   //@synthesize bytesUploaded=_bytesUploaded - In the implementation block
@property (assign) unsigned long long bytesDownloaded;                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (assign) unsigned long long connections;                     //@synthesize connections=_connections - In the implementation block
@property (assign) unsigned long long connectionsCreated;              //@synthesize connectionsCreated=_connectionsCreated - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)startDate;
-(unsigned long long)connections;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)unionMetric:(id)arg1 ;
-(unsigned long long)bytesDownloaded;
-(id)CKPropertiesDescription;
-(unsigned long long)connectionsCreated;
-(void)setConnectionsCreated:(unsigned long long)arg1 ;
-(unsigned long long)bytesUploaded;
-(void)setBytesUploaded:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(void)setConnections:(unsigned long long)arg1 ;
-(double)queueing;
-(void)setQueueing:(double)arg1 ;
-(double)executing;
-(void)setExecuting:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDuration:(double)arg1 ;
-(double)duration;
@end

