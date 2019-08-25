/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ATVUpdatable
@optional
-(void)restoreState:(id)arg1;
-(void)updateWithFeedElement:(id)arg1 state:(id)arg2 forceReload:(BOOL)arg3;
-(void)reloadPage;
-(id)currentState;

@required
-(id)currentFeedElement;
-(void)updateWithFeedElement:(id)arg1;

@end
