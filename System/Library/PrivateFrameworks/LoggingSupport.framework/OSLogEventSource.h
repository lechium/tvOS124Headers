/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSMutableArray, _OSLogCollectionReference, _OSLogEventStoreMetadata, _OSLogEventStoreTimeRef, NSUUID, NSDate;

@interface OSLogEventSource : NSObject {

	NSMutableArray* _fileRefs;
	_OSLogCollectionReference* _lcr;
	_OSLogEventStoreMetadata* _lesm;
	_OSLogEventStoreTimeRef* _oldestTimeRef;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,retain) NSMutableArray * _fileRefs;                             //@synthesize fileRefs=_fileRefs - In the implementation block
@property (nonatomic,readonly) os_timesync_db_sRef tsdb;                             //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,readonly) _OSLogCollectionReference * lcr;                      //@synthesize lcr=_lcr - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreMetadata * lesm;                      //@synthesize lesm=_lesm - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * oldestTimeRef;              //@synthesize oldestTimeRef=_oldestTimeRef - In the implementation block
@property (nonatomic,readonly) _OSLogEventStoreTimeRef * newestTimeRef; 
@property (nonatomic,readonly) NSUUID * uniqueIdentifier; 
@property (nonatomic,readonly) NSDate * oldestDate; 
@property (nonatomic,readonly) NSDate * newestDate; 
-(os_timesync_db_sRef)tsdb;
-(NSMutableArray *)_fileRefs;
-(id)initWithCollection:(id)arg1 metadata:(id)arg2 timesync:(os_timesync_db_sRef)arg3 ;
-(void)_insertIndexFile:(id)arg1 ;
-(void)_enumerateIndexFiles:(/*^block*/id)arg1 ;
-(_OSLogEventStoreTimeRef *)newestTimeRef;
-(NSDate *)oldestDate;
-(NSDate *)newestDate;
-(void)set_fileRefs:(NSMutableArray *)arg1 ;
-(_OSLogCollectionReference *)lcr;
-(_OSLogEventStoreMetadata *)lesm;
-(_OSLogEventStoreTimeRef *)oldestTimeRef;
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
@end

