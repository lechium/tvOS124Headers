/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSStunCandidatePairDelegate <NSObject>
@required
-(void)candidatePair:(id)arg1 didReceiveSessionInfo:(id)arg2 success:(BOOL)arg3;
-(void)candidatePair:(id)arg1 didReceiveStunErrorResponse:(long long)arg2 errorCode:(unsigned short)arg3;
-(void)candidatePair:(id)arg1 didAddQREvent:(id)arg2;

@end
