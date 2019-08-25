/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVTopShelfProvider.h>

@class NSArray;

@interface _TVExtensionPrincipalObject : NSObject <TVTopShelfProvider>

@property (readonly) long long topShelfStyle; 
@property (readonly) NSArray * topShelfItems; 
+(void)augmentAppContextWithSystemExtensions:(id)arg1 jsContext:(id)arg2 ;
+(void)initialize;
-(long long)topShelfStyle;
-(NSArray *)topShelfItems;
-(void)provideTopShelfItems:(/*^block*/id)arg1 ;
-(void)topShelfItemSelected:(id)arg1 ;
-(void)topShelfItemPlayed:(id)arg1 ;
-(id)init;
@end

