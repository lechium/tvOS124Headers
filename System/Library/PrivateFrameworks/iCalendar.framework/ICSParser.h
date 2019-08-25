/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICSTokenizer, NSData;

@interface ICSParser : NSObject {

	long long _options;
	ICSTokenizer* _lexer;
	NSData* _data;

}

@property (readonly) ICSTokenizer * lexer;              //@synthesize lexer=_lexer - In the implementation block
+(id)entitiesFromNSData:(id)arg1 options:(long long)arg2 ;
-(void)parseParameter:(id)arg1 ;
-(BOOL)createPropertyType:(int)arg1 component:(id)arg2 withName:(id)arg3 ;
-(id)makeComponent:(char*)arg1 ;
-(void)parseComponent:(id)arg1 ;
-(BOOL)parseProperty:(id)arg1 ;
-(id)parseData;
-(ICSTokenizer *)lexer;
-(id)initWithData:(id)arg1 options:(unsigned long long)arg2 ;
@end

