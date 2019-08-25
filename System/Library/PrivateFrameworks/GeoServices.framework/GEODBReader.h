/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSObject, NSString, NSDictionary;

@interface GEODBReader : NSObject {

	BOOL _defunct;
	BOOL _closed;
	int _editionUpdating;
	NSObject*<OS_dispatch_queue> _readQueue;
	NSString* _path;
	NSDictionary* _pragmaOverrides;
	sqlite3Ref _db;
	sqlite3_stmtRef _tileQuery;
	sqlite3_stmtRef _versionQuery;
	SCD_Struct_GE60* _expirationRecords;
	unsigned long long _expirationRecordCount;

}

@property (assign) BOOL closed; 
-(void)setExpirationRecords:(SCD_Struct_GE60*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithPath:(id)arg1 pragmaOverrides:(id)arg2 ;
-(void)_databaseReset:(id)arg1 ;
-(void)_editionUpdateBegin:(id)arg1 ;
-(void)_editionUpdateEnd:(id)arg1 ;
-(void)_closeDB;
-(void)_openDB;
-(id)_dataForA:(unsigned)arg1 andB:(unsigned)arg2 andC:(unsigned)arg3 andD:(unsigned)arg4 isCurrent:(BOOL*)arg5 eTag:(id*)arg6 ;
-(id)_dataForKey:(GEOTileKey)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(BOOL)closed;
-(void)setClosed:(BOOL)arg1 ;
-(id)dataForKey:(GEOTileKey*)arg1 isCurrent:(BOOL*)arg2 eTag:(id*)arg3 ;
-(void)dataForKey:(GEOTileKey*)arg1 asyncHandler:(/*^block*/id)arg2 ;
-(void)dataForKeys:(GEOTileKeyList*)arg1 callbackQueue:(id)arg2 asyncHandler:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
@end

