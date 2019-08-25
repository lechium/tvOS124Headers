/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMDaemonCore/IMDAutoReplying.h>

@protocol IMDAutoReplyDelegate;
@class NSString;

@interface IMDCarAutoReplier : NSObject <IMDAutoReplying> {

	id<IMDAutoReplyDelegate> _replyDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<IMDAutoReplyDelegate> replyDelegate; 
-(void)setReplyDelegate:(id<IMDAutoReplyDelegate>)arg1 ;
-(void)processMessages:(id)arg1 inChat:(id)arg2 ;
-(id<IMDAutoReplyDelegate>)replyDelegate;
@end

