/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBObserverClientInterface
@required
-(void)updateSectionInfo:(id)arg1;
-(void)updateSectionParameters:(id)arg1 forSectionID:(id)arg2;
-(void)noteServerReceivedResponseForBulletin:(id)arg1;
-(void)updateBulletin:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getObserverDebugInfo:(/*^block*/id)arg1;
-(void)removeSection:(id)arg1;

@end

