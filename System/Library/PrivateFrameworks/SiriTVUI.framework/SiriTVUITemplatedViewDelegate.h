/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SiriTVUITemplatedViewDelegate <NSObject>
@optional
-(CGPoint*)offsetForItemAtIndexPath:(id)arg1;
-(unsigned long long)presentationOptionsForItemAtIndexPath:(id)arg1;
-(BOOL)shouldBeOffScreenInPartialForItemAtIndexPath:(id)arg1;
-(UIEdgeInsets*)fullScreenPaddingDeltaForItemAtIndexPath:(id)arg1;

@required
-(UIEdgeInsets*)paddingForItemAtIndexPath:(id)arg1;

@end
