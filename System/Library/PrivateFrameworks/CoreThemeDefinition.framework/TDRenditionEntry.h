/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSData, TDRenditionSpec;

@interface TDRenditionEntry : NSObject {

	renditionkeytoken* key;
	renditionkeytoken stackKey[18];
	const renditionkeyfmt* keyFormat;
	NSData* assetData;
	TDRenditionSpec* renditionSpec;

}

@property (nonatomic,retain,readonly) TDRenditionSpec * renditionSpec; 
@property (nonatomic,retain,readonly) NSData * assetData; 
-(NSData *)assetData;
-(TDRenditionSpec *)renditionSpec;
-(id)initWithKey:(const renditionkeytoken*)arg1 keyFormat:(const renditionkeyfmt*)arg2 assetData:(id)arg3 renditionSpec:(id)arg4 ;
-(void)dealloc;
-(long long)compare:(id)arg1 ;
@end
