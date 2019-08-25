/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface BWColorLookupCacheEntry : NSObject {

	NSData* _foregroundColorLookupTable;
	NSData* _backgroundColorLookupTable;

}

@property (nonatomic,retain,readonly) NSData * foregroundColorLookupTable;              //@synthesize foregroundColorLookupTable=_foregroundColorLookupTable - In the implementation block
@property (nonatomic,retain,readonly) NSData * backgroundColorLookupTable;              //@synthesize backgroundColorLookupTable=_backgroundColorLookupTable - In the implementation block
-(NSData *)foregroundColorLookupTable;
-(NSData *)backgroundColorLookupTable;
-(id)initWithForegroundColorLookupTable:(id)arg1 backgroundColorLookupTable:(id)arg2 ;
-(id)init;
-(void)dealloc;
@end

