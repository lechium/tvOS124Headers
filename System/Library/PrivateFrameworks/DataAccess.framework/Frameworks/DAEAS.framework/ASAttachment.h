/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>
#import <DAEAS/DAMailMessageAttachment.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ASAttachment : ASItem <DAMailMessageAttachment, NSSecureCoding> {

	NSString* _name;
	NSNumber* _size;
	NSNumber* _method;
	NSString* _displayName;
	NSString* _contentId;
	NSString* _contentLocation;
	NSNumber* _isInline;
	NSNumber* _hasBase64Transfer;
	NSString* _clientId;

}

@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSNumber * size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,copy) NSNumber * method;                         //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSString * displayName;                    //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * contentId;                      //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,copy) NSString * contentLocation;                //@synthesize contentLocation=_contentLocation - In the implementation block
@property (nonatomic,copy) NSNumber * isInline;                       //@synthesize isInline=_isInline - In the implementation block
@property (nonatomic,copy) NSNumber * hasBase64Transfer;              //@synthesize hasBase64Transfer=_hasBase64Transfer - In the implementation block
@property (nonatomic,copy) NSString * clientId;                       //@synthesize clientId=_clientId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
+(BOOL)supportsSecureCoding;
-(void)setClientId:(NSString *)arg1 ;
-(NSString *)clientId;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setMethod:(NSNumber *)arg1 ;
-(NSString *)contentLocation;
-(BOOL)isMostDefinitelyBase64ed;
-(void)setPercentEscapedName:(id)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(void)setContentLocation:(NSString *)arg1 ;
-(void)setIsInline:(NSNumber *)arg1 ;
-(void)setHasBase64Transfer:(NSNumber *)arg1 ;
-(NSString *)contentId;
-(NSNumber *)isInline;
-(NSNumber *)hasBase64Transfer;
-(NSNumber *)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(void)setSize:(NSNumber *)arg1 ;
-(NSNumber *)method;
-(NSString *)displayName;
@end

