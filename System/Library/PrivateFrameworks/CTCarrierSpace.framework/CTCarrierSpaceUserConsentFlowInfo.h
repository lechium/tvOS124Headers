/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CTCarrierSpaceUserConsentFlowInfo : NSObject <NSSecureCoding> {

	NSString* _webURL;
	NSString* _postData;

}

@property (nonatomic,retain) NSString * webURL;                //@synthesize webURL=_webURL - In the implementation block
@property (nonatomic,retain) NSString * postData;              //@synthesize postData=_postData - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)webURL;
-(void)setWebURL:(NSString *)arg1 ;
-(NSString *)postData;
-(void)setPostData:(NSString *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end

