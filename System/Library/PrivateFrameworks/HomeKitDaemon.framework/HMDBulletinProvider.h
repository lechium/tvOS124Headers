/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface HMDBulletinProvider : HMFObject <NSSecureCoding> {

	NSMutableDictionary* _bulletins;

}

@property (nonatomic,retain) NSMutableDictionary * bulletins;              //@synthesize bulletins=_bulletins - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSMutableDictionary *)bulletins;
-(void)setBulletins:(NSMutableDictionary *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

