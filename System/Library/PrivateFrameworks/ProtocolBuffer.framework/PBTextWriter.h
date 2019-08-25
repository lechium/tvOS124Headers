/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableString, NSMutableDictionary;

@interface PBTextWriter : NSObject {

	BOOL _newlinesPrinted;
	long long _indent;
	NSMutableString* _dest;
	NSMutableDictionary* _cachedObjectTypes;

}
-(void)_indent;
-(void)_outdent;
-(void)_openBrace;
-(void)_closeBrace;
-(void)_printLine:(BOOL)arg1 format:(id)arg2 ;
-(void)_printNewlines;
-(void)_writePropertyAndValue:(id)arg1 forObject:(id)arg2 ;
-(void)_writeResult:(id)arg1 forProperty:(id)arg2 bracePrefix:(id)arg3 ;
-(BOOL)_write:(id)arg1 ;
-(BOOL)write:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)string;
-(void)reset;
@end

