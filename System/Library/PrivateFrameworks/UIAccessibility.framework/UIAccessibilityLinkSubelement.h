/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKitCore/UIAccessibilityElement.h>

@class NSURL;

@interface UIAccessibilityLinkSubelement : UIAccessibilityElement {

	NSURL* _url;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
@property (nonatomic,retain) NSURL * url;                //@synthesize url=_url - In the implementation block
-(id)textRangeForTextView:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(unsigned long long)accessibilityTraits;
-(NSURL *)url;
-(void)setUrl:(NSURL *)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

