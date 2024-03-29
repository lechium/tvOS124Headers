/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@protocol CoreDAVItem <NSObject>
@required
+(id)parseRuleCache;
+(id)copyParseRules;
-(void)write:(id)arg1;
-(void)parserFoundPayload:(id)arg1;
-(void)parserFoundUnrecognizedElement:(id)arg1;
-(void)parserSuggestsBaseURL:(id)arg1;
-(void)parserFoundAttributes:(id)arg1;
-(id)copyParseRules;
-(BOOL)validate;

@end


@class NSString, NSMutableSet, NSMutableArray, NSData;

@interface CoreDAVItem : NSObject <CoreDAVItem> {

	NSString* _name;
	NSString* _nameSpace;
	NSMutableSet* _attributes;
	NSMutableArray* _extraChildItems;
	NSData* _payload;
	BOOL _useCDATA;

}

@property (nonatomic,retain) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * nameSpace;                          //@synthesize nameSpace=_nameSpace - In the implementation block
@property (nonatomic,retain) NSMutableSet * attributes;                     //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * extraChildItems;              //@synthesize extraChildItems=_extraChildItems - In the implementation block
@property (nonatomic,retain) NSData * payload;                              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) BOOL useCDATA;                                 //@synthesize useCDATA=_useCDATA - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parseRuleCache;
+(id)copyParseRules;
-(NSString *)nameSpace;
-(void)write:(id)arg1 ;
-(void)setNameSpace:(NSString *)arg1 ;
-(void)parserFoundPayload:(id)arg1 ;
-(void)parserFoundUnrecognizedElement:(id)arg1 ;
-(void)parserSuggestsBaseURL:(id)arg1 ;
-(id)generateXMLString;
-(void)setExtraChildItems:(NSMutableArray *)arg1 ;
-(BOOL)useCDATA;
-(void)setUseCDATA:(BOOL)arg1 ;
-(id)payloadAsString;
-(id)initWithNameSpace:(id)arg1 andName:(id)arg2 ;
-(void)parserFoundAttributes:(id)arg1 ;
-(NSMutableArray *)extraChildItems;
-(id)copyParseRules;
-(id)childrenToWrite;
-(void)setPayloadAsString:(id)arg1 ;
-(id)init;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSString *)description;
-(NSMutableSet *)attributes;
-(void)setAttributes:(NSMutableSet *)arg1 ;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(id)hashString;
-(BOOL)validate;
@end

