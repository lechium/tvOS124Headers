/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSWorkspaceClient.h>

@interface FBSUIApplicationWorkspaceClient : FBSWorkspaceClient

@property (nonatomic,__weak,readonly) id<FBSUIApplicationWorkspaceClientDelegate> delegate; 
-(BOOL)_queue_handleMessageWithType:(long long)arg1 message:(id)arg2 ;
-(void)_queue_handleLaunch:(id)arg1 ;
-(void)_queue_handleExit:(id)arg1 ;
-(void)_queue_handleAssertionExpirationImminent:(id)arg1 ;
-(BOOL)willObserveLayersManually;
@end
