/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBUISceneClientIdentity;


@protocol FBUISceneClientWorkspace <NSObject>
@property (nonatomic,retain,readonly) id<FBUIProcess> clientProcess; 
@property (nonatomic,copy,readonly) FBUISceneClientIdentity * clientIdentity; 
@required
-(id<FBUIProcess>)clientProcess;
-(FBUISceneClientIdentity *)clientIdentity;
-(id)clientForSceneIdentifier:(id)arg1;
-(void)beginTransaction;
-(void)endTransaction;

@end

