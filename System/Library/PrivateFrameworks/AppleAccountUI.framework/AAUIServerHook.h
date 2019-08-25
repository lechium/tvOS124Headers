/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class AAUIServerHookResponse;


@protocol AAUIServerHook <NSObject>
@property (nonatomic,retain) AAUIServerHookResponse * serverHookResponse; 
@property (assign,nonatomic,__weak) id<AAUIServerHookDelegate> delegate; 
@optional
-(void)harvestDataFromResponse:(id)arg1;
-(AAUIServerHookResponse *)serverHookResponse;
-(void)setServerHookResponse:(id)arg1;

@required
-(BOOL)shouldMatchElement:(id)arg1;
-(BOOL)shouldMatchModel:(id)arg1;
-(void)processElement:(id)arg1 attributes:(id)arg2 objectModel:(id)arg3 completion:(/*^block*/id)arg4;
-(void)processObjectModel:(id)arg1 completion:(/*^block*/id)arg2;
-(void)setDelegate:(id)arg1;
-(id<AAUIServerHookDelegate>)delegate;

@end

