/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProtocolBuffer/ProtocolBuffer-Structs.h>
@class NSCharacterSet, NSString, NSMutableDictionary;

@interface PBTextReader : NSObject {

	NSCharacterSet* _whitespaceAndNewlineCharacterSet;
	NSCharacterSet* _tagNameCharacterSet;
	NSCharacterSet* _nonHexDigitCharacterSet;
	unsigned long long _pos;
	unsigned long long _length;
	NSString* _string;
	NSMutableDictionary* _objects;
	NSMutableDictionary* _cachedObjectTypes;

}
-(BOOL)_hasMore;
-(id)readMessageType:(Class)arg1 fromString:(id)arg2 ;
-(id)_stringAtCurrentPositionWithPadding:(unsigned long long)arg1 ;
-(NSRange)_rangeOfCharactersInSetAtCurrentPosition:(id)arg1 ;
-(void)_readTag:(id*)arg1 andType:(unsigned long long*)arg2 ;
-(id)_readValue;
-(id)_readObject:(Class)arg1 ;
-(id)_readStruct:(id)arg1 ;
-(id)_parseNumber:(id)arg1 maxValue:(unsigned long long)arg2 isSigned:(BOOL)arg3 ;
-(id)_readString;
-(id)init;
-(void)dealloc;
@end

