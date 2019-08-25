/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSDictionary, NSArray, PKTransitPassProperties, NSString;

@interface PKTransitBalanceModel : NSObject {

	NSDictionary* _balancesByID;
	NSArray* _balanceFields;
	PKTransitPassProperties* _transitProperties;
	NSArray* _displayableBalances;

}

@property (nonatomic,readonly) NSString * primaryDisplayableBalance; 
@property (nonatomic,readonly) NSArray * displayableBalances;                     //@synthesize displayableBalances=_displayableBalances - In the implementation block
@property (nonatomic,readonly) BOOL hasContent; 
-(void)setTransitProperties:(id)arg1 ;
-(void)setServerBalancesByID:(id)arg1 ;
-(void)_updatePrimaryDisplayableBalance;
-(id)initWithPass:(id)arg1 ;
-(void)setServerBalances:(id)arg1 ;
-(NSString *)primaryDisplayableBalance;
-(NSArray *)displayableBalances;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasContent;
@end

