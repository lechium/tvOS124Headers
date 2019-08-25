/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVCKDataType : NSObject <NSCopying, NSSecureCoding> {

	NSString* _name;
	TVCKDataType* _parent;

}

@property (nonatomic,retain) NSString * name;                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) TVCKDataType * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,readonly) BOOL hasVideo; 
+(id)dataTypeWithName:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(BOOL)hasVideo;
-(void)setParent:(TVCKDataType *)arg1 ;
-(id)initWithName:(id)arg1 parent:(id)arg2 ;
-(BOOL)isKindOf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TVCKDataType *)parent;
@end

