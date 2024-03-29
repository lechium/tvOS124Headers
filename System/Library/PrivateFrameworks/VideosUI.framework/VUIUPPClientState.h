/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface VUIUPPClientState : NSObject {

	NSMutableDictionary* _pendingChanges;
	NSMutableDictionary* _uppKeyToRecordMap;
	NSString* _lastSyncedDomainVersion;

}

@property (nonatomic,readonly) NSMutableDictionary * pendingChanges;                 //@synthesize pendingChanges=_pendingChanges - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * uppKeyToRecordMap;              //@synthesize uppKeyToRecordMap=_uppKeyToRecordMap - In the implementation block
@property (copy) NSString * lastSyncedDomainVersion;                                 //@synthesize lastSyncedDomainVersion=_lastSyncedDomainVersion - In the implementation block
-(NSMutableDictionary *)pendingChanges;
-(id)init;
-(NSMutableDictionary *)uppKeyToRecordMap;
-(void)setLastSyncedDomainVersion:(NSString *)arg1 ;
-(NSString *)lastSyncedDomainVersion;
@end

