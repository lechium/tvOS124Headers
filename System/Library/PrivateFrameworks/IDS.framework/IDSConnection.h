/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSConnection, IDSAccount;

@interface IDSConnection : NSObject {

	_IDSConnection* _internal;

}

@property (nonatomic,readonly) _IDSConnection * _internal; 
@property (nonatomic,readonly) IDSAccount * account; 
@property (nonatomic,readonly) BOOL isActive; 
+(id)_connectionWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 ;
-(_IDSConnection *)_internal;
-(id)_initWithAccount:(id)arg1 commands:(id)arg2 indirectDelegateCallouts:(BOOL)arg3 ;
-(id)initWithAccount:(id)arg1 commands:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 options:(id)arg3 identifier:(id*)arg4 error:(id*)arg5 ;
-(void)removeDelegate:(id)arg1 ;
-(id)initWithAccount:(id)arg1 ;
-(BOOL)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(BOOL)sendData:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(IDSAccount *)account;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
-(BOOL)sendMessage:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6 ;
-(void)dealloc;
-(BOOL)isActive;
@end

