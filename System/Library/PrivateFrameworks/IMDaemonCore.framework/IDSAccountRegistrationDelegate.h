/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSAccountRegistrationDelegate <NSObject>
@optional
-(void)account:(id)arg1 registrationStatusInfoChanged:(id)arg2;
-(void)account:(id)arg1 aliasesChanged:(id)arg2;
-(void)account:(id)arg1 vettedAliasesChanged:(id)arg2;
-(void)account:(id)arg1 profileChanged:(id)arg2;
-(void)account:(id)arg1 loginChanged:(id)arg2;
-(void)account:(id)arg1 displayNameChanged:(id)arg2;
-(void)refreshRegistrationForAccount:(id)arg1;

@end

