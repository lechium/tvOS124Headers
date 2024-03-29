/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding> {

	BOOL _success;
	NSError* _error;
	NSNumber* _itemID;

}

@property (retain) NSNumber * itemID;                        //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,readonly) BOOL success;                 //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
+(id)failedToPurchaseItemID:(id)arg1 withError:(id)arg2 ;
+(id)successfullyPurchasedItemID:(id)arg1 ;
+(BOOL)supportsSecureCoding;
-(NSNumber *)itemID;
-(BOOL)success;
-(id)initWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)setItemID:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
@end

