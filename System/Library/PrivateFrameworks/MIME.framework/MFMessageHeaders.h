/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface MFMessageHeaders : NSObject <NSCopying> {

	NSData* _data;
	unsigned _preferredEncoding;

}

@property (nonatomic,retain) NSData * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned preferredEncoding; 
+(id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned)arg2 ;
+(BOOL)shouldDecodeHeaderForKey:(id)arg1 ;
+(id)addressListFromEncodedString:(id)arg1 ;
+(id)uniqueHeaderKeyStringForString:(id)arg1 ;
+(BOOL)isStructuredHeaderKey:(id)arg1 ;
+(id)basicHeaders;
+(id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned long long)arg2 firstLineBuffer:(unsigned long long)arg3 ;
-(id)_decodeHeaderKeysFromData:(id)arg1 ;
-(unsigned)_contentTypeEncoding;
-(void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2 ;
-(id)copyFirstNonDecodedHeaderForKey:(id)arg1 ;
-(id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(NSRange)arg2 ;
-(id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned long long*)arg2 decoded:(BOOL)arg3 ;
-(id)_copyHeaderValueForKey:(id)arg1 ;
-(id)_copyAddressListForKey:(id)arg1 ;
-(id)copyFirstHeaderForKey:(id)arg1 ;
-(id)_commaSeparatedValuesForKey:(id)arg1 includeAngleBracket:(BOOL)arg2 ;
-(id)_headerValueForKey:(id)arg1 offset:(unsigned long long*)arg2 ;
-(id)allHeaderKeys;
-(id)initWithASCIIHeaderString:(id)arg1 ;
-(BOOL)_isStructuredHeaderKey:(id)arg1 ;
-(id)headersDictionary;
-(id)_headerValueForKey:(id)arg1 ;
-(BOOL)hasHeaderForKey:(id)arg1 ;
-(id)copyAddressListForReplyTo;
-(id)listUnsubscribeCommands;
-(BOOL)messageIsFromEntourage;
-(unsigned)preferredEncoding;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(id)firstHeaderForKey:(id)arg1 ;
-(id)encodedHeaders;
-(id)copyAddressListForResentFrom;
-(id)copyAddressListForSender;
-(void)appendHeaderData:(id)arg1 andRecipients:(id)arg2 ;
-(id)copyAddressListForTo;
-(id)copyAddressListForCc;
-(id)firstSenderAddress;
-(id)references;
-(id)copyHeadersForKey:(id)arg1 ;
-(id)copyAddressListForBcc;
-(id)copyFirstStringValueForKey:(id)arg1 ;
-(id)initWithHeaderData:(id)arg1 encoding:(unsigned)arg2 ;
-(id)headersForKey:(id)arg1 ;
-(id)_capitalizedKeyForKey:(id)arg1 ;
-(id)headerData;
-(id)mutableCopy;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
@end

