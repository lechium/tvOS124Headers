/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BBSettingsGatewayServerInterface <NSObject>
@required
-(void)getSectionInfoWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForActiveSectionsWithHandler:(/*^block*/id)arg1;
-(void)getSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)getEffectiveGlobalContentPreviewsSettingWithHandler:(/*^block*/id)arg1;
-(void)setEffectiveGlobalContentPreviewsSetting:(long long)arg1;
-(void)getSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionID:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)getEffectiveSectionInfoForSectionIDs:(id)arg1 withHandler:(/*^block*/id)arg2;
-(void)setSectionInfo:(id)arg1 forSectionID:(id)arg2;

@end

