/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKTextElement.h>

@class NSAttributedString;

@interface _TVIKTextElement : IKTextElement {

	NSAttributedString* _cachedAttributedString;

}

@property (nonatomic,copy) NSAttributedString * cachedAttributedString;              //@synthesize cachedAttributedString=_cachedAttributedString - In the implementation block
-(NSAttributedString *)cachedAttributedString;
-(void)setCachedAttributedString:(NSAttributedString *)arg1 ;
-(void)_stylesMarkedDirtyNotification:(id)arg1 ;
-(void)dealloc;
@end

