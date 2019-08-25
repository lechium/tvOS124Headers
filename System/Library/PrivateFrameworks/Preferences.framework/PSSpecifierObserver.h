/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSSpecifierObserver <NSObject>
@property (nonatomic,readonly) long long observerType; 
@required
-(void)dataSource:(id)arg1 performUpdates:(id)arg2;
-(void)invalidateSpecifiersForDataSource:(id)arg1;
-(long long)observerType;

@end
