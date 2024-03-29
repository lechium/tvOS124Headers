/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSObject;

@interface GEOLogMsgCacheDBInfo : NSObject {

	NSString* _databaseFilePath;
	sqlite3Ref _databaseHandle;
	NSObject*<OS_dispatch_queue> _databaseQueue;
	void* _databaseQueueIdentityKey;
	void* _databaseQueueIdentityValue;
	NSObject*<OS_dispatch_source> _logMessageCacheTransactionTimer;
	BOOL _logMessageCacheTransactionPending;
	long long _pendingLogMessageCount;

}
-(id)initWithQueueName:(const char*)arg1 queueId:(const char*)arg2 ;
@end

