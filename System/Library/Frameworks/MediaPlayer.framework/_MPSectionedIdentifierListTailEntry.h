/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/_MPSectionedIdentifierListProxyEntry.h>
#import <libobjc.A.dylib/MPSectionedIdentifierListEnumerationTrackingEntry.h>

@class NSString;

@interface _MPSectionedIdentifierListTailEntry : _MPSectionedIdentifierListProxyEntry <MPSectionedIdentifierListEnumerationTrackingEntry> {

	NSString* _sectionIdentifier;

}

@property (nonatomic,readonly) NSString * sectionIdentifier;              //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long branchDepth; 
@property (nonatomic,readonly) long long entryType; 
+(id)tailEntryWithSection:(id)arg1 branchDepth:(long long)arg2 ;
-(NSString *)sectionIdentifier;
-(id)trackingEntryResult;
@end

