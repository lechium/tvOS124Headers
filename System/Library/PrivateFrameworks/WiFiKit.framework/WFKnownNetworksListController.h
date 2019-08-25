/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFKnownNetworksViewControllerDelegate.h>

@class WFKnownNetworkStore, NSString;

@interface WFKnownNetworksListController : NSObject <WFKnownNetworksViewControllerDelegate> {

	WFKnownNetworkStore* _knownNetworkStore;

}

@property (nonatomic,retain) WFKnownNetworkStore * knownNetworkStore;              //@synthesize knownNetworkStore=_knownNetworkStore - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(WFKnownNetworkStore *)knownNetworkStore;
-(id)initWithKnownNetworkStore:(id)arg1 ;
-(void)pushKnownNetworksOnParentViewController:(id)arg1 ;
-(void)setKnownNetworkStore:(WFKnownNetworkStore *)arg1 ;
-(id)getKnownNetworksList;
-(void)removeKnownNetworkWithSsid:(id)arg1 ;
-(id)getSecurityTypeStringForNetwork:(id)arg1 ;
-(id)getPasswordForNetwork:(id)arg1 ;
-(BOOL)isNetworkHidden:(id)arg1 ;
-(id)getDateAddedForNetwork:(id)arg1 ;
-(id)getDateLastJoinedForNetwork:(id)arg1 ;
-(BOOL)isNetworkBlacklisted:(id)arg1 ;
-(id)getScoreForNetwork:(id)arg1 ;
-(id)getGeoTagsForNetwork:(id)arg1 ;
@end
