/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIAppDocumentUpdateEventDescriptor : NSObject <NSCopying> {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(id)restrictions;
+(id)entitlements;
+(id)purchases;
+(id)settings;
+(id)postPlay;
+(id)playActivity;
+(id)upNext;
+(id)favorites;
+(id)accountChanged;
+(id)removeFromPlayHistory;
+(id)utsk;
+(id)preferredVideoFormat;
+(id)appDidBecomeActive;
+(id)playHistoryUpdated;
+(id)clearPlayHistory;
+(id)locationAuthorizationChanged;
-(id)initWithEventType:(unsigned long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end
