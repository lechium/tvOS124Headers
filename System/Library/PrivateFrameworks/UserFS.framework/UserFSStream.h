/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class UserFSItem, NSObject;

@interface UserFSStream : NSObject {

	UserFSItem* _item;
	unsigned long long _length;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) UserFSItem * item;                                //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) unsigned long long length;                        //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) BOOL writable; 
-(id)initWithUserFSItem:(id)arg1 length:(unsigned long long)arg2 connection:(id)arg3 ;
-(long long)_readBytesUpToLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
-(void)_cancelConnection;
-(BOOL)writable;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(long long)readBytesOfLength:(unsigned long long)arg1 atOffset:(unsigned long long)arg2 toBuffer:(void*)arg3 error:(id*)arg4 ;
-(unsigned long long)length;
-(void)dealloc;
-(void)setItem:(UserFSItem *)arg1 ;
-(UserFSItem *)item;
-(void)setLength:(unsigned long long)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
@end

