/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDictionary;

@interface BBAccessoryIcon : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _imagesForContentSize;

}

@property (nonatomic,copy) NSDictionary * imagesForContentSize;              //@synthesize imagesForContentSize=_imagesForContentSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)imagesForContentSize;
-(void)setImagesForContentSize:(NSDictionary *)arg1 ;
-(void)addImage:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(id)imageForContentSizeCategory:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

