/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReorderSymbol2Command : NSObject <SCKZoneCommand> {

	NSString* _symbol;
	unsigned long long _toIndex;

}

@property (nonatomic,copy,readonly) NSString * symbol;                  //@synthesize symbol=_symbol - In the implementation block
@property (nonatomic,readonly) unsigned long long toIndex;              //@synthesize toIndex=_toIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithSymbol:(id)arg1 toIndex:(unsigned long long)arg2 ;
-(void)executeWithZone:(id)arg1 ;
-(unsigned long long)toIndex;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)symbol;
@end

