/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VideoSubscriberAccountUI-Structs.h>
#import <Foundation/NSValueTransformer.h>

@interface VSImageScaleValueTransformer : NSValueTransformer {

	CGSize _preferredSize;

}

@property (assign,nonatomic) CGSize preferredSize;              //@synthesize preferredSize=_preferredSize - In the implementation block
+(Class)transformedValueClass;
+(BOOL)allowsReverseTransformation;
-(id)transformedValue:(id)arg1 ;
-(void)setPreferredSize:(CGSize)arg1 ;
-(CGSize)preferredSize;
@end

