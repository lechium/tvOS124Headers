/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFormatter.h>

@class NSArray, NSMapTable;

@interface TSKMappingFormatter : NSFormatter {

	NSArray* _inputs;
	NSMapTable* _mapping;

}

@property (nonatomic,copy) NSMapTable * mapping;                   //@synthesize mapping=_mapping - In the implementation block
@property (nonatomic,copy,readonly) NSArray * inputs;              //@synthesize inputs=_inputs - In the implementation block
-(NSArray *)inputs;
-(NSMapTable *)mapping;
-(void)setMapping:(NSMapTable *)arg1 ;
-(BOOL)getObjectValue:(out id*)arg1 forString:(id)arg2 errorDescription:(out id*)arg3 ;
-(id)initWithInputs:(id)arg1 outputs:(id)arg2 ;
-(id)stringForObjectValue:(id)arg1 ;
@end

