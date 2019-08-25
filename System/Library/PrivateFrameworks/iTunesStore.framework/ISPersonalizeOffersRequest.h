/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSMutableDictionary, NSArray;

@interface ISPersonalizeOffersRequest : NSObject <NSCopying> {

	NSNumber* _accountIdentifier;
	NSMutableDictionary* _itemIDsByType;

}

@property (nonatomic,retain) NSNumber * accountIdentifier;              //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * allItemTypes; 
-(NSArray *)allItemTypes;
-(id)itemIdentifiersForItemType:(id)arg1 ;
-(void)addItemIdentifier:(id)arg1 forItemType:(id)arg2 ;
-(void)setAccountIdentifier:(NSNumber *)arg1 ;
-(NSNumber *)accountIdentifier;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithItems:(id)arg1 ;
@end

