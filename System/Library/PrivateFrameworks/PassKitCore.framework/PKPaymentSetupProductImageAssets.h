/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying> {

	CGImageRef _digitalCardImage;
	CGImageRef _plasticCardImage;
	CGImageRef _thumbnailImage;
	CGImageRef _logoImage;

}

@property (assign,nonatomic) CGImageRef digitalCardImage;              //@synthesize digitalCardImage=_digitalCardImage - In the implementation block
@property (assign,nonatomic) CGImageRef plasticCardImage;              //@synthesize plasticCardImage=_plasticCardImage - In the implementation block
@property (assign,nonatomic) CGImageRef thumbnailImage;                //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) CGImageRef logoImage;                     //@synthesize logoImage=_logoImage - In the implementation block
-(CGImageRef)logoImage;
-(void)setLogoImage:(CGImageRef)arg1 ;
-(void)setDigitalCardImage:(CGImageRef)arg1 ;
-(void)setPlasticCardImage:(CGImageRef)arg1 ;
-(CGImageRef)digitalCardImage;
-(CGImageRef)plasticCardImage;
-(void)setThumbnailImage:(CGImageRef)arg1 ;
-(CGImageRef)thumbnailImage;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

