/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailboxRequest.h>

@interface DAMailboxSetFlagsRequest : DAMailboxRequest {

	unsigned long long _onFlags;
	unsigned long long _offFlags;

}

@property (assign,nonatomic) unsigned long long onFlags;               //@synthesize onFlags=_onFlags - In the implementation block
@property (assign,nonatomic) unsigned long long offFlags;              //@synthesize offFlags=_offFlags - In the implementation block
-(void)setOnFlags:(unsigned long long)arg1 ;
-(void)setOffFlags:(unsigned long long)arg1 ;
-(id)initRequestWithSetFlags:(unsigned long long)arg1 unsetFlags:(unsigned long long)arg2 message:(id)arg3 ;
-(unsigned long long)onFlags;
-(unsigned long long)offFlags;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

