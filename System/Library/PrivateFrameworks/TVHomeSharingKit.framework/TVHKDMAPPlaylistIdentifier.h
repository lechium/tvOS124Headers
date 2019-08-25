/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingKit/TVHomeSharingKit-Structs.h>
#import <TVHomeSharingKit/TVHKDMAPMediaEntityIdentifier.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVHKDMAPPlaylistIdentifier : TVHKDMAPMediaEntityIdentifier <NSSecureCoding> {

	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;              //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithProtocol:(unsigned long long)arg1 nonPersistentID:(unsigned long long)arg2 persistentID:(unsigned long long)arg3 ;
-(id)initWithProtocol:(unsigned long long)arg1 type:(unsigned long long)arg2 nonPersistentID:(unsigned long long)arg3 persistentID:(unsigned long long)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)type;
-(void)setType:(unsigned long long)arg1 ;
@end
