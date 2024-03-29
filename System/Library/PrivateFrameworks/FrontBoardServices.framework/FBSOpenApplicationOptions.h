/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSDictionary, NSURL, NSString;

@interface FBSOpenApplicationOptions : NSObject <BSXPCCoding, NSCopying> {

	NSMutableDictionary* _payload;

}

@property (nonatomic,copy) NSDictionary * dictionary;               //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)optionsWithDictionary:(id)arg1 ;
-(void)_sanitizeAndValidatePayload;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSDictionary *)dictionary;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)url;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setDictionary:(NSDictionary *)arg1 ;
@end

