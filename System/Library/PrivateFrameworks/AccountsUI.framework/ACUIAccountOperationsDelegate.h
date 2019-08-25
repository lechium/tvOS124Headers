/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUIAccountOperationsDelegate <NSObject>
@optional
-(BOOL)operationsHelper:(id)arg1 shouldRemoveAccount:(id)arg2;
-(long long)operationsHelper:(id)arg1 shouldRemoveOrDisableAccount:(id)arg2;

@required
-(void)operationsHelper:(id)arg1 willSaveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
-(void)operationsHelper:(id)arg1 willRemoveAccount:(id)arg2;
-(void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(BOOL)arg3 error:(id)arg4;
-(id)operationsHelper:(id)arg1 desiredDataclassActionFromPicker:(id)arg2;

@end

