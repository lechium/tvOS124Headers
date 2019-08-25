/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SSProtocolConditionalContext : NSObject <NSCopying> {

	/*^block*/id _itemLookupBlock;
	NSString* _platformName;
	NSString* _systemVersion;

}

@property (nonatomic,copy) id itemLookupBlock;                    //@synthesize itemLookupBlock=_itemLookupBlock - In the implementation block
@property (nonatomic,copy) NSString * platformName;               //@synthesize platformName=_platformName - In the implementation block
@property (nonatomic,copy) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
-(id)itemLookupBlock;
-(NSString *)platformName;
-(void)setItemLookupBlock:(id)arg1 ;
-(void)setPlatformName:(NSString *)arg1 ;
-(void)setSystemVersion:(NSString *)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)systemVersion;
@end

