/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SCKZoneCommand.h>

@class NSString;

@interface SCWatchlistReplaceSymbolCommand : NSObject <SCKZoneCommand> {

	NSString* _oldSymbol;
	NSString* _replacementSymbol;

}

@property (nonatomic,copy,readonly) NSString * oldSymbol;                      //@synthesize oldSymbol=_oldSymbol - In the implementation block
@property (nonatomic,copy,readonly) NSString * replacementSymbol;              //@synthesize replacementSymbol=_replacementSymbol - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithOldSymbol:(id)arg1 replacementSymbol:(id)arg2 ;
-(void)executeWithZone:(id)arg1 ;
-(NSString *)oldSymbol;
-(NSString *)replacementSymbol;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

