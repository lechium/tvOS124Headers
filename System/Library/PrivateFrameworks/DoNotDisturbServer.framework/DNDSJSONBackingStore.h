/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/DNDSBackingStore.h>

@class NSURL, NSString;

@interface DNDSJSONBackingStore : NSObject <DNDSBackingStore> {

	Class _recordClass;
	NSURL* _fileURL;
	unsigned long long _versionNumber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)readAllRecordsWithError:(id*)arg1 lastUpdateDate:(out id*)arg2 ;
-(BOOL)writeAllRecords:(id)arg1 withError:(id*)arg2 ;
-(id)initWithRecordClass:(Class)arg1 fileURL:(id)arg2 versionNumber:(unsigned long long)arg3 ;
@end

