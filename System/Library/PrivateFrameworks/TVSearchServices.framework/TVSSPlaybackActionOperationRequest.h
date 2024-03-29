/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSearchServices/TVSearchServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface TVSSPlaybackActionOperationRequest : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalID;
	NSString* _contentType;

}

@property (nonatomic,copy,readonly) NSString * canonicalID;              //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,copy,readonly) NSString * contentType;              //@synthesize contentType=_contentType - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)contentType;
-(id)initWithCanonicalID:(id)arg1 contentType:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)canonicalID;
@end

