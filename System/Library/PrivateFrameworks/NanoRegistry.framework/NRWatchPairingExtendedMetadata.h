/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NRWatchPairingExtendedMetadata : NSObject <NSSecureCoding> {

	BOOL _postFailsafeObliteration;
	long long _chipID;
	NSString* _productType;

}

@property (assign,nonatomic) long long chipID;                           //@synthesize chipID=_chipID - In the implementation block
@property (nonatomic,retain) NSString * productType;                     //@synthesize productType=_productType - In the implementation block
@property (assign,nonatomic) BOOL postFailsafeObliteration;              //@synthesize postFailsafeObliteration=_postFailsafeObliteration - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)chipID;
-(void)setChipID:(long long)arg1 ;
-(BOOL)postFailsafeObliteration;
-(void)setPostFailsafeObliteration:(BOOL)arg1 ;
-(NSString *)productType;
-(void)setProductType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

