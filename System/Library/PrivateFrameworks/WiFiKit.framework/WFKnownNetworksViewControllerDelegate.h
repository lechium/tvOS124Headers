/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFKnownNetworksViewControllerDelegate <NSObject>
@required
-(id)getKnownNetworksList;
-(void)removeKnownNetworkWithSsid:(id)arg1;
-(id)getSecurityTypeStringForNetwork:(id)arg1;
-(id)getPasswordForNetwork:(id)arg1;
-(BOOL)isNetworkHidden:(id)arg1;
-(id)getDateAddedForNetwork:(id)arg1;
-(id)getDateLastJoinedForNetwork:(id)arg1;
-(BOOL)isNetworkBlacklisted:(id)arg1;
-(id)getScoreForNetwork:(id)arg1;
-(id)getGeoTagsForNetwork:(id)arg1;

@end

