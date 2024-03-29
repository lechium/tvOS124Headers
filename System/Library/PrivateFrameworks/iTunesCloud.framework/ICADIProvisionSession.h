/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ICADIProvisionSession : NSObject {

	unsigned long long _accountID;
	unsigned _sessionID;

}
-(id)initWithAccountID:(unsigned long long)arg1 ;
-(BOOL)startWithServerActionData:(id)arg1 returningClientData:(id*)arg2 error:(id*)arg3 ;
-(BOOL)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id*)arg3 ;
-(void)_destroySession;
-(void)dealloc;
@end

