/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IMDAutoReplying <NSObject>
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
@required
-(void)setReplyDelegate:(id)arg1;
-(void)processMessages:(id)arg1 inChat:(id)arg2;
-(id<IMDAutoReplyDelegate>)replyDelegate;

@end
