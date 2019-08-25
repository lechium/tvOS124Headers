/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface SSVStoreDownload : NSObject {

	NSDictionary* _properties;
	NSString* _preferredAssetFlavor;

}

@property (nonatomic,readonly) NSDictionary * properties;                //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSString * preferredAssetFlavor;              //@synthesize preferredAssetFlavor=_preferredAssetFlavor - In the implementation block
-(void)setPreferredAssetFlavor:(NSString *)arg1 ;
-(NSString *)preferredAssetFlavor;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)properties;
@end
